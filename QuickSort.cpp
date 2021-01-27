#include "QuickSort.hpp"
#include "DataStore.hpp"
template <class Comparable>
void QuickSort::quicksort(vector<Comparable>& a){
    quicksort(a, 0, a.size() - 1);
}

template <class Comparable>
void QuickSort::quicksort(vector<Comparable>& a, int low, int high){
    
    if(low + 10 > high) { // Call insertion sort for small subarrays
        insertionSort(a);
    }
    
    else{
        int middle = (low + high) / 2;   // Sort low, middle, high
        
        if(a[middle] < a[low]) swap(a[low], a[middle]);
        if(a[high] < a[low]) swap(a[low], a[high]);
        if(a[high] < a[middle]) swap(a[middle], a[high]);
        Comparable pivot = a[middle];
        swap(a[middle], a[high - 1]);
        
        // Begin partitioning
        int i, j;
        for(i = low, j = high - 1; ;) {
            while(a[++i] < pivot) {}
            while(pivot < a[--j]) {}
            if(i < j) swap(a[i], a[j]);
            else
                break;
            
        }
        
        swap(a[i], a[high - 1]); // Restore the pivot
        quicksort(a, low, i - 1); // Sort small elements
        quicksort(a, i + 1, high); // Sort large elements
        
    }
}
template <class Comparable>
void QuickSort::sortInstitutions(vector<EducationalInstitution> a, int index){
    
    // cout << "Sort institutions by any of the following criteria:"<< endl;
    // cout << "1. Name" << endl;
    // cout << "2. Price" << endl;
    // cout << "3. Rating" << endl;
    // cout << "4. Annual cost" << endl;
    // cout << "5. Exit" << endl;
        switch (index) {
            case 1:
                //sortBy = "name"; break;
            case 2:
               // sortBy = "price"; break;
            case 3:
                //sortBy = "rating"; break;
            case 4:
                //sortBy = "annual cost"; break;
            case 5: return; break;
        }
    quicksort(a);
    for( auto i:a)
        cout << i.getName() << endl;
}
