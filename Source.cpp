#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main()
{
	SoPhuc A;
	cin >> A;
	SoPhuc B;
	cin >> B;
	SoPhuc C = A * B+ A-B-B/A;
	C = 2 + A;
	cout << C;
	if (B == A)
		cout << "yess";
	system("pause");
	return 0;
}