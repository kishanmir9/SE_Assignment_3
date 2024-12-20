//2. Type Conversion
//o Write a C++ program that performs both implicit and explicit type conversions and
//prints the results.
//o Objective: Practice type casting in C++
#include<iostream>
using namespace std;
main()
{
	// implicit type casting
	int a=10;
	float b=11.6,c;
	c=a+b;
    cout<<"\n\n\t a+b ="<<c;
    
    //explicit type casting
    int a1=29;
	float b1=11.6,c1;
	c1=a1+(int)b1;
    cout<<"\n\n\t a+b ="<<c1;
    
}