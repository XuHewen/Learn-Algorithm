#include <cassert>
#include <iostream>


template<typename T>
class MaxHeap {
private:
    T* data;
    int count;
    int capacity;

    void shiftUp(int k) {
        // while(k > 0 && data[k] > data[(k-1)/2]) {
        //     std::swap(data[k], data[(k-1)/2]);
        //     k = (k-1) / 2;
        // }
        T temp = data[k];
        while(k > 0 && temp > data[(k-1)/2]) {
            data[k] = data[(k-1)/2];
            k = (k - 1) / 2;
        }
        data[k] = temp;
    }

    void shiftDown(int k) {
        // while(2*k + 1 < count) {
        //     int j = 2*k + 1;
        //     if(2*k + 2 < count && data[2*k+2] > data[2*k+1])
        //         j += 1;
        //     if(data[k] >= data[j])
        //         break;
        //     std::swap(data[k], data[j]);
        //     k = j;
        // }
        T temp = data[k];
        while(2*k + 1 < count) {
            int j = 2*k + 1;
            if(2*k + 2 < count && data[2*k+2] > data[2*k+1])
                j += 1;
            if(temp >= data[j])
                break;
            data[k] = data[j];
            k = j;
        }
        data[k] = temp;
    }

public:
    MaxHeap(int capacity) {
        this->capacity = capacity;
        this->count = 0;
        data = new T[capacity];
    }

    MaxHeap(T arr[], int n) {
        capacity = n;
        count = n;
        data = new T[n];
        for(int i=0; i<n; i++)
            data[i] = arr[i];

        for(int k=(count-1)/2; k>=0; k--)
            shiftDown(k);
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    void insert(T item) {
        assert(count < capacity);
        data[count] = item;
        shiftUp(count);
        count++;
    }

    T extractMax() {
        assert(count > 0);
        T ret = data[0];

        std::swap(data[0], data[count-1]);
        count--;

        shiftDown(0);

        return ret;
    }

    void printArray() {
        for(int i=0; i<count; i++)
            std::cout << data[i] << " ";
        std::cout << std::endl;
    }

    ~MaxHeap() {
        delete[] data;
    }

};
