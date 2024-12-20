//Array Sum and Average
//o Write a C++ program that accepts an array of integers, calculates the sum and
//average, and displays the results.
//o Objective: Understand basic array manipulation.
#include<iostream>
using namespace std;
main()
{
	int i,arr[5],size,sum=0,avg;
	cout<<"\n\n\tEnter the size of array :";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\n\n\t arr["<<i+1<<"] : ";
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		cout<<"\n\n\t arr["<<i+1<<"] : "<<arr[i];
		sum=sum+arr[i];
		avg=sum/size;
	}
	cout<<"\n\n\t-------------------------";
	cout<<"\n\n\tsum of array :"<<sum;
	cout<<"\n\n\t--------------------------";
	cout<<"\n\n\tavrage of array :"<<avg;
	
}