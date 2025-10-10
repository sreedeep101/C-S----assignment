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

void insert_after_pos(node *p, int pos){
    node* temp = head;
    for(int i=1; i<pos ;i++){
        temp=temp->next;
        if(temp==NULL){
            cout << "Less than" << pos << "node in the list..!" << endl;
        }
    }
    p->next=temp->next;
    temp->next=p;
    cout << "node inserted successfully!!" << endl;
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
    int value, pos;
    insert(2);
    insert(24);
    insert(25);
    insert(23);
    insert(26);
    insert(21);
    cout << "Linked List is :" ;
    display();
    cout <<endl;
    while(1){
       cout << "\nenter position to insert: ";
       cin >> pos;
       cout << "\nenter a value to insert at the position " << pos << ": " ;
       cin >> value;
       insert_after_pos(createNode(value), pos);
    
       cout << "list after inserting node at the position " << pos <<endl;
       display();
    }
    
    return 0;
}
