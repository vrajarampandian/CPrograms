#include<stdio.h>
#include<stdlib.h>
struct linkedlist {
    int data;
    struct linkedlist *next;
};

int main()
{
    printf("Linked List\n");
    struct linkedlist *head = NULL;
    struct linkedlist *second = NULL;
    struct linkedlist *third = NULL;

    head = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    second = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    third = (struct linkedlist*)malloc(sizeof(struct linkedlist));

    head->data = 1;
    head->next = second;

    second->data=2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

}