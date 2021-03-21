#include <iostream>
#include "class.h"

using namespace std;

int main()
{
	MONEY A, B(1,1), C(B);
	A.setRub(6);
	A.setPenny(6);

	cout << A.getRub() << "," << A.getPenny() << endl;
	cout << B.getRub() << "," << B.getPenny() << endl;
	cout << C.getRub() << "," << C.getPenny() << endl;

	if (A == B)
		cout << "A = B " << endl;
	else
		cout << "A != B" << endl;

	return 0;
}

