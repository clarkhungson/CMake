#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#include "ComplexNumber.h"


// Comment from branch 1
// Comment from branch 2
int main()
{
	cout << "Helllo world!" << endl;
	ComplexNumber * c1 = new ComplexNumber();
	ComplexNumber * c2 = new ComplexNumber(3, 4);
	c1 -> show();
	c2 -> show();
	ComplexNumber * c3 = c2;
	c3 -> show();

	(*c3) += (*c2);
	c3 -> show(); 
	return 0;
}
