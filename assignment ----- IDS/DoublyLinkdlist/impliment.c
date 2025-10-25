#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node*head = NULL;

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void Insert(int data){
    struct Node* newNode = createNode(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
       temp= temp->next;
   }
    newNode->prev = temp;
    temp -> next =newNode;
}

void displayBackward(){
    struct Node* temp = head;
    if(temp == NULL){
        printf("list is empty!!\n");
        return;
    }
    while(temp->next != NULL){
        temp =temp->next;
    }
    printf("list Backward :\n");
    printf("NULL->");
    while(temp!= NULL){
        printf("%d->", temp->data);
        temp = temp->prev;
    }
    printf("NULL");
    printf("\n");
}

void displayforward(){
    struct Node* temp = head;
    if(temp == NULL){
        printf("list is empty!!\n");
        return;
    }
    printf("list foreword :\n");
    printf("NULL->");
    while(temp != NULL){
        printf("%d->", temp->data);
        temp =temp->next;
    }
    printf("NULL");
    printf("\n");
}

int main(){
    Insert(10);
    Insert(20);
    Insert(140);
    Insert(130);
    Insert(103);
    Insert(104);
    Insert(109);
    Insert(180);
    
    displayBackward();
    displayforward();
    return 0;
}
