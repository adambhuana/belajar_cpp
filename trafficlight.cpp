#include <iostream.h>
#include <windows.h>


void kendaraan(void)
{
	cout<<"\t Kendaraan Berjalan \n";
}
void lampu2(int& lampu,int& status)
{
	if(lampu==0)
	{
		cout<<"Lampu 2 OFF \n";
		lampu=1;
	}
	else
	{
		cout<<"Lampu 2 ON \n";
		kendaraan();
		lampu=0;
	}
}
void lampu3(int& lampu,int& status)
{
	if(lampu==0)
	{
		cout<<"Lampu 3 OFF \n";
		lampu=1;
	}
	else
	{
		cout<<"Lampu 3 ON \n";
		kendaraan();
		lampu=0;
	}
}
void lampu4(int& lampu,int& status)
{
	if(lampu==0)
	{
		cout<<"Lampu 4 OFF \n";
		lampu=1;
	}
	else
	{
		cout<<"Lampu 4 ON \n";
		lampu=0;
		kendaraan();
	}
	if(status==0)
	{
		lampu=1;
	}
}
void lampu1(int& lampu,int& status)
{
	if(lampu==0)
	{
		cout<<"\nLampu 1 OFF \n";
		lampu=1;
	}
	else
	{
		cout<<"\nLampu 1 ON \n";
		kendaraan();
		lampu=0;
	}
}
int main()
{
	int lampu=0;
	int status=0;
	int lampu2a,lampu3a,lampu4a;
	cout<<"Lampu Lalu Lintas Berjalan \n";
	while(status==0)
	{
		Sleep(1000);
	lampu1(lampu,status);
    lampu2a=lampu;
	Sleep(1000);
	lampu2(lampu2a,status);
	lampu3a=lampu2a;
	Sleep(1000);
	lampu3(lampu3a,status);
	lampu4a=lampu3a;
	Sleep(1000);
	lampu4(lampu4a,status);
	cout<<"\nLampu Selanjutnya\n";
	Sleep(5000);
	}
	return 0;
}
