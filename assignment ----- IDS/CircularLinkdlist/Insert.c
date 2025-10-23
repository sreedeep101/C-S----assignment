#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert into an empty circular list
void insertEmpty(int data) {
    if (head != NULL) {
        printf("List is not empty!\n");
        return;
    }
    struct Node *newNode = createNode(data);
    newNode->next = newNode; // points to itself
    head = newNode;
    printf("Inserted %d in an empty list.\n", data);
}

// Function to insert at the beginning
void insertAtBeginning(int data) {
    if (head == NULL) {
        insertEmpty(data);
        return;
    }

    struct Node *newNode = createNode(data);
    struct Node *temp = head;

    // Traverse till last node
    while (temp->next != head)
        temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    head = newNode;

    printf("Inserted %d at the beginning.\n", data);
}

// Function to insert at the end
void insertAtEnd(int data) {
    if (head == NULL) {
        insertEmpty(data);
        return;
    }

    struct Node *newNode = createNode(data);
    struct Node *temp = head;

    // Traverse till last node
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;

    printf("Inserted %d at the end.\n", data);
}

// Function to insert after a given key (between nodes)
void insertAfter(int key, int data) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    do {
        if (temp->data == key) {
            struct Node *newNode = createNode(data);
            newNode->next = temp->next;
            temp->next = newNode;
            printf("Inserted %d after %d.\n", data, key);
            return;
        }
        temp = temp->next;
    } while (temp != head);

    printf("Key %d not found in the list.\n", key);
}

// Function to display the list
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// Main function
int main() {
    insertEmpty(10);
    display();

    insertAtBeginning(5);
    display();

    insertAtEnd(20);
    display();

    insertAfter(10, 15);
    display();

    insertAfter(25, 30); // Key not found
    display();

    return 0;
}
