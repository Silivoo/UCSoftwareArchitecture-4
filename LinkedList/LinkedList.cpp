// LinkedList.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "LinkedList.h"


// This is an example of an exported variable
LINKEDLIST_API int nLinkedList=0;

// This is an example of an exported function.
LINKEDLIST_API int fnLinkedList(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CLinkedList::CLinkedList()
{
    return;
}
