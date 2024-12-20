//Matrix Addition
//o Write a C++ program to perform matrix addition on two 2x2 matrices.
//o Objective: Practice multi-dimensional arrays.
#include<iostream>
using namespace std;
main()
{
	int m1[2][2], m2[2][2], m3[2][2];
	int r, c, k;
	
	cout<<"\n\n\n\t Matrix-1 --------------------";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cout<<"\n\n\t Input m1["<<r<<"]["<<c<<"] :";
			cin>>m1[r][c];
		}
	}
	
	cout<<"\n\n\n\t Matrix-2 --------------------";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cout<<"\n\n\t Input m2["<<r<<"]["<<c<<"] :";
			cin>>m2[r][c];
		}
	}
	
	cout<<"\n\n\n\t Matrix-1 --------------------\n\n";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cout<<m1[r][c];
		}
		cout<<"\n";
	}
	
	cout<<"\n\n\n\t Matrix-2 --------------------\n\n";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cout<<m2[r][c];
		}
		cout<<"\n";
	}
	
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			
				m3[r][c]=m1[r][c]+m2[r][c];
			
		}
		cout<<"\n";	
	}
	
	cout<<"\n\n\n\t Matrix-3 --------------------\n\n";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cout<<m3[r][c];
		}
		cout<<"\n";
	}
}