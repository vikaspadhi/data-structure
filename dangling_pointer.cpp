// A dangling pointer is a pointer which points to some non-existing memory location.

#include<iostream>
using namespace std;

int main(){

    int* ptr=(int*)malloc(sizeof(int));

    free(ptr); // Here memory gets free but ptr is still pointing to the address which doesn't exist.

    ptr= NULL; // re-initialize the ptr to NULL. Now, ptr is no more dangling.


    return 0;
}