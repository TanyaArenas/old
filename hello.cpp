#include <iostream>
using namespace std;

namespace SPACE_TM {
	char str[] = "испольвание моего пространства";	
	int a = 10;
}

namespace msp = SPACE_TM;

int main() 
{

	cout << "OUTPUT: " << "Hello!" << endl;	
	cout << __TIME__ << endl;
	cout << msp::a << endl;
	cout << "MODIFICATI" << endl;
	return 0;
}
