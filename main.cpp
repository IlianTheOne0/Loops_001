#include <iostream>
#include <conio.h>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::to_string;

int main()
{
	long long start;
	long long end;
	long long temp;
	string even;
	string odd;
	string muptiple_of_seven;

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
		if (start % 2 == 0)
		{
			even += to_string(start) + " ";
		}
		else
		{
			odd += to_string(start) + " ";
		}

		if (start % 7 == 0)
		{
			muptiple_of_seven += to_string(start) + " ";
		}

		start++;
	} while (start <= end);

	cout << "Even numbers: " << even << endl;
	cout << "Odd numbers: " << odd << endl;
	cout << "Multiples of 7: " << muptiple_of_seven << endl;

	_getch();
	return 0;
}
