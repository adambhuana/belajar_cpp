#include<iostream>
using namespace std;
struct node
{
	char char1;
	node *next;
};
struct node1
{
	char char1;
	node *next;
};
bool isEmpty(node *head)
{
	if(head==NULL)
		return true;
	else
		return false;
}
char menu(char choice)
{
	cout<<"Menu\n";
	cout<<"1. Isi data\n";
	cout<<"2. Hapus data (Automatic dari Head)\n";
	cout<<"3. Lihat List\n";
	cout<<"4. Cari data\n";
	cout<<"5. Keluar\n";
	cin>>choice;
	return choice;
}
void insertAsFirstElement(node *&head, node *&last, char char1)
{
	node *temp= new node;
	temp->char1=char1;
	temp->next=NULL;
	head=temp;
	last=temp;
}
void insert(node *&head, node *&last, char char1)
{
	if(isEmpty(head))
	{
		insertAsFirstElement(head, last, char1);
	}
	else
	{
		node *temp= new node;
		temp->char1=char1;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}
void hapus(node *&head, node *&last)
{
	if(isEmpty(head))
	{
		cout<<"List nya sudah Kosong\n";
	}
	else if(head==last)
	{
		 delete head;
		 head=NULL;
		 last=NULL;
	}else
	{
		node *temp=head;
		head=head->next;
		delete temp;
	}
}
void caridata(node *current, char char2)
{
	if(isEmpty(current))
	{
		cout<<"List nya kosong, pencarian data berakhir\n";
	}
	else
	{
		int count;
		count=0;
		//cout<<"Isi List nya adalah:\n";
		while(current!=NULL)
		{
			if(current->char1==char2)
			{
				count=count+1;
			}
			else
			{
				count=count;
			}
			//cout<<current->number<<endl;
			current=current->next;
		}
		if(count!=0)
		{
		cout<<"Data ditemukan, ada "<<count<<" data yang sesuai dengan bilangan yang dicari\n";
		}
		else
		{
			cout<<"Data tidak diketemukan \n";
		}
	}   
}
void showList(node *current)
{
	if(isEmpty(current))
	{
		cout<<"List nya kosong\n";
	}
	else
	{
		cout<<"Isi List nya adalah:\n";
		while(current!=NULL)
		{
			cout<<current->char1<<endl;
			current=current->next;
		}
	}
}
int main()
{
	node *head=NULL;
	node *last=NULL;
	char choice;
	char char1,char2;
	int number,number2,number3;
	
	do
	{
		choice = menu(choice);
		switch(choice)
		{
		case '1': 
			cout<<"Silahkan input dengan satu karakter huruf\n";
			cin>>char1;
			insert(head,last,char1);
			break;
		case '2': 
			hapus(head,last);
		    break;
		case '3':
			showList(head);
			break;
		case '4':
		cout<<"Silahkan input data satu karakter huruf\n";
			cin>>char2;
			caridata(head, char2);
		    break;
		case '5': cout<<"System Keluar\n";
		}
	}while(choice!='5');
	return 0;
}
