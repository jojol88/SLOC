#include "Lloc.hpp"
#include <stdio.h>
#include <string.h>

#define MAX_LEN 2048

CLloc::CLloc(const char* path)
: pPath(path)
, logicStringNumber(0)
{
}

CLloc::~CLloc()
{
}

unsigned long CLloc::sumLoc()
{
	long logicStringNumber = 0;

	FILE * pFile;
	long lSize;

	pFile = fopen(pPath, "rb");
	if (0 == pFile)
	{
		fputs("File error", stderr);
	}

	fseek(pFile, 0l, SEEK_END);
	lSize = ftell(pFile);
	rewind(pFile);

	char string[MAX_LEN];
	int i = 0;
	while (!feof(pFile))
	{
		fscanf(pFile, "%s", string);
		logicStringNumber += isLogicString(string);
	}
	fclose(pFile);
	return logicStringNumber;
}

int CLloc::isLogicString(const char * pString)
{
	if ((pString == strstr(pString, "//") || (0 != strstr(pString, ";"))))
	{
		return 0;
	}
	else return 1;
}