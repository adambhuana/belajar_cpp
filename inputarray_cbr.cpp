#include <iostream>
#include <string>
using namespace std;
char inputletter[4];
char guestletter[4];
void cek_exist_character(int& a){
	int c=0;
	while(c<a)
	{
		if(guestletter[a]==guestletter[c])
		{
			cout<<"You type already the character: "<<guestletter[a]<<", please type another character: ";
			cin>>guestletter[a];
			cek_exist_character(a);
			break;
		}
		c=c+1;
	}
}
void inputletter_method(int& a,int& kata){
	//cout<<a<<"+"<<kata;
	//char inputletter[4];
    //int c=0;
	cout<<"Please Input your desired word (4 characters only):\n";
	while(a<kata)
	{
		cin>>inputletter[a];
		cout<<"\n";
		a=a+1;
	}
}
void displayinput_method(int& a,int& kata){
	//cout<<a<<"+"<<kata;
	//char inputletter[4];
	cout<<"The word is \n";
	while(a<kata)
	{
		cout<<inputletter[a];
		//cout<<a;
		//cout<<",";
		a=a+1;
	}
}
void inputguestletter_method(int& a,int& kata){
	//cout<<a<<"+"<<kata;
	//char guestletter[4];
	cout<<"\n Type your Guest Letter (4 characters only): \n";
	while(a<kata)
	{
		cin>>guestletter[a];
		if(a>0)
		{ 
			cek_exist_character(a);
		}
		//cout<<a;
		cout<<"\n";
		a=a+1;
	}
}
void displayguest_method(int& a,int& kata){
	//cout<<a<<"+"<<kata;
	//char guestletter[4];
	cout<<"The Guesting word is \n";
	while(a<kata)
	{
		cout<<guestletter[a];
		//cout<<a;
		//cout<<",";
		a=a+1;
	}
}
void check_correct_method(int& a,int& kata){
	//cout<<a<<"+"<<kata;
	//char guestletter[4];
	//char inputletter[4];
	int b,jml;
	cout<<"The Comparison is: \n";
	jml=0;
	//b=0;
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
}
int main()
{
	int kata;
	int a;
	kata=4;
	//public char guestletter[4];
	a=0;
	inputletter_method(a,kata);
	a=0;
	displayinput_method(a,kata);
	a=0;
	inputguestletter_method(a,kata);
	a=0;
	displayguest_method(a,kata);
	a=0;
	check_correct_method(a,kata);
	//*/
	return 0;
}