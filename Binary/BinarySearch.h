namespace BinarySearch {
    template<typename T>
    int BinarySearch(T arr[], int n, T target) {
        int l = 0;
        int r = n - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(arr[mid] == target)
                return mid;
            if(arr[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return -1;
    }

    template<typename T>
    int BinarySearchHelper(T arr[], int l, int r, T target) {
        if(l > r) {
            return -1;
        }
        int mid = l + (r - l) / 2;

        if(arr[mid] == target)
            return mid;
        if(arr[mid] < target)
            BinarySearchHelper(arr, mid+1, r, target);
        else
            BinarySearchHelper(arr, l, mid-1, target);
    }

    template<typename T>
    int BinarySearchRecur(T arr[], int n, T target) {
        BinarySearchHelper(arr, 0, n-1, target);
    }
}
