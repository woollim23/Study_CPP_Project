#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int calculator(int a, int b, char sign)
{
	if (sign == '+')
		return a + b;
	else if (sign == '-')
		return a - b;
	else if (sign == '*')
		return a * b;
	else if (sign == '/')
		return a / b;
}

void main()
{
	while (1)
	{
		int a, b;
		char sign;
		cin >> a >> b >> sign;

		cout << "��� : " << calculator(a, b, sign) << endl;
	}
}