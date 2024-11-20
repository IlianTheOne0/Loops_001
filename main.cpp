#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int a;
	long long result = 0;

	cout << "Enter the number: ";
	cin >> a;

	if (a == 0)
	{
		cout << "Result: 0" << endl;
		return 0;
	}

	for (; a <= 500; a++)
	{
		result += a;
	}

	cout << "Result: " << result << endl;

	_getch();
	return 0;
}