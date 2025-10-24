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

// Function to insert at the end (for setup)
void insertAtEnd(int data) {
    struct Node *newNode = createNode(data);
    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    struct Node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

// Function to display the circular list
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

// Delete from the beginning
void deleteBeginning() {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node *temp = head;

    // If only one node
    if (head->next == head) {
        printf("Deleted %d from beginning.\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    // Traverse to last node
    struct Node *last = head;
    while (last->next != head)
        last = last->next;

    last->next = head->next;
    head = head->next;
    printf("Deleted %d from beginning.\n", temp->data);
    free(temp);
}

// Delete from the end
void deleteEnd() {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node *temp = head, *prev = NULL;

    // If only one node
    if (head->next == head) {
        printf("Deleted %d from end.\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    printf("Deleted %d from end.\n", temp->data);
    free(temp);
}

// Delete a specific element (middle)
void deleteSpecific(int key) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head, *prev = NULL;

    // If the node to delete is the head
    if (head->data == key) {
        deleteBeginning();
        return;
    }

    // Traverse until we find the key or come back to head
    do {
        prev = temp;
        temp = temp->next;
        if (temp->data == key)
            break;
    } while (temp != head);

    if (temp == head) {
        printf("Element %d not found in the list.\n", key);
        return;
    }

    prev->next = temp->next;
    printf("Deleted %d from the list.\n", temp->data);
    free(temp);
}

// Main Function
int main() {
    // Create a circular list for demonstration
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    printf("Initial ");
    display();

    deleteBeginning();
    display();

    deleteEnd();
    display();

    deleteSpecific(30);
    display();

    deleteSpecific(100); // Key not found
    display();

    deleteBeginning();
    deleteEnd();
    deleteBeginning(); // Deleting till empty
    display();

    return 0;
}
