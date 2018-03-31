#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

#include "ComplexNumber.h"

void ComplexNumber::show()
{
	cout << re_ << " + i * " << im_ << endl;
}