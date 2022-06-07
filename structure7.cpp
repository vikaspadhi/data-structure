// SELF REFRENTIAL STRUCTURES
// Definition:Self referential structures are those structures in which one or 
//more pointers points to the structure of the same type.

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){

    Node n1,n2;
    n1.data=10;
    n1.next=&n2;
    n2.data=20;
    n2.next=NULL;

    cout<<"n1.data : "<<n1.data<<" , n1.next : "<<n1.next<<"\n";
    cout<<"n2.data : "<<n2.data<<" , n2.next : "<<n2.next<<"\n";
    cout<<"n1.next->data : "<<n1.next->data <<" , n1.next->next : "<<n1.next->next<<"\n";

    return 0;
}