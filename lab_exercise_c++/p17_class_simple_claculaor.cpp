//Class for a Simple Calculator
//o Write a C++ program that defines a class Calculator with functions for addition,
//subtraction, multiplication, and division. Create objects to use these functions.
//o Objective: Introduce basic class structure.
#include<iostream>
using namespace std;
class calculator
{
	int a,b;
		public:
			void get();
			void add();
			void sub();
			void mul();
			void div();
			
};

void calculator::get()
{
	cout<<"\n\n\tEnter the number of a :";
	cin>>a;
	cout<<"\n\n\tEnter the number of b :";
	cin>>b;
}
void calculator :: add()
{
	cout<<"\n\n\tAddition :"<<a+b;
}
void calculator :: sub()
{
	cout<<"\n\n\tSubtraction :"<<a-b;
}
void calculator :: mul()
{
	cout<<"\n\n\tMultiplication :"<<a*b;
}
void calculator :: div()
{
	cout<<"\n\n\tDivision :"<<a/b;
}





main()
{
	calculator c;
	c.get();
	
	cout<<"\n\n\tAddition press 1";
	cout<<"\n\n\tSubtraction press 2";
	cout<<"\n\n\tMultiplication press 3";
	cout<<"\n\n\tDivision press 4";
	int choice;
	cout<<"\n\n\tEnter the choice :";
	cin>>choice;
	
	
	
	switch(choice)
	{
		case 1 :
				c.add();
				break;
		case 2 :
				c.sub();
				break;
		case 3 :
				c.mul();
				break;
		case 4 :
				c.div();
				break;
	}
}