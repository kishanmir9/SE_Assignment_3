//Nested Control Structures
//o Write a program that prints a right-angled triangle using stars (*) with a nested loop.
//o Objective: Learn nested control structures.
#include<iostream>
using namespace std;
main()
{
	int c,r;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			cout<<" *";
		}
		cout<<"\n";
		
	}
}