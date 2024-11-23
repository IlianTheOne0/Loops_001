#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int number;
	long long result = 1;

	do
	{
		cout << "Enter a number in the range from 1 to 20: ";
		cin >> number;

		if (number >= 1 && number <= 20)
		{
			break;
		}

		cout << "The number must be in the range from 1 to 20" << endl << endl;
	} while (true);

	for (; number <= 20; number++)
	{
		result *= number;
	}

	cout << "Result: " << result << endl;
	
	_getch();
	return 0;
}