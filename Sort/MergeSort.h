#include "InsertSort.h"

namespace MergeSort {

    template<typename T>
    void __merge(T arr[], int left, int mid, int right) {
        T aux[right - left + 1];
        for(int i=left; i<=right; i++)
            aux[i-left] = arr[i];

        int i = left;
        int j = mid + 1;
        for(int k=left; k<=right; k++) {
            if(i > mid) {
                arr[k] = aux[j-left];
                j++;
            }
            else if(j > right) {
                arr[k] = aux[i-left];
                i++;
            }
            else if(aux[i-left] < aux[j-left]) {
                arr[k] = aux[i-left];
                i++;
            }
            else {
                arr[k] = aux[j-left];
                j++;
            }
        }
    }

    template<typename T>
    void __mergeSortHelper(T arr[], int left, int right) {
        // if(left >= right)
        //     return;
        if(right - left <= 15) {
            InsertSort::InsertSort(arr, left, right);
            return;
        }

        int mid = (left + right) / 2;
        __mergeSortHelper(arr, left, mid);
        __mergeSortHelper(arr, mid+1, right);

        if(arr[mid] > arr[mid+1])
            __merge(arr, left, mid, right);
    }

    template<typename T>
    void MergeSort(T arr[], int n) {
        __mergeSortHelper(arr, 0, n-1);
    }
}
