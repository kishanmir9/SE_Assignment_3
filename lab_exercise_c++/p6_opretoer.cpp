//Operator Demonstration
//o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
//operators. Perform operations using each type of operator and display the results.
//o Objective: Reinforce understanding of different types of operators in C++.
#include<iostream>
using namespace std;
main()
{

    int a;
	int b;
	
	cout<<"\n\n\tEnter the number of a :";
	cin>>a;
	cout<<"\n\n\tEnter the number of b :";
	cin>>b;
	
	//arithmetic oprations
	cout<<"\n\n\t------arithmetic oprations------";
	cout<<"\n\n\tAddition : "<<a+b;
	cout<<"\n\n\tSubtraction : "<<a-b;
	cout<<"\n\n\tMultiplication : "<<a*b;
	cout<<"\n\n\tDivision : "<<a/b;
	cout<<"\n\n\tModulo : "<<a%b;

	//relational oprations
	cout<<"\n\n\t------relational oprations------";
	cout<<"\n\n\tDuble equal: "<<(a==b);
	cout<<"\n\n\tNot equal : "<<(a!=b);
	cout<<"\n\n\tGreter than equal : "<<(a<=b);
	cout<<"\n\n\tLess than equal : "<<(a>=b);
	cout<<"\n\n\tGreter than : "<<(a<b);
	cout<<"\n\n\tLess than : "<<(a>b);
	
	//logical oprations
	cout<<"\n\n\t------logical oprations------";

	cout<<"\n\n\t And logical oprater";
	if(a==b && b==a)
		cout<<"\n\n\tequal";
	else
		cout<<"\n\n\tnot equal";
	
	cout<<"\n\n\t Or logical oprater";
	
	if(a==b || b==a)
		cout<<"\n\n\tequal";
	else
		cout<<"\n\n\tnot equal";

	cout<<"\n\n\t not logical oprater";	
	if(!(a==b))
		cout<<"\n\n\tdiffrant";
	else
		cout<<"\n\n\tsame";
		
		
}