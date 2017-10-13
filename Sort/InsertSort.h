#ifndef Sort_INSERTSORT_H
#define Sort_INSERTSORT_H


namespace InsertSort {
    template<typename T>
    void InsertSort(T arr[], int n) {
        for(int i=1; i<n; i++) {
            int j = i;
            T temp = arr[i];
            while(j > 0 && temp < arr[j-1]) {
                arr[j] = arr[j-1];
                j--;
            }
            arr[j] = temp;
        }
    }

    template<typename T>
    void InsertSort(T arr[], int left, int right) {
        for(int i=left; i<=right; i++) {
            int j = i;
            T temp = arr[i];
            while(j > left && temp < arr[j-1]) {
                arr[j] = arr[j-1];
                j--;
            }
            arr[j] = temp;
        }
    }
}

#endif
