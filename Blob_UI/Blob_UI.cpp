// Blob_UI.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Blob_UI.h"


// This is an example of an exported variable
BLOBUI_API int nBlobUI=0;

// This is an example of an exported function.
BLOBUI_API int fnBlobUI(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CBlobUI::CBlobUI()
{
    return;
}
