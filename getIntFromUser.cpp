#include"csheader.hpp"

int getIntFromUser()
{
	int userInput = 0;
	cout << "\nEnter Your Input (int): ";
	cin >> userInput;
	while(cin.fail())
	{
		cout << "(Error: Enter an Integer)\nEnter Your Input (int): ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> userInput;
	}
	return userInput;
}
