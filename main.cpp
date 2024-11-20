#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int a = 1;
	int b = 1000;
	double result = 0;

	while (a <= b)
	{
		result += a;
		a++;
	}

	cout << "Result: " << result / 1000 << endl;

	_getch();
	return 0;
}