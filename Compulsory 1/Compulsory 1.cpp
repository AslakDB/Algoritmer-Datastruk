// Compulsory 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int RecursiveFunction(int n)
{
	// Here we make sure that the recursive number stops at 1 or 0
	if (n ==1|| n ==0)
	{
		return 1;
	}

	//Here we decrese the number of how manny times the recurtion can happen
	return n * RecursiveFunction(n - 1);
};

//these integers are the base, and wil be used to calculate the Fibonacci sequence 
static int fibnum1 = 1, fibnum2 = 0, FIBNUMB;


int fibfunc(int n)
{
	
// Here I stop the numbers at 1 or 0
	if ( n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}

	//here we calculate the numbers so that for each run of the function the number next number in the Fibonacci sequence wil be the two before it added together 
	fibnum2 = fibnum1;
	fibnum1 = FIBNUMB;
	FIBNUMB = fibnum1 + fibnum2;

	//here we print the Fibonacci number for each run through the function
	std::cout << FIBNUMB << std::endl;

	return fibfunc(n-1);
}

int main()
{
	//here we give the number of times we want the Recursive functions and the amount of our Fibonacci sequence
	int n = 4;
	int fnum = 11;
	//Here we print our results
    std::cout << "The recrsive function of "<< n<< " is " << RecursiveFunction(n) << std::endl;
	std::cout << " the Fibonacci sequence of " << fnum << " is " << fibfunc(fnum) << std::endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
