/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 9
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 ******************************************************************************/
#include "MergeSort.h"
#include <iostream>

MergeSort::MergeSort()
{

}
MergeSort::~MergeSort()
{

}

void MergeSort::merge(int Array[], int low, int high, int mid)
{
    int leftIndex, rightIndex, tempIndex, tempArray[100];
    leftIndex = low;
    tempIndex = low;
    rightIndex = mid + 1;
    while (leftIndex <= mid && rightIndex <= high)
    {
        if (Array[leftIndex] < Array[rightIndex])
        {
            tempArray[tempIndex] = Array[leftIndex];
            tempIndex++;
            leftIndex++;
        }
        else
        {
            tempArray[tempIndex] = Array[rightIndex];
            tempIndex++;
            rightIndex++;
        }
    }
    while (leftIndex <= mid)
    {
        tempArray[tempIndex] = Array[leftIndex];
        tempIndex++;
        leftIndex++;
    }
    while (rightIndex <= high)
    {
        tempArray[tempIndex] = Array[rightIndex];
        tempIndex++;
        rightIndex++;
    }
    for (leftIndex = low; leftIndex < tempIndex; leftIndex++)
    {
        Array[leftIndex] = tempArray[leftIndex];
    }
}

void MergeSort::mergeSort(int Array[], int low, int high)
{
    if (low < high)
    {
        int mid;
        mid = (low + high) / 2;

        mergeSort(Array, low, mid);
        mergeSort(Array, mid + 1, high);

        merge(Array, low, high, mid);
    }
    return;
}

void MergeSort::print(int Array[])
{
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << Array[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 90; i < 100; i++)
    {
        std::cout << Array[i] << " ";
    }
    std::cout << std::endl << std::endl;
}
