#include <stdlib.h>
#include "std_types.h"
#include <stdio.h>

typedef struct Node_type Node;

struct Node_type
{
    U8 data;
    Node *Next;
};

void traverse(Node **ref_head)
{
    Node *temp_head = *ref_head;
    U8 Printed;
    printf("Node elements are:");
    while (temp_head->Next != NULL)
    {
        Printed = temp_head->data;
        printf("%d \n", Printed);
    }
}
