#pragma once
#include "BlobExports.h"


#include "../Blob_Applicatoin1/MyApplication1.h"
#include "../Blob_Application2/MyApplication2.h"

/// <summary>
/// This class has the UI functionality for our Application
/// </summary>
class BLOBLIBRARY_API UI
{
public:

	UI();


	void Init();

	void StartGUILoop();

private:
	MyApplication1 * m_application1;
	MyApplication2 * m_application2;
};