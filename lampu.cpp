#include <iostream.h>
#include <windows.h>
void nyala(void)
{
	cout<<"Lampu Menyala"<<endl;
}
void mati(void)
{
	
	cout<<"Lampu Mati"<<endl;
}
int main()
{
	int status=0;
	int tekan;
	while(status==0)
	{
		cout<<"Tekan 1 untuk menyalakan lampu, 0 untuk mematikan lampu"<<endl;
		cin>>tekan;
		if(tekan==1)
		{ 
			nyala();
		}
		else
		{
			mati();
		}
		Sleep(2000);
		system("CLS");
		
	}
}
