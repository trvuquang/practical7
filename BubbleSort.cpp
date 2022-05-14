# include "BubbleSort.h"

using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
    int length = list.size();
    while (length){
        for (int i = 1; i <= length - 1; i++){
            if (list.at(i - 1) > list.at(i)){       // if swap needed
                int temp = list.at(i - 1);          // save larger number
                list.at(i - 1) = list.at(i);        // swapping
                list.at(i) = temp;
            }
        }
        length--;
    }   // repeat until not swapped
    return list;
}