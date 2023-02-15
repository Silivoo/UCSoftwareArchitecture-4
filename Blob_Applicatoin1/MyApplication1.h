#pragma once

#include "../Blob_LinkedList/LinkedList.h"
#include "Blob_Applicatoin1.h"


/// <summary>
/// This class does something entirely different thatn MyAppplication2
/// </summary>
class BLOBAPPLICATOIN1_API MyApplication1
{
public:
	MyApplication1();
	virtual ~MyApplication1();

	void DoWork();

private:
	ArrayBasedLinkedList* m_arrayBasedLinkedList;

};
