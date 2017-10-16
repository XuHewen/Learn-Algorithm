#include <iostream>
#include "SortTestHelper.h"
#include "InsertSort.h"
#include "MergeSort.h"
#include "SelectSort.h"
#include "QuickSort.h"
#include "ShellSort.h"

int main()
{
    int n = 1e5;
    int swapTimes = 10;
    // int *arr1 = SortTestHelper::generateRandomArray(n, 0, n);
    // int *arr1 = SortTestHelper::generateRandomArray(n, 0, 10);
    int *arr1 = SortTestHelper::generateNearlyOrderArray(n, swapTimes);
    int *arr2 = SortTestHelper::copyIntArray(arr1, n);
    int *arr3 = SortTestHelper::copyIntArray(arr1, n);
    int *arr4 = SortTestHelper::copyIntArray(arr1, n);
    int *arr5 = SortTestHelper::copyIntArray(arr1, n);

    // SortTestHelper::printArray(arr1, n);
    // ShellSort::ShellSort(arr1, n);
    // SortTestHelper::printArray(arr1, n);
    SortTestHelper::testSort("Insert Sort", InsertSort::InsertSort, arr1, n);
    SortTestHelper::testSort("Shell Sort", ShellSort::ShellSort, arr2, n);
    // SortTestHelper::testSort("Merge Sort", MergeSort::MergeSort, arr2, n);
    // SortTestHelper::testSort("Select Sort", SelectSort::SelectSort, arr3, n);
    // SortTestHelper::testSort("Quick Sort1", QuickSort1::QuickSort, arr3, n);
    // SortTestHelper::testSort("Quick Sort2", QuickSort2::QuickSort, arr4, n);
    // SortTestHelper::testSort("Quick Sort3", QuickSort3::QuickSort, arr5, n);


    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    delete[] arr5;

    std::cout << "hello world" << std::endl;
    return 0;
}
