// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the BLOBUI_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// BLOBUI_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef BLOBUI_EXPORTS
#define BLOBUI_API __declspec(dllexport)
#else
#define BLOBUI_API __declspec(dllimport)
#endif

// This class is exported from the dll
class BLOBUI_API CBlobUI {
public:
	CBlobUI(void);
	// TODO: add your methods here.
};

extern BLOBUI_API int nBlobUI;

BLOBUI_API int fnBlobUI(void);
