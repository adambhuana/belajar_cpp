#include <iostream>
#include <windows.h>
using namespace std;
int main()
{ 
  int posisi;
  int tujuan;
  int dasar;
  int atas;
cout<< "Selamat datang di Gedung Buana, Dengan 10 Lantai, lantai dasar adalah lantai 1, lantai tertinggi adalah lantai 10"<<endl;
cout<< "Posisi Anda saat ini ada di lantai berapa?";
cin>>posisi;
cout<< "Lantai yang anda tuju, lantai berapa?";
cin>>tujuan;
dasar=1;
atas=10;
if(posisi>=dasar && posisi<=atas)
{
	if(tujuan>=dasar && tujuan<=atas)
	{
		if(!(posisi==tujuan))
		{
			if(posisi<tujuan)
			{
				cout<<"Lift akan naik sejauh: "<<tujuan-posisi<<" lantai\n";
				int i;
				for(i=posisi;posisi<tujuan+1;posisi++)
				{
					//system("CLS");
					cout <<"Lantai: " <<posisi << endl;
					Sleep(2000);
				}
				cout <<"Pintu Terbuka, Terimakasih";
				return 0;
			}
			else
			{
				if(posisi>tujuan)
				{
					cout<<"Lift akan turun sejauh: "<<posisi-tujuan<<" lantai\n";
					int i;
					for(i=posisi;tujuan<posisi+1;posisi--)
					{
						//system("CLS");
						cout <<"Lantai: " <<posisi << endl;
						Sleep(2000);
					}
					cout <<"Pintu Terbuka, Terimakasih";
					return 0;
					}
			}
		}
		else
		{
			
			cout<<"Lift Tidak akan bergerak";
		}
	}
	else
	{
		cout<<"Anda tidak memasukkan no lantai yang benar";
	}
}
else
{
	cout<<"Anda tidak memasukkan no lantai yang benar";
}


//for(i=0; i<1000+1; i+=1)
//{
	//system("CLS");
	//cout << i << endl;
	//Sleep(1000);
//}

}
