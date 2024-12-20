/*Variable Scope
o Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.
o Objective: Reinforce the concept of variable scope.
*/
#include<iostream>
using namespace std;
int a=2;

void var();
void var()
{
	int b=10;
	cout<<"\n\n\tinside globle variable :"<<a;
	cout<<"\n\n\tinside globle variable :"<<b;
}

main()
{
	cout<<"\n\n\toutside globle variable :"<<a;
	//cout<<"\n\n\toutside local variable :"<<b;
	
	var();
}
