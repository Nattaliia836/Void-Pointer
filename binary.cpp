#include "binary.h"
#include <iostream>

using namespace std;

void printBinary(void* ptr, int sizeEl){
    char* cptr = (char*) ptr;
    for (int i = (sizeEl * 8) - 1; i >= 0; i--)
    {
        if ((*cptr) & 1<< i)  
            std::cout << "1";
        else
            std::cout << "0";
    }
}