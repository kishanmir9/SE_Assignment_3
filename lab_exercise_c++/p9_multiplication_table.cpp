//. Multiplication Table
//o Write a C++ program to display the multiplication table of a given number using a
//for loop.
//o Objective: Practice using loops.
#include<iostream>
using namespace std;
main()
{
	int i,a;
	cout<<"\n\n\t Enter the number :";
	cin>>a;
	for(i=1;i<=10;i++)
	{
		cout<<"\n\n\t"<<a<<" * "<<i<<" = "<<a*i;
	}
	
}