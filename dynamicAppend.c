#include <stdlib.h>
#include "std_types.h"

typedef struct Node_type Node;

struct Node_type
{
    U8 data;
    Node *Next;
};

void append(Node **ref_head, U8 data)
{
    Node *New_node;

    New_node = (Node *)malloc(sizeof(Node));
    Node *temp_head = *ref_head; //to save the ref head

    New_node->data = data;
    New_node->Next = NULL;

    //find out where is the last node
    while (temp_head->Next != NULL)
    {
        temp_head = temp_head->Next;
    }
    temp_head->Next = New_node;
}
