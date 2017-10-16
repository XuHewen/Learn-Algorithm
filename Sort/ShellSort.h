namespace ShellSort {
    template<typename T>
    void ShellSort(T arr[], int n) {
        for(int gap=n/2; gap>0; gap /= 2) {
            for(int i=gap; i<n; i++) {
                int j = i;
                T temp = arr[i];
                while(j - gap >= 0 && temp < arr[j - gap]) {
                    arr[j] = arr[j - gap];
                    j -= gap;
                }
                arr[j] = temp;
            }
        }
    }
}
