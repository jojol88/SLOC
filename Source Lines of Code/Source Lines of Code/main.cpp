#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Lloc.hpp"
#include "Report.hpp"

using std::cout;
using std::endl;

int main(int argc, char * argv[])
{
	cout << "********************Hello********************\n";

	if (argc == 2)
	{
		CLloc myTotalLoc(argv[1]);
		unsigned long stringNumber = myTotalLoc.sumLoc();
		cout << "Logical Lines of Code (LLOC) = " << stringNumber << "\n";
		CReport HTMLReport(stringNumber);
		HTMLReport.createReport();
	}
	else
	{
		cout << "Could not open the way, not valid arguments." << endl;
		
	}

	cout << "Done.\n" << "*******************Goodbye*******************\n";
	system ("pause");
	return 0;
}