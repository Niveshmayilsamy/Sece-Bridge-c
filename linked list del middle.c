#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtEnd(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteAtFirst() {
    if (head == NULL) {
        printf("List is already empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);
}

void deleteAtMiddle() {
    if (head == NULL || head->next == NULL) {
        // List is empty or has only one node
        deleteAtFirst();
        return;
    }

    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    int mid = count / 2;

    temp = head;
    for (int i = 0; i < mid - 1; i++) {
        temp = temp->next;
    }

    struct node *toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
}

void printList() {
    struct node *p = head;
    printf("\n[");
    while (p != NULL) {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("]\n");
}

int main() {
    insertAtEnd(12);
    insertAtEnd(22);
    insertAtEnd(32);
    insertAtEnd(42);
    insertAtEnd(52);

    printf("Original Linked List:");
    printList();

    deleteAtMiddle();
    printf("After deleting middle node:");
    printList();

    deleteAtFirst();
    printf("After deleting first node:");
    printList();

    deleteAtMiddle();
    printf("After deleting middle node again:");
    printList();

    return 0;
}
