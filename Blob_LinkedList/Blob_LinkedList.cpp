// Blob_LinkedList.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Blob_LinkedList.h"


// This is an example of an exported variable
BLOBLINKEDLIST_API int nBlobLinkedList=0;

// This is an example of an exported function.
BLOBLINKEDLIST_API int fnBlobLinkedList(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CBlobLinkedList::CBlobLinkedList()
{
    return;
}
