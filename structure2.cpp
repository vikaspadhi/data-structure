// STRUCTURE VARIABLE AS AN ARGUMENT
// Instead of passing structure members individually,it is a good practice to pass a structure variable as an argument.
// Unlike arrays,name of the structure variables are not pointers.

#include<iostream>
using namespace std;

struct Car
{
    string name;
    int age;
};

void print(Car c){
    cout<<"Car Name: "<<c.name<<", Car Age: "<<c.age<<"\n";
}


int main(){

    Car c1 = {"Honda",2};
    print(c1);
    
    return 0;
}