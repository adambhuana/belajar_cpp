#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
     srand(time(NULL));
	 int tebak;
	 int value=rand() % 10 + 1;
	 cout<<"Permainan Tebak Bilangan \n";
	 cout<<"Bilangan Kecil (1-5),Bilangan Besar (6-10) \n";
	 cout<<"Nilai Random adalah ? \n";
	 cout<<"Ketik 0, jika bilangan kecil, ketik 1 jika bilangan Besar \n";
	 cin>>tebak;
	 if(tebak==0)
	 {
		if(value<=5)
	    {
		cout<<"Tebakan Anda Benar, Nilai Random nya adalah ";
		cout<<value;
		}
		else
		{
			cout<<"Tebakan Anda Salah, Nilai Random nya adalah ";
		    cout<<value;
		}
	 }
	 if(tebak==1)
	 {
		if(value>5)
	    {
		cout<<"Tebakan Anda Benar, Nilai Random nya adalah ";
		cout<<value;
		}
		else
		{
			cout<<"Tebakan Anda Salah, Nilai Random nya adalah ";
		    cout<<value;
		}
	 }
	
     
     return 0;
}
