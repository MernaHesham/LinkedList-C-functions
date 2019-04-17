#include <stdlib.h>
#include "std_types.h"

typedef struct Node_type Node;

struct Node_type
{
    U8 data;
    Node *Next;
};

void push(Node **ref_head, U8 data)
{
    //push a node in the beggining of a linked list
    Node *New_node;
    //allocate new node
    New_node = (Node *)malloc(sizeof(Node));

    //put in the new data instead of (*new_node).next
    New_node->data = data;

    //make next pointer of this node points to the head of the first node
    New_node->Next = *ref_head;

    //make head pointer to the new node
    *ref_head = New_node;
}