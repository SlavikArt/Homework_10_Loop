#include <iostream>

using namespace std;

int main()
{
    int start;
    int end;

	double fahrenheit;

	cout << "Enter a range: ";
	cin >> start >> end;

	while (start <= end)
	{
		fahrenheit = (start * 1.8) + 32;
		cout << start << "\t" << fahrenheit << "\n";
		start++;
	}
}
