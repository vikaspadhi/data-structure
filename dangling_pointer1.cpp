#include<iostream>
using namespace std;

int* func(){
    int num =10;
    // here func returns the address of local variable. This local variable will get vanished when the execution of this function ends.
    return &num; 
    
    // Best practice is never return memory address of local variable.
}

int main(){

    int* ptr = NULL;

    // since the function returns the address of the local variable the memory address doesn't exist after function call. Here ptr is pointing to the address which doesn't exist. Therefore it becomes dangling pointer.
    ptr = func(); 
    
    // This line shows error because ptr is not pointing to valid address.
    cout<<*ptr; 

    return 0;
}