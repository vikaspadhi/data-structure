// Returning a pointer to a structure from a function

#include<iostream>
using namespace std;

struct Car
{
    string name;
    int age;
};

Car* create(string n , int a){

    Car *c=(Car*)malloc(sizeof(Car));
    c->age=a;
    c->name=n;
    return c;
}

int main(){

    Car *c1;
    c1 = create("TATA",2);
    cout<<"Car Name : "<<c1->name<<" , Car Age: "<<c1->age<<"\n";
    free(c1);
    return 0;
}
