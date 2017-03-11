#include <iostream.h>
void perkalian(int& a,int& b, int& c)
{
c=a*b;
}
void penjumlahan(int& a,int& b, int& c)
{
c=a+b;
}
void pembagian(int& a,int& b, int& c)
{
c=a/b;
}
int main()
{
int x,y,z,a;
cout<<"Input Bilangan Pertama: ";
cin>>x;
cout<<"Input Bilangan Kedua: ";
cin>>y;
cout<<"Ketik angka 0 untuk menghitung perkalian kedua bilangan diatas! \n";
cout<<"Ketik angka 1 untuk menghitung penjumlahan kedua bilangan diatas! \n";
cout<<"Ketik angka 2 untuk menghitung pembagian kedua bilangan diatas! \n ";
cin>>a;
if(a==0)
{
	perkalian(x,y,z);
	cout<<"Hasilnya: "<<z;
}
else
{
	 if(a==1)
	{
		penjumlahan(x,y,z);
		cout<<"Hasilnya: "<<z;
	}
	 else
	{
		 if(a==2)
		{
			pembagian(x,y,z);
			cout<<"Hasilnya: "<<z;
		}
	}

}
return 0;
}
