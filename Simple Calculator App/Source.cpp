#include <iostream>
using namespace std;

void main()
{
	int num1;
	int num2;
	char character;

	cout << "Enter The First Number: ";
	cin >> num1;
	cout << "Enter The Second Number: ";
	cin >> num2;

	cout << "Enter The Character: \n";
	cout << "+\n";
	cout << "-\n";
	cout << "*\n";
	cout << "/\n";
	cin >> character;


	if (character == '+')
	{
		cout << num1 + num2 << endl;
	}
	else if (character == '-')
	{
		cout << num1 - num2 << endl;
	}
	else if (character == '*')
	{
		cout << num1 * num2 << endl;
	}
	else if (character == '/')
	{
		cout << num1 / num2 << endl;
	}
	else
	{
		cout << "Invalid Character\n";
	}

}