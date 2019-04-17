#include <stdlib.h>
#include "std_types.h"

typedef struct Node_type Node;

struct Node_type
{
    U8 data;
    Node *Next;
};

void insertAfter(Node **ref_head, U8 data, U8 AfterNode)
{
    Node *New_node;

    //create node
    New_node = (Node *)malloc(sizeof(Node));
    Node *temp_head = *ref_head;
    New_node->data = data;

    //loop until reaching AfterNode data
    while (temp_head->data != AfterNode)
    {
        *temp_head = *temp_head->Next;
    }
    //Newnode next = current node next
    New_node->Next = temp_head->Next;

    //current node next = ptr of new node
    temp_head->Next = New_node;
}