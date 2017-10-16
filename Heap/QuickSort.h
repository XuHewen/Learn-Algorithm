#include "InsertSort.h"

namespace QuickSort1 {
    template<typename T>
    int __partition(T arr[], int left, int right) {
        std::swap(arr[left], arr[rand()%(right-left+1)+left]);
        T v = arr[left];

        int j = left;
        for(int i=left+1; i<=right; i++) {
            if(arr[i] < v) {
                std::swap(arr[i], arr[j+1]);
                j++;
            }
        }

        std::swap(arr[left], arr[j]);

        return j;
    }

    template<typename T>
    void __quickSortHelper(T arr[], int left, int right) {
        if(right - left <= 15) {
            InsertSort::InsertSort(arr, left, right);
            return;
        }
        int p = __partition(arr, left, right);
        __quickSortHelper(arr, left, p-1);
        __quickSortHelper(arr, p+1, right);
    }

    template<typename T>
    void QuickSort(T arr[], int n) {
        std::srand(std::time(NULL));
        __quickSortHelper(arr, 0, n-1);
    }
}

namespace QuickSort2 {
    template<typename T>
    int __partition(T arr[], int left, int right) {
        std::swap(arr[left], arr[rand()%(right-left+1)+left]);
        T v = arr[left];

        int i = left+1;
        int j = right;

        while(true) {
            while(i <= right && arr[i] < v)
                i++;
            while(j >= left && arr[j] > v)
                j--;
            if(i > j)
                break;
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        swap(arr[left], arr[j]);
        return j;
    }

    template<typename T>
    void __quickSortHelper(T arr[], int left, int right) {
        if(right - left <= 15) {
            InsertSort::InsertSort(arr, left, right);
            return;
        }
        int p = __partition(arr, left, right);
        __quickSortHelper(arr, left, p-1);
        __quickSortHelper(arr, p+1, right);
    }

    template<typename T>
    void QuickSort(T arr[], int n) {
        std::srand(std::time(NULL));
        __quickSortHelper(arr, 0, n-1);
    }
}

namespace QuickSort3 {
    template<typename T>
    void __quickSortHelper(T arr[], int left, int right) {
        if(right - left <= 15) {
            InsertSort::InsertSort(arr, left, right);
            return;
        }

        std::swap(arr[left], arr[rand()%(right-left+1)+left]);
        T v = arr[left];

        int li = left;
        int rj = right + 1;
        int i = left + 1;

        while(i < rj) {
            if(arr[i] < v) {
                std::swap(arr[i], arr[li+1]);
                li++;
                i++;
            }
            else if(arr[i] > v) {
                std::swap(arr[i], arr[rj-1]);
                rj--;
            }
            else {
                i++;
            }
        }

        swap(arr[left], arr[li]);

        __quickSortHelper(arr, left, li-1);
        __quickSortHelper(arr, rj, right);
    }

    template<typename T>
    void QuickSort(T arr[], int n) {
        std::srand(std::time(NULL));
        __quickSortHelper(arr, 0, n-1);
    }
}
