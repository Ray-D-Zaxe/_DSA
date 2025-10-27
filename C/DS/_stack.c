#include<stdio.h>
#include<stdlib.h>



typedef struct {
    int data;
    struct node *next;
} node;



node *createNode(int data) {
    node *newNode = malloc(sizeof(node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}