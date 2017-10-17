#include <iostream>
#include "BinarySearch.h"
#include "BinarySearchTree.h"

int main()
{
    int arr[10] = {5, 2, 9, 1, 6, 8, 10, 3, 4, 7};
    BST<int, int> bst;
    for(int i=0; i<10; i++)
        bst.insert(arr[i], i);
    // std::cout << bst.size() << std::endl;
    // std::cout << bst.contain(arr[0]) << std::endl;

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

<<<<<<< HEAD
    // bst.removeMin();
    //
    // bst.removeMax();
    bst.remove(9);
    bst.levelorder();
    // std::cout << bst.size() << std::endl;
=======
    bst.removeMin();

    bst.removeMax();
    bst.preorder();
>>>>>>> 7f6c6712876c4af2c940030edc1f861a36d57408

    return 0;
}
