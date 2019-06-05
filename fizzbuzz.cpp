// fizzbuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int start, stop;
	cout << "Where do you want the count to start: ";
	cin >> start;
	cout << "Where do you want the count to stop: ";
	cin >> stop;
	for (int i = start; i <= stop; i++)
	{
		if (i % 15 == 0)
		{
		cout << "Fizz Buzz" << endl;

		}
		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;

		}
		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;

		}
		
		else
		{
			cout << i << endl;
		}
	}
}


