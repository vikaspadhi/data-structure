// calloc() function is used to dynamically allocate multiple blocks of memory.
// calloc() needs two arguments instead of just one.

// Syntax: void* calloc(size_tn,size_t size);
// Two parameters are : Number of blocks,Size of each block

// Memory allocated by calloc is initialized to zero.

// It is not the case with malloc.Memory allocated by malloc is initialized with some garbage value.

// malloc and calloc both return NULL when sufficient memory is not available in the heap.


#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"How many numbers you want to enter? \n";
    cin>>n;

    int* ptr = (int*)calloc(n,sizeof(int));

    cout<<"Enter "<<n<<" numbers. \n";

    for(int i = 0 ; i< n ;i++){
        cin>>*(ptr+i);
    }

    cout<<"\nList of numbers: \n";

    for(int i = 0 ; i< n ;i++){
        cout<<*(ptr+i)<<" ";
    }

    cout<<"\n";

    return 0;
}