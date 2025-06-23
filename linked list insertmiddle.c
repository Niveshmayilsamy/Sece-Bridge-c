#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtMiddle(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    int mid = count / 2;

    if (mid == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    temp = head;
    for (int i = 0; i < mid - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
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
    insertAtMiddle(12);
    insertAtMiddle(22);
    insertAtMiddle(32);
    insertAtMiddle(42);
    printf("Linked List:");
    printList();

    return 0;
}
