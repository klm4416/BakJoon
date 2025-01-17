//백준 1068번 문제(트리)

#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node* llink;
    struct Node* rlink;
} Node;

