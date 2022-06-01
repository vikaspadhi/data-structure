//Void pointer is a pointer which has no associated data type with it.
//It can point to any data of any data type and can be typecasted to any type.

#include<iostream>
using namespace std;
int main(){

    int a  = 10;
    void* ptr = &a;

    cout<<*(int*)ptr<<"\n";

    return 0;
}