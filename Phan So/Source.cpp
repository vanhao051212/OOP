#include <iostream>
#include "PhanSo.h"

using namespace std;

int main()
{
	PhanSo a, b, c;
	cin >> a >> b;
	c = b / a;
	if (a == b) {
		cout << "a=b";
	}
	else cout << "a!=b";
	cout << c;

	system("pause");
	return 0;
}