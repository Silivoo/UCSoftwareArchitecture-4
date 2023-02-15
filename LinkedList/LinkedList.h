// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LINKEDLIST_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LINKEDLIST_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LINKEDLIST_EXPORTS
#define LINKEDLIST_API __declspec(dllexport)
#else
#define LINKEDLIST_API __declspec(dllimport)
#endif

// This class is exported from the dll
class LINKEDLIST_API CLinkedList {
public:
	CLinkedList(void);
	// TODO: add your methods here.
};

extern LINKEDLIST_API int nLinkedList;

LINKEDLIST_API int fnLinkedList(void);
