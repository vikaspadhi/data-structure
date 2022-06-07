// POINTER TO STRUCTURE AS AN ARGUMENT
// If the size of the structure is very large then passing the copy of the whole structure is not efficient.
// BETTER CHOICE:Pass the address of the structure
// Use the arrow operator(->)to access the structure members inside the called function.

#include<iostream>
using namespace std;

struct Car{
    string name;
    int age;
};  

void print(Car *c){
    cout<<"Car Name: "<<c->name<<", Car Age: "<<c->age<<"\n";
}

int main(){

    Car c1 = {"Honda",2};
    print(&c1);
    return 0;
}