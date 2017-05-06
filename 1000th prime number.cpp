// 1000th prime number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> primes = { 2,3,5,7,11};



	for (int test = primes[primes.size() - 1]; test < 1000; test+=2)
	{

		cout << test << endl;

		bool tester = true;	
		for (int counter = 0; counter < primes.size(); counter++)
		{
			cout << test << "%" << primes[counter] << endl;
			cout << test%primes[counter] << endl;
			if (test%primes[counter] == 0)
			{
				tester = false;
				break;
			}
		}
		
		cout << tester << endl;

		if (tester)
			cout << "c\n";
			primes.push_back(test);

			cout << endl;
			cout << endl;
	}

	for (int i = 0; i < primes.size(); i++)
		cout << i + 1 << ": " << primes[i] << endl;


	cout << primes.size() << endl;

}

