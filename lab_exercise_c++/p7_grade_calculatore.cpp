//Grade Calculator
//o Write a C++ program that takes a student’s marks as input and calculates the grade
//based on if-else conditions.
//o Objective: Practice conditional statements (if-else).
#include<iostream>
using namespace std;
main()
{
	int mark[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"\n\n\tEnter the marks["<<i<<"] :";
		cin>>mark[i];
    }
    int total =0;
	for(i=0;i<5;i++)
	{
		cout<<"\n\n\tEnter the marks["<<i<<"] :"<<mark[i];
		total=total+mark[i];
	}
	
	float per=total/5;
	cout<<"\n\n\t----------------------------";
	cout<<"\n\n\ttotal :"<<total;
	cout<<"\n\n\tpercentage :"<<per;
	if(per>=90)
	{
		cout<<"\n\n\tGrade A";
	}
	else if(per>=60 && per<=80)
	{
		cout<<"\n\n\tGrade B";
	}
	else if(per>=40 && per<=59)
	{
		cout<<"\n\n\tGrade c";
	}
	else
	{
		cout<<"\n\n\tFail ...";
	}
	
	
}
















