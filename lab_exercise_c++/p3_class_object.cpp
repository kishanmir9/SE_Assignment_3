//3. POP vs. OOP Comparison Program
//o Write two small programs: one using Procedural Programming (POP) to calculate the
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a
//class and object for the same task.
//o Objective: Highlight the difference between POP and OOP approaches.

//#include<stdio.h>
//main()
//{
//	int length , width;
//	
//	printf("\n\n\tEnter the langth :");
//	scanf("%d",&length);
//	printf("\n\n\tEnter the width :");
//	scanf("%d",&width);
//	
//	printf("\n\n\tArea of rectangle :",lenght*width);
//	
//}

		//oops programing
#include<iostream>
using namespace std;
 
class rectangle
{
	int lenght,width;
	 public:
	 	
	 	void get()
	 	{
	 		cout<<"\n\n\tEnter the lenght :";
			cin>>lenght;
			cout<<"\n\n\tEnter the width :";
			cin>>width;
			
		}
		void print()
		{
			cout<<"\n\n\tArea of ractangel :"<<lenght*width;
		}
	
};
main()
{
	rectangle a;
	a.get();
	a.print();
}