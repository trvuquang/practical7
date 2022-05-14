# include "QuickSort.h"

using namespace std;

//https://www.geeksforgeeks.org/cpp-program-for-quicksort/

vector<int> QuickSort::qs (std::vector<int> a_list, int lo, int hi){
    if (lo >= hi)
        return a_list;

    int p = partition (a_list, lo, hi);
    qs (a_list, lo, p - 1);
    qs (a_list, p + 1, hi);
    
}


int QuickSort::partition (vector<int> a_list, int lo, int hi){
    int pivot = a_list.at(lo); 
    int count = 0;

    for (int i = lo + 1; i <= hi; i++){
        if (a_list.at(i) <= pivot)
            count++;
    }    
    int pivot_pos = lo + count;  
    swap (a_list.at(pivot_pos), a_list.at(lo));

    int i = lo;
    int j = hi;

    while (i < pivot_pos && j > pivot_pos){
        while (a_list.at(i) <= pivot) {
            i++;
        }

        while (a_list.at(j) > pivot) {
            j--;
        }

        if (i < pivot_pos && j > pivot_pos)
            swap (a_list.at(i++), a_list.at(j--)); 
    }

    return pivot_pos;
}



// Lomuto partition scheme
vector<int> QuickSort::sort(vector<int> list){
    return qs(list, 0, list.size() - 1);
}