#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int input;
	long long result = 0;

	do
	{
		cout << "Enter the number: ";
		cin >> input;

		if (input == 0) {
			break;
		}

		result += input;
	} while (true);

	cout << "Result: " << result << endl;

	_getch();
	return 0;
}