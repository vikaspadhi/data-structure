// STRUCTURE MEMBERS AS ARGUMENT
// Just like variables,We can pass structure members as arguments toafunction

#include<iostream>
using namespace std;

struct Car
{
    string name;
    int age;
};

void print(string n,int a){
    cout<<"Car Name: "<<n<<", Car Age: "<<a<<"\n";
}


int main(){

    Car c1 = {"Honda",2};
    print(c1.name,c1.age);
    
    return 0;
}