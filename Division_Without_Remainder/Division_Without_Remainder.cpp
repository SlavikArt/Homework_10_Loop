#include <iostream>

using namespace std;

int main()
{
	int num;
	int n;

	cout << "Enter a number: ";
	cin >> num;

	n = num;

	while (n != 0)
	{
		if (num % n == 0)
		{
			cout << n << " ";
		}
		n--;
	}
}