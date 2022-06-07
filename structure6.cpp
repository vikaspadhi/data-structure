// Passing array of structure to a function

#include<iostream>
using namespace std;

struct Car{
    string name;
     int age;
};

void print(Car a[]){
    for(int i = 0 ; i < 2 ; i++){
        cout<<"Car Name : "<<a[i].name<<" , Car Age : "<<a[i].age<<"\n";
    }
}


int main(){
    Car arr[2]={{"TATA",2},{"Maruti",3}};
    print(arr);
    return 0;
}