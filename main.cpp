#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	unsigned long long end = 0;

	cout << "Enter the number: ";
	cin >> end;

	cout << endl;
	
	for (unsigned long long i = 0; i <= end; i++)
	{
		cout << i << endl;
	}

	_getch();
	return 0;
}