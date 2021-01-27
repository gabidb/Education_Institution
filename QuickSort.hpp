#ifndef QuickSort_hpp
#define QuickSort_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "EducationalInstitution.h"

using namespace std;


class QuickSort {
public:
    
    template <class Comparable>
    void quicksort(vector<Comparable>& a);
    
    template <class Comparable>
    void quicksort(vector<Comparable>& a, int low, int high);

    template <class Comparable>
    void sortInstitutions(vector<EducationalInstitution> a, int index);
};
#endif /* QuickSort_hpp */
