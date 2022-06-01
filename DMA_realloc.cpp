// realloc() function is used to change the size of the memory block without losing the old data.

// syntax : void* realloc(void*ptr,size_t newSize)
// Two parameters are :Pointer to the previously allocated memory,New size

// Also,this function moves the contents of the old block
// to a new block and the data of the old block is not lost.

// We may lose the data when the new size is smaller than the old size.

// Newly allocated bytes are uninitialized.


#include<iostream>
using namespace std;

int main(){

    int* ptr = (int*)malloc(2*sizeof(int));
    cout<<"Enter 2 numbers \n";

    for(int i = 0; i < 2 ; i++){
        cin>>*(ptr+i);
    }

    int* ptr1=(int*)realloc(ptr,sizeof(int)*4);

    cout<<"ptr : "<<ptr<<"\n";
    cout<<"ptr1 : "<<ptr1<<"\n";

    cout<<"Enter 2 more numbers \n";

    //note here loop starts from 2
    for(int i =2 ;i<4;i++){
        cin>>*(ptr1+i);
    }

    for(int i =0 ;i<4;i++){
        cout<<*(ptr1+i)<<" ";
    }

    return 0;
}