# ifndef QUICKSORT_H
# define QUICKSORT_H

# include "Sort.h"

class QuickSort : public Sort {
    public:
        int partition (std::vector<int> a_list, int lo, int hi);
        std::vector<int> qs (std::vector<int> a_list, int lo, int hi);
        std::vector<int> sort(std::vector<int> list);   
    private:
        int lo, hi;
};


# endif