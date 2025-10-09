#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head= NULL;

void insert(int new_data){
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}

void display(){
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr=ptr->next;
    }
}

int main(){
    insert(1);
    insert(10);
    insert(20);
    insert(21);
    insert(110);
    insert(221);
    insert(11);
    insert(16);
    insert(14);
    
    cout << "Linked List is :" ;
    display();
    
    return 0;
}
