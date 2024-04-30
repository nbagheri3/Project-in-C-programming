#ifndef HW6_NODE_H
#define HW6_NODE_H

#include <stddef.h>
//node that contains string, count and next pointer
typedef struct node_struct {
    char str[30];
    int count;
    struct node_struct* nextPtr;
}node_struct;
/**
 * typedef of node_struct
 */
typedef struct node_struct TRACE_NODE;

//listhead of linkedlist
static TRACE_NODE *listHead;
//create node and insert
void pushNode(char * strLine);
//print nodes from listhead
void PrintNodes(TRACE_NODE *currNode);
//free nodes from listhead
void freeList(TRACE_NODE *currNode);
#endif //HW6_NODE_H