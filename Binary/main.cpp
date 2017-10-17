#include <iostream>
#include "BinarySearch.h"
#include "BinarySearchTree.h"

int main()
{
<<<<<<< HEAD
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
=======
    int arr[10] = {5, 2, 9, 1, 6, 8, 10, 3, 4, 7};
    BST<int, int> bst;
    for(int i=0; i<10; i++)
        bst.insert(arr[i], i);
    std::cout << bst.size() << std::endl;
    std::cout << bst.contain(arr[0]) << std::endl;

    // bst.preorder();
    // bst.preorder_stk();

    // bst.inorder();
    // bst.inorder_stk();

    // bst.postorder();
    // bst.postorder_stk();

    // bst.levelorder();

    // std::cout << *bst.search(1) << std::endl;
    // bst.findMin();
    // bst.findMax();

    bst.removeMin();

    bst.removeMax();
    bst.preorder();
>>>>>>> f002e8b74a5bcf6813fa76ddd39131792a66ded8

    return 0;
}
