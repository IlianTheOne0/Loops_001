#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int number;

	cout << "Enter the number: ";
	cin >> number;

	for (int i = 1; i <= 10; i++)
	{
		cout << number << " * " << i << " = " << (number * i) << endl;
	}

	_getch();
	return 0;
}