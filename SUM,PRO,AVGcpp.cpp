#include<iostream>
using namespace std;
int main()
{
cout<<"\n---------- Program Name: Add, Pro, Avrage of Five Numbers ---------\n\n";
cout<<"------------------ Programmer Name: Code By Tausif ------------------\n\n\n";
	int n1, n2, n3, n4, n5, SUM, PRO, AVG;
	
	cout<<"Enter No. 1 : ";
	cin>>n1;
	cout<<"Enter No. 2 : ";
	cin>>n2;
	cout<<"Enter No. 3 : ";
	cin>>n3;
	cout<<"Enter No. 4 : ";
	cin>>n4;
	cout<<"Enter No. 5 : ";
	cin>>n5;
	cout<<"\n----------------------------- Addition ----------------------------\n\n";
	SUM = n1+n2+n3+n4+n5;
	cout<<"The SUM (Addition) of Five Numbers are : "<<SUM<<endl;
	
	cout<<"\n------------------------ MUltiplication ---------------------------\n\n";
	PRO = n1*n2*n3*n4*n5;
	cout<<"The PRO (Product) of Five Numbers are : "<<PRO<<endl;
	
	cout<<"\n----------------------------- Average -----------------------------\n\n";
	AVG = SUM/5;
	cout<<"The AVG (Average) of Five Numbers are : "<<AVG<<endl;
	
}
