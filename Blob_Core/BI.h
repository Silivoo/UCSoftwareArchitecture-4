#pragma once
#include "Blob_Core.h"

#include <string>
/// <summary>
/// Utility class for our Business Intelligence module
/// </summary>
class BLOBCORE_API BusinessIntelligence
{
public:

	void LogSomething(std::string something);

private:

	BusinessIntelligence();
};

extern BLOBCORE_API BusinessIntelligence* GetBusinessIntelligence();
