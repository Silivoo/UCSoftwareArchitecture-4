// Blob_Application2.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Blob_Application2.h"


// This is an example of an exported variable
BLOBAPPLICATION2_API int nBlobApplication2=0;

// This is an example of an exported function.
BLOBAPPLICATION2_API int fnBlobApplication2(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CBlobApplication2::CBlobApplication2()
{
    return;
}
