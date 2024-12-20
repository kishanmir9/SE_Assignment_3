//Class for Bank Account
//o Create a class BankAccount with data members like balance and member
//functions like deposit and withdraw. Implement encapsulation by keeping the
//data members private.
//o Objective: Understand encapsulation in classes.
#include<iostream>
using namespace std;
class Bankaccount 
{
	int balnce,dip,total;
	   public :
	   		void get();
	   	  	void diposite();
	   	  	void withdraw();
	   	  	
};
void Bankaccount :: get()
{
	cout<<"\n\n\t balnce :";
	cin>>balnce;
}
void Bankaccount ::diposite()
{
	cout<<"\n\n\t diposite :";
	cin>>dip;
	cout<<"\n\n\t balance :"<<balnce;
	total=balnce+dip;
	cout<<"\n\n\ttotal:"<<total;

}
void Bankaccount :: withdraw()
{	int withdraw;
	cout<<"\n\n\t withdraw :";
	cin>>withdraw;
	if(balnce<=2000)
		cout<<"\n\n\tnot avliable balnce . "<<balnce;
	else
		cout<<"\n\n\t avliable balnce .";
		cout<<"\n\n\t balance :"<<balnce;
		total=balnce-withdraw;
		cout<<"\n\n\t total :"<<total;
		
		
}

main()
{
	Bankaccount B;
	B.get();
	
	int chioce;
	cout<<"\n\n\tenter the choice:";
	cin>>chioce;
	switch(chioce)
	{
		case 1 :
				B.diposite();
				break;
		case 2 :
				B.withdraw();
				break;
	}
	
	
}