#include<iostream>
using namespace std;
int main()
{
	cout<<"This program is about Area\n";
	cout<<"------------------------ Note ------------------------\n";
	cout<<"'L' For Length and 'W' For Width and 'A' For Area\n\n\n";
	int L, W, A;
	cout<<"Enter The Value of Length 'L' : ";
	cin>>L;
	cout<<"Enter The Value of Width 'W' : ";
	cin>>W;
	A = L*W;
	cout<<"\n------------------Correct Answer-------------------\n\n";
	cout<<"The Area is : "<<A<<endl;
	cout<<"\n-------------Written By @CodeByTausif -------------\n\n";	
}