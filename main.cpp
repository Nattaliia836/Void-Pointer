#include <iostream>
#include "binary.h"

using namespace std;

struct A{
    bool b;
    int a;
};

struct alignas(alignof(A) * 2 * 2) B{
    bool b = true;
    int a = 7;
};

int main()
{
    A a;
    std::cout << "Size struct A: " << sizeof(A) << std::endl;
    cout << "Alignment struct A: " << alignof(A) << std::endl;
	printBinary(&a, sizeof(a));
	
	B b;
	std::cout << "Size struct B: " << sizeof(B) << std::endl;
    cout << "Alignment struct B: " << alignof(B) << std::endl;
    printBinary(&b, sizeof(b));
    
	
	return 0;
}