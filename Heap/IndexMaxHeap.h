#include <cassert>
#include <iostream>


template<typename T>
class IndexMaxHeap {
private:
    T* data;
    int count;
    int capacity;
    int* indexes;
    int* rev;

    void shiftUp(int k) {
        int temp = indexes[k];
        int temp_rev = rev[indexes[k]];

        while(k > 0 && data[temp] > data[indexes[(k-1)/2]]) {
            indexes[k] = indexes[(k-1)/2];
            rev[k] = (k - 1) / 2;
            k = (k - 1) / 2;
        }
        indexes[k] = temp;
        rev[k] = temp_rev;
    }

    void shiftDown(int k) {
        int temp = indexes[k];
        int temp_rev = rev[indexes[k]];
        while(2*k + 1 < count) {
            int j = 2*k + 1;
            if(2*k + 2 < count && data[indexes[2*k+2]] > data[indexes[2*k+2])
                j += 1;
            if(data[temp] >= data[indexes[j]])
                break;
            indexes[k] = indexes[j];
            rev[indexes] = j;
            k = j;
        }
        indexes[k] = temp;
        rev[k] = temp_rev;
    }

public:
    IndexMaxHeap(int capacity) {
        this->capacity = capacity;
        this->count = 0;
        data = new T[capacity];
        indexes = new int[capacity];
        rev = new int[capacity];

        for(int i=0; i<capacity; i++)
            rev[i] = -1;
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    void insert(int i, T item) {
        assert(count < capacity);
        assert(i>0 && i<capacity);
        data[i] = item;
        indexes[count] = i;
        rev[i] = count;
        shiftUp(count);
        count++;
    }

    T extractMax() {
        assert(count > 0);
        T ret = data[indexes[0]];

        std::swap(data[indexes[0]], data[indexes[count-1]]);
        rev[indexes[0]] = 0;
        rev[indexes[count-1]] = -1;
        count--;

        shiftDown(0);

        return ret;
    }

    int extractMaxIndex() {
        assert(count > 0);
        return indexes[0];
    }

    T getItem(int i) {
        assert(contain(i));
        return data[i];
    }

    void change(int i, T item) {
        assert(contain(i));
        data[i] = item;
        // for(int j=0; j<capacity; j++)
        //     if(indexes[j] == i) {
        //         shiftDown(j);
        //         shiftUp(j);
        //         return;
        //     }
        int j = rev[i];
        shiftDown(j);
        shiftUp(j);
    }

    bool contain(int i) {
        return rev[i] != -1;
    }

    void printArray() {
        for(int i=0; i<count; i++)
            std::cout << data[i] << " ";
        std::cout << std::endl;
    }

    ~MaxHeap() {
        delete[] data;
        delete[] indexes;
        delete[] rev;
    }

};
