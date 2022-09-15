/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E3.1
The program takes an integer and tells you whether its positive, negative or zero. 
*/

#include <iostream> 
using namespace std;

int main()
{
	cout << "Enter an integer: ";
	int num;
	cin >> num;
	
	if(num < 0)
	{
		cout << "Negative" << endl;
	}
	else if (num > 0)
	{
		cout << "Positive" << endl;
	}
	else
	{
		cout << "Zero" << endl;
	}
	
	return 0;
}
