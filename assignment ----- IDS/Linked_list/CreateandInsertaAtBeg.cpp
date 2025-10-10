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
//function to insert at the beginning
void insert_beg(node *p){
    node* temp;
    if(head == NULL){
        head = p;
        cout << "Node inserted successfully at the beginning!/n" << endl;
    }
    else{
        temp=head;
        head = p;
        p->next=temp;
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
    insert(1);
    insert(10);
    insert(71);
    insert(17);
    insert(15);
    insert(14);
    insert(18);
    insert(13);
    cout << "Linked List is :" ;
    display();
    cout <<endl;
    while(1){
       cout << "enter a value to insert at the beginning: " ;
       cin >> value;
       insert_beg(createNode(value));
    
       cout << "list after inserting node at beginning :  " << endl;
       display();
    }
    
    return 0;
}
