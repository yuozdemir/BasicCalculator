#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<ctype.h>
#include<locale.h>
#include<fstream>
#include<string.h>
#include<ctime>
#include<unistd.h>
using namespace std;
main()
{
	system("color 0a");
	setlocale(LC_ALL, "Turkish");
	
	string userId; 
	int pasword,x;
	
	er1:
	cout<<"User ID : ";
	cin>>userId;
	if(userId=="corona")
	{
		cout<<endl<<"Pasword : ";
		cin>>pasword;
		if(pasword==2020)
		{
			system("cls");
			goto er0;
		}
		else 
		{
			system("cls");
			cout<<"ERROR";
			getch();
			system("cls");
			goto er1;
	    }
	}
	
	else 
	{
			system("cls");
			cout<<"ERROR";
			getch();
			system("cls");
			goto er1;
    }
    
	er0:
	cout<<"Y�netici Giri�i Ba�ar�l� Veri Taban�na Y�nlendiriliyorsunuz...";
	cout<<endl<<endl<<endl<<"Y�kleniyor";
	for(int i=0;i<=2;i++)
	{
		cout<<". ";
		sleep(1);
	}
	system("cls");
	cout<<"              *** Y�netici Paneli ***"<<endl<<endl<<" *** Yapmak istedi�iniz i�lem numaras�n� giriniz ***"<<endl<<endl;
	cout<<" ( 1 ) M��teri i�lemleri   i�in  >> 1`i  tu�lay�n�z. "<<endl<<endl;
	cout<<" ( 2 ) Ara� i�lemleri  i�in  >> 2`yi tu�lay�n�z. "<<endl<<endl;
	cout<<" ( 3 ) �irket genel gelir gider durumu  i�in  >> 3`�  tu�lay�n�z. "<<endl<<endl;
	cout<<" ( 4 ) G�venli ��k��  i�in  >> 4`�  tu�lay�n�z. "<<endl<<endl;
	cout<<endl<<"     >>  ";
	cin>>x;
	
	switch(x)
	{
		case 1 :
		{
			cout<<" *** M��teri ��lemleri ***"<<endl<<endl;
			cout<<" ( 1 ) M��teri listesini g�r�nt�lemek   i�in  >> 1`i  tu�lay�n�z. "<<endl<<endl;
			cout<<" ( 2 ) M��teri bilgilerini g�ncellemek   i�in  >> 2`i  tu�lay�n�z. "<<endl<<endl;
			cout<<" ( 3 ) M��teri kay�d�n� silmek   i�in  >> 3`i  tu�lay�n�z. "<<endl<<endl;
			cout<<" ( 4 ) M��teri kay�t etmek   i�in  >> 4`i  tu�lay�n�z. "<<endl<<endl;
		} 
		
		case 2 :
		{
			
		}
		
		case 3 : 
		{
			
		}
		
		case 4 :
		{
			system("cls");
			for(int i=1;i<=3;i++)
			{
			system("cls");
			cout<<" G�venli ��k�� sa�lan�yor... ";
			cout<<endl<<endl;
			cout<<"   "<<4-i;
			sleep(1);
			}
			system("cls");
			cout<<endl<<endl<<"  Veri taban� ile ba�lant�n�z kesilmi�tir.  "<<endl<<endl<<"  Program� sonland�rmak i�in herhangi bir tu�a bas�n�z."<<endl<<endl<<endl<<endl<<endl;
			break;
		}	
	}
	
	
}
