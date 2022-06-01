// malloc is the short name for "memory allocation" and is used to dynamically
// allocate a single large block of contiguous memory according to the size
// specified.

// malloc function simply allocates a memory block according to the size
// specified in the heap and on success it returns a pointer pointing to
// the first byte of the allocated memory else returns NULL.

#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"How many numbers you want to enter? \n";
    cin>>n;

    int* ptr = (int*)malloc(n*sizeof(int));

    cout<<"\n Enter "<<n<<" numbers \n";

    for(int i =  0 ; i< n ;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<"\nList of numbers \n";
    for(int i =  0 ; i< n ;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<"\n";
    
    return 0;
}