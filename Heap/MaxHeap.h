#include <cassert>

template<typename T>
class MaxHeap {

private:
    T* data;
    int count;
    int capacity;

public:
    MaxHeap(int capacity) {
        this->capacity = capacity;
        this->count = 0;
        data = new T[capacity];
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    ~MaxHeap() {
        delete[] data;
    }

};
