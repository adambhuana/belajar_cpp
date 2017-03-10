#include <iostream.h>
#include <windows.h>

void menu(void)
{
	int nomenu;
	int harga;
	int hargasoft=5000;
	int hargaaqua=3000;
	cout<<"Daftar Menu Minuman\n";
	cout<<"1) Soft Drink : Rp. 5.000,-\n";
	cout<<"2} Aqua Botol : Rp. 3.000,- \n";
	cout<<"Pilih No Minuman yang ingin anda beli?\n";
    cin>>nomenu;
	cout<<"Masukkan Harga minuman dengan uang pas?";
	cin>>harga;
	if((nomenu==1 and harga==hargasoft) or (nomenu==2 and harga==hargaaqua))
	{
			cout<<"Uang diterima \n";
			if(nomenu==1)
			{
				cout<<"Minuman Softdrink dapat diambil, Terimakasih \n";
			}
			else
			{
				cout<<"Minuman Aqua dapat diambil, Terimakasih \n";
			}
			Sleep(2000);
			system("CLS");
			menu();
	}
	else
	{
		cout<<"Uang tidak sesuai dengan harga minuman, Kembali ke Menu Utama, Terimakasih \n";
	    Sleep(2000);
		system("CLS");
		menu();
	}
	
}

int main()
{
	menu();
	return 0;
}
