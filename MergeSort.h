/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 9
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 ******************************************************************************/
#ifndef MERGESORT_H_
#define MERGESORT_H_

class MergeSort
{
    public:
    MergeSort();
    ~MergeSort();
    void merge(int Array[], int low, int high, int mid);
    void mergeSort(int Array[], int low, int high);
    void print(int Array[]);
    private:
    

};

#endif