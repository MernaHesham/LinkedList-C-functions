#include <stdlib.h>
#include "std_types.h"

typedef struct Node_type Node;

struct Node_type
{
    U8 data;
    Node *Next;
};

void delete (Node **ref_head, U8 DataToBeDeleted)
{

    Node *temp_head = *ref_head;
    Node *temp_node;
    while (temp_head->Next->data != DataToBeDeleted)
    {
        temp_head = temp_head->Next;
    }
    temp_node = temp_head->Next;
    temp_head->Next = temp_head->Next->Next;
    free(temp_node);
}