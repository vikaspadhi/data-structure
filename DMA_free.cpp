// free()function is used to release the dynamically allocated memory in heap.

// The memory allocated in heap will not be released automatically after using the memory.
// The space remains there and can't be used.
// It is the programmer's responsibility to release the memory after use.



#include<iostream>
using namespace std;

int* input(){
    cout<<"Enter 3 numbers \n";
    int* ptr=(int*)malloc(3*sizeof(int));

    for(int i =0 ;i<3 ;i++){
        cin>>*(ptr+i);
    }

    return ptr;
}


int main(){

    int sum = 0;
    int* pt = input();

    
    for(int i = 0 ;i<3;i++){
        sum  =  sum + *(pt+i);
    }

    cout<<"Sum is "<<sum<<"\n";

    free(pt);

    pt = NULL;

    return 0;

}