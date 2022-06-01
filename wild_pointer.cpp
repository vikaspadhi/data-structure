// Wild pointers are also known as uninitialized pointers.
// These pointers usually point to some arbitrary memory location and
// may causeaprogram to crash or misbehave.

#include<iostream>
using namespace std;

int main(){

    // here p is pointing to some arbitrary memory location these may cause error.
    int* p;
    *p = 10;


    // to avoid wild pointer initialize them with the address of a known variable.
    int var =10;
    int* ptr = &var; // No more wild pointer
     
    //another way to avoid wild pointer is explicitly allocate the memory and the values in the allocated memory
    int* pt = (int*)malloc(sizeof(int));
    *pt = 10;
    




    
    return 0;
}