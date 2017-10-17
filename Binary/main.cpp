#include <iostream>
#include "BinarySearch.h"
#include "BinarySearchTree.h"

int main()
{
    // int arr[10];
    // for(int i=0; i<10; i++)
    //     arr[i] = i;
    //
    // std::cout << BinarySearch::BinarySearchRecur(arr, 10, 9) << std::endl;
    BinarySearchTree<int, int> bst;

    int arr[10] = {10, 2, 5, 9, 4, 8, 7, 1, 6, 3};
    for(int i=0; i<10; i++)
        bst.insert(arr[i], 10-i);

    std::cout << bst.contain(2) << std::endl;

    return 0;
}
