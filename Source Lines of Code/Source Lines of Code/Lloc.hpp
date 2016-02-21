#define _CRT_SECURE_NO_WARNINGS
#ifndef _CLloc_HPP
#define _CLloc_HPP

class CLloc
{
public:
	CLloc(const char* path);
	~CLloc();
	unsigned long sumLoc();

private:
	int isLogicString(const char * pString);
	const char * pPath;
	int logicStringNumber;
};

#endif