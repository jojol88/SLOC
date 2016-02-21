#ifndef _CReport_HPP
#define _CReport_HPP

#include <fstream>

using std::ofstream;

namespace nReport
{
	const char filenameHTML[] = "report.html";
}

class CReport
{
public:
	CReport(unsigned long& value);
	~CReport();
	void createReport();

private:
	unsigned long myValue;
	ofstream myObjectOutput;
};

#endif