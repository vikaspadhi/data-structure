// RETURNING STRUCTURE VARIABLE FROM A FUNCTION
// Returning a structure variable from a function is similar to returning a variable from a function.

#include<iostream>
using namespace std;

struct Point{
    int x,y;
};

Point edit(Point p){
    (p.x)++;
    (p.y)++;
    return p;
}

int main(){

    Point p1 = {10,12};
    Point p2=edit(p1);
    cout<<"p2.x: "<<p2.x<<" , p2.y: "<<p2.y<<"\n";
    return 0;
}