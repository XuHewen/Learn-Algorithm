#include <iostream>
#include "MaxHeap.h"

int main()
{
    MaxHeap<int> maxheap = MaxHeap<int>(100);
    std::cout << maxheap.isEmpty() << std::endl;
    std::cout << maxheap.size() << std::endl;
    std::cout << "hello world!" << std::endl;
    return 0;
}
