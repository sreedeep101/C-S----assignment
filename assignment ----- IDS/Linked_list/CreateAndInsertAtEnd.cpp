#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    
    return newNode;
}

void insert(int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
//code for inserting element at the end
void insert_End(node *p){
    node* temp = head;
    if(head == NULL){
        head = p;
        cout << "Node inserted successfully at the End!" << endl;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
    }
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
    int value;
    cout << "Linked List is :" ;
    display();
    cout <<endl;
    while(1){
       cout << "\nenter a value to insert at the end: " ;
       cin >> value;
       insert_End(createNode(value));
    
       cout << "list after inserting node at end :  " << endl;
       display();
    }
    
    return 0;
}
