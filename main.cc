#include <iostream>

void printCudaVersion();

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << "CUDA: On" << std::endl;
    printCudaVersion();

    return 0;
}
