#include <iostream>
#include "Report.hpp"

using std::cout;
using std::endl;

CReport::CReport(unsigned long& value) 
: myValue(value)
, myObjectOutput(nReport::filenameHTML)
{
}

CReport::~CReport()
{
	if (myObjectOutput.is_open())
	{
		myObjectOutput.close();
	}
}

void CReport::createReport()
{
	
	if (myObjectOutput.is_open())
	{
		myObjectOutput << "<!DOCTYPE html><html><head></head><body>";
		myObjectOutput << "<h1> Logical Lines of Code (LLOC) = " << myValue << ".</h1>";
		myObjectOutput << "</body></html>";
		
		cout << "It generates a report in the form of a HTML-file.\n";
	}
	else
	{
		cout << "Could not create file.html" << endl;
	}
}
