//2. Basic Input/Output
//o Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting.
//o Objective: Practice input/output operations using cin and cout.
#include<iostream>
using namespace std;

main()
{
	int age;
	string name;
	cout<<"\n\n\tEnter the age :";
	cin>>age;
	cout<<"\n\n\tEnter the name :";
	cin>>name;
	
	cout<<"\n\n\t age :"<<age;
	cout<<"\n\n\t name :"<<name;
}