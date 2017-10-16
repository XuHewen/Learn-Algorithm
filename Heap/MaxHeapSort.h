#include "MaxHeap.h"

namespace MaxHeapSort {
    template<typename T>
    void MaxHeapSort1(T arr[], int n) {
        MaxHeap<int> maxheap = MaxHeap<int>(n);
        for(int i=0; i<n; i++)
            maxheap.insert(arr[i]);

        for(int i=n-1; i>=0; i--)
            arr[i] = maxheap.extractMax();
    }

    template<typename T>
    void MaxHeapSort2(T arr[], int n) {
        MaxHeap<int> maxheap = MaxHeap<int>(arr, n);

        for(int i=n-1; i>=0; i--)
            arr[i] = maxheap.extractMax();
    }

    template<typename T>
    void __shiftDown(T data[], int n, int k) {
        T temp = data[k];
        while(2*k + 1 < n) {
            int j = 2*k + 1;
            if(2*k + 2 < n && data[2*k+2] > data[2*k+1])
                j += 1;
            if(temp >= data[j])
                break;
            data[k] = data[j];
            k = j;
        }
        data[k] = temp;
    }

    template<typename T>
    void MaxHeapSort3(T arr[], int n) {
        for(int i=(n-1)/2; i>=0; i--)
            __shiftDown(arr, n, i);

        for(int i=n-1; i>0; i--) {
            std::swap(arr[0], arr[i]);
            __shiftDown(arr, i, 0);
        }
    }
}
