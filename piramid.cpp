#include <iostream>
using namespace std;
int main(){
	int baris,baris2,kolom,median,jmlbaris,minbaris,modulus;
	baris=1;
	baris2=1;
	kolom=1;
	cout<<"Tentukan Jumlah Baris yang akan di piramid kan?";
	cin>>jmlbaris;
	modulus=jmlbaris%2;
	minbaris=1;
	if(modulus=1)
	{
		median=(jmlbaris/2)+modulus;
		//cout<<median;
		while(baris<=jmlbaris && baris>=minbaris)
		{
			//kolom=1;
			if(baris<=median)
			{
				baris2=baris2+1;
				while(kolom<baris2)
				{
					cout<<"*";
					kolom=kolom+1;
				}
				//baris=baris+1;
			}
			kolom=1;
			if(baris>median)
			{
				baris2=baris2-1;
				while(kolom<baris2)
				{
					cout<<"*";
					kolom=kolom+1;
				}
				//baris=baris-1;
			}
			cout<<"\n";
			baris=baris+1;
		}
	}
	else
	{
		cout<<"Maaf Jumlah Baris yang harus anda inputkan harus Ganjil, bukan genap";
		//break
	}
	return 0;
}
