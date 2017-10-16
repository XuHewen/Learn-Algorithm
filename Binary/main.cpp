#include <iostream>
#include "BinarySearch.h"


int main()
{
    int arr[10];
    for(int i=0; i<10; i++)
        arr[i] = i;

    std::cout << BinarySearch::BinarySearchRecur(arr, 10, 9) << std::endl;

    return 0;
}
