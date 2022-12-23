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
	cout<<"Yönetici Giriþi Baþarýlý Veri Tabanýna Yönlendiriliyorsunuz...";
	cout<<endl<<endl<<endl<<"Yükleniyor";
	for(int i=0;i<=2;i++)
	{
		cout<<". ";
		sleep(1);
	}
	system("cls");
	cout<<"              *** Yönetici Paneli ***"<<endl<<endl<<" *** Yapmak istediðiniz iþlem numarasýný giriniz ***"<<endl<<endl;
	cout<<" ( 1 ) Müþteri iþlemleri   için  >> 1`i  tuþlayýnýz. "<<endl<<endl;
	cout<<" ( 2 ) Araç iþlemleri  için  >> 2`yi tuþlayýnýz. "<<endl<<endl;
	cout<<" ( 3 ) Þirket genel gelir gider durumu  için  >> 3`ü  tuþlayýnýz. "<<endl<<endl;
	cout<<" ( 4 ) Güvenli çýkýþ  için  >> 4`ü  tuþlayýnýz. "<<endl<<endl;
	cout<<endl<<"     >>  ";
	cin>>x;
	
	switch(x)
	{
		case 1 :
		{
			cout<<" *** Müþteri Ýþlemleri ***"<<endl<<endl;
			cout<<" ( 1 ) Müþteri listesini görüntülemek   için  >> 1`i  tuþlayýnýz. "<<endl<<endl;
			cout<<" ( 2 ) Müþteri bilgilerini güncellemek   için  >> 2`i  tuþlayýnýz. "<<endl<<endl;
			cout<<" ( 3 ) Müþteri kayýdýný silmek   için  >> 3`i  tuþlayýnýz. "<<endl<<endl;
			cout<<" ( 4 ) Müþteri kayýt etmek   için  >> 4`i  tuþlayýnýz. "<<endl<<endl;
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
			cout<<" Güvenli çýkýþ saðlanýyor... ";
			cout<<endl<<endl;
			cout<<"   "<<4-i;
			sleep(1);
			}
			system("cls");
			cout<<endl<<endl<<"  Veri tabaný ile baðlantýnýz kesilmiþtir.  "<<endl<<endl<<"  Programý sonlandýrmak için herhangi bir tuþa basýnýz."<<endl<<endl<<endl<<endl<<endl;
			break;
		}	
	}
	
	
}
