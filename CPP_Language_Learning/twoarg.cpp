//twoarg.cpp -- a function with 2 param

#include <iostream>

using namespace std;
void n_chars(char, int);

int main()
{
    int times;
    char ch;

    cout << "Enter a character: " << endl;
    cin >> ch;

    while (ch != 'q') {
	cout << "Enter an integer: " << endl;
	cin >> times;
	n_chars(ch, times);
	cout << "Enter another character or press the q-key to quit: " << endl;
	cin >> ch;
    }

    cout << "The value of times is " << times <<  endl;

    return 0;
}

void n_chars(char c, int n)
{
    while (n-- > 0)
	cout << c;
}

