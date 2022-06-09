#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* create_node(int count){
    Node* head=(Node*)malloc(count*sizeof(Node));
    Node* head1;
    Node* link;
    for(int i = 0 ; i < count ; i++){
        head1 = head + i ;
        head1->data=i;
        if(i==(count-1)){
            head1->next=NULL;
        }
        else{
            link=head1+1;
            head1->next=link;
        }
    }
    return head;
}

void print_node(Node* head){
    Node* current =  head;
    while(true){
        cout<<"Address :"<<current<<" data :"<<current->data<<" next :"<<current->next<<"\n";
        if(current->next==NULL)
            break;
        current=current->next;   
    }
}

int main(){
    int count;
    cout<<"How many nodes you want? \n";
    cin>>count;
    Node* head = create_node(count);
    print_node(head);
    return 0;
}