//Simple Calculator Using Functions
//o Write a C++ program that defines functions for basic arithmetic operations (add,
//subtract, multiply, divide). The main function should call these based on user input.
//o Objective: Practice defining and using functions in C++.
#include<iostream>
using namespace std;
void calculator();


main()
{
	calculator();
}

void calculator()
{
	int a, b;
	cout<<"\n\n\tEnter the number :";
	cin>>a;
	cout<<"\n\n\tEnter the number :";
	cin>>b;
	cout<<"\n\n\t Enter the choice :";
	cout<<"\n\n\tAddition press 1.";
	cout<<"\n\n\tSubtraction press 2.";
	cout<<"\n\n\tMultiplication press 3.";
	cout<<"\n\n\tDivision press 4.";
	cout<<"\n\n\t------------------------------";
	int choice;
	cout<<"\n\n\tEnter the choice :";
	cin>>choice;
	switch(choice)
	{
		case 1:	cout<<"\n\n\t Addition :"<<a+b;
						break;
		case 2:	cout<<"\n\n\t Subtaction :"<<a-b;
						break;
		case 3:	cout<<"\n\n\t Multiplication :"<<a*b;
						break;
		case 4:	cout<<"\n\n\t Division :"<<a/b;
						break;
		default : cout<<"\n\n\t intvalide chioce,try again !!";
				
	}
	
	
}