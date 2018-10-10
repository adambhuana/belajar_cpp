#include <iostream>
#include <string>
using namespace std;
int main()
{
	int kata;
	int a,b,jml;;
	kata=4;
	char inputletter[4];
	char temp[4];
	char guestletter[4];
	char benar[4];
	a=0;
	b=0;
	while(a<kata)
	{
		cin>>inputletter[a];
		//cout<<a;
		cout<<"\n";
		a=a+1;
	}
	a=0;
	cout<<"The word is \n";
	while(a<kata)
	{
		cout<<inputletter[a];
		//cout<<a;
		cout<<"\n";
		a=a+1;
	}
	a=0;
	while(a<kata)
	{
		temp[a]='*';
		a=a+1;
	}
	//cout<<"Temp Array Variable":
	a=0;
	while(a<kata)
	{
		cout<<temp[a];
		a=a+1;
	}
	a=0;
	cout<<"\n Type your Guest Letter: \n";
	while(a<kata)
	{
		cin>>guestletter[a];
		//cout<<a;
		cout<<"\n";
		a=a+1;
	}
	a=0;
	cout<<"The Guesting word is \n";
	while(a<kata)
	{
		cout<<guestletter[a];
		//cout<<a;
		cout<<"\n";
		a=a+1;
	}
	a=0;
	cout<<"The Comparison is: \n";
	jml=0;
    while(a<kata)
    {
	      b=0;jml=0;
		  while(b<kata)
		  {
			 if(inputletter[b]==guestletter[a])
			 {
				  //cout<<"True";
				  jml=jml+1;
				  //benar[a]=guestletter[a];
	
				  
			 }
			 else
			 {
				  //cout<<"false";  
			 }             
			 b=b+1;
		  }   
		  cout<<"\nKarakter: "<<guestletter[a]<<" -> yang benar berjumlah: "<<jml<<"\n";  
		  a=a+1;
    }
	return 0;
}