# include "RecursiveBinarySearch.h"
# include "BubbleSort.h"
# include <iostream>
# include <vector>

bool RecursiveBinarySearch::search(vector<int> list, int item){
    BubbleSort bbs;
    list = bbs.sort(list);
    bool found = 0;
    int mid_pos = list.size() / 2;
    int mid_value = list.at(mid_pos);    

    while (list.size() >= 3){
        if (item == mid_value)
            return 1;
        else if (item == list.at(0))
            return 1;
        else if (item == list.at(list.size()-1))
            return 1;

        else if (item <= mid_value) {
            list.erase(list.begin()+mid_pos, list.end());
            show_list(list);
            return search(list, item);
        }
        else if (item >= mid_value) {
            list.erase(list.begin(), list.begin()+mid_pos);
            show_list(list);
            return search(list, item);
        }
    }
}

void RecursiveBinarySearch::show_list (vector<int> list){
    cout << "\nList is below:" << endl;
    for (int i = 0; i < list.size(); i++){
        cout << list.at(i);
        cout << " ";
    }
}