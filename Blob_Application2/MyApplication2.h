#pragma once


#include "../Blob_LinkedList/LinkedList.h"
#include "Blob_Application2.h"

/// <summary>
/// This class does something entirely different thatn MyAppplication1
/// </summary>
class BLOBAPPLICATION2_API MyApplication2
{
public:
	MyApplication2();
	virtual ~MyApplication2();

	void DoWork();

private:
	PointerBasedLinkedList* m_pointerBasedLinkedList;

};
