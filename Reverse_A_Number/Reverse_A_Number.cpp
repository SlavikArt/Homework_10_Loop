#include <iostream>

using namespace std;

int main()
{
    int num;
    int tmp;
    int reversed_num = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    {
        tmp = num % 10;
        reversed_num = reversed_num * 10 + tmp;
        num /= 10;
    }

    cout << "Reversed number: " << reversed_num << "\n";
}
