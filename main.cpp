#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	long long x;
	long long y;
	long long result = 1;
	long long i = 0;

	cout << "Enter the first number: ";
	cin >> x;
	cout << "Enter the second number: ";
	cin >> y;
	
	for (; i < y; i++)
	{
		result *= x;
	}

	cout << result << endl;

	_getch();
	return 0;
}