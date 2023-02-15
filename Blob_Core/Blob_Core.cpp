// Blob_Core.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Blob_Core.h"


// This is an example of an exported variable
BLOBCORE_API int nBlobCore=0;

// This is an example of an exported function.
BLOBCORE_API int fnBlobCore(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CBlobCore::CBlobCore()
{
    return;
}
