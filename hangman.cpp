#include <iostream>
#include <string>
using namespace std;

int main()
{
    
	string kata="";
	char petunjuk[100];
	cout<<"Permainan Tebak Kata\n";
	cout<<"Inputkan Petunjuk Kata:";
	cin.getline(petunjuk, sizeof(petunjuk));
	cout<<"Inputkan Kata yang akan ditebak?";
	cin>>kata;
	int a=kata.length();
	char temp[a];
	char tebak[a];
	int b=0;int c=0;int e=0;
	system("CLS");
	//char *temp=kata;
	//string banding;
	
	cout<<"Tebak Kata, ada "<<a<<" huruf \n";
	cout<<"Petunjuknya:\t"<<petunjuk<<"\n";
	cout<<"Karakter bertanda (*) berarti huruf belum terbuka/masih salah:"<<"\n";
	cout<<"Anda Butuh "<<a<<" kali mencoba, Silahkan mencoba\n";
		e=0;
	while(e<a)
	{	
		temp[e]='*';
		e=e+1;
	}
	while(b<a)
	{
		cout<<"\nTebakan "<<b+1<<":\n";
		cin>>tebak[b];
		c=0;
		
		while(c<a)
		{ 
				if((kata[c]==tebak[b]) && (temp[c]='*'))
				{
				   //cout<<c;
				   temp[c]=tebak[b];
				}
				else
				{
					   //cout<<c;
					   if((kata[c]!=tebak[b]) && (temp[c]!='*'))
					   {
						     temp[c]=temp[c];
							 
					   }
					   else
					   {
					   temp[c]='*';
					   
					   }
					  
					   
				}
			c=c+1;
		}
		cout<<"Hasil Tebakan : "<<temp<<"\n";
		if(kata==temp)
		{
			cout<<"Anda Menang\n";
			break;
		}
		else
		{
			cout<<"Anda Belum Berhasil, Sisa "<<a-(b+1)<<" percobaan lagi\n";
		}
		b=b+1;
	}
	
    return 0;
   
}
