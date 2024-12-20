//Factorial Calculation Using Recursion
//o Write a C++ program that calculates the factorial of a number using recursion.
//o Objective: Understand recursion in functions.
#include<iostream>
using namespace std;

int factorial(int);


main()
{ 	int n,f;
	cout<<"\n\n\t Input a number for factorial : ";
	cin>>n;
	f=factorial(n);
	cout<<"\n\n\t factorial :"<<f;
}
factorial(int n)
{
	if(n==0)
		return 1;
		
	else
		return n*(factorial(n-1)); 
}







