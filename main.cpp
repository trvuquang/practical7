# include <sstream>
# include <iostream>
# include <vector>
# include <string>
# include "Sort.h"
# include "BubbleSort.h"
# include "QuickSort.h"
# include "RecursiveBinarySearch.h"

using namespace std;

// Function used to count number of spaces
int space_counter(string input){
    int counter = 0;
    for (int i = 0; i < input.length(); i++){
        if (isspace(input.at(i)))
            counter ++;
    }
    return counter;
}


int main (){ 
    BubbleSort bbs;
    QuickSort qks;
    RecursiveBinarySearch rbs;
    string S, temp; 
    getline(cin, S);
    stringstream X(S);
    int index = 0;
    int space_counted = space_counter(S);
    string T[space_counted + 1];
    vector <int> input(space_counted + 1);
    while (getline(X, temp, ' ')) {
        T[index] = temp;
        input.at(index) = stoi (T[index]);
        index++;
    }

    vector <int> test = bbs.sort(input);
    if (rbs.search(test, 1))
        cout << "true ";
    else
        cout << "false ";
    
    for (int i = 0; i < test.size(); i++){
        cout << test.at(i);
        cout << " ";
    }
}

