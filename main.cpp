#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	long long start;
	long long end;
	long long temp;
	long long result = 0;

	cout << "Enter the start of range: ";
	cin >> start;
	cout << "Enter the end of range: ";
	cin >> end;

	if (start > end) {
		temp = end;
		end = start;
		start = temp;
	}

	do
	{
		result += start;
		start++;
	} while (start <= end);

	cout << "Result: " << result << endl;

	_getch();
	return 0;
}