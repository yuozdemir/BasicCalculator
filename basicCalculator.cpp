#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<ctime>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>

using namespace std;

int a;
double x,y,z;

main()
{
setlocale(LC_ALL,"Turkish");
system("color c");
er:
system("cls");    

cout<<"XX  XX   XXXXXX   XX       XX       XXXXXX  "<<endl;
cout<<"XX  XX   XX       XX       XX       XX  XX  "<<endl;
cout<<"XXXXXX   XXXX     XX       XX       XX  XX  "<<endl;
cout<<"XX  XX   XX       XX       XX       XX  XX  "<<endl;
cout<<"XX  XX   XXXXXX   XXXXXX   XXXXXX   XXXXXX  "<<endl<<endl;

cout<<" << Merhaba YUSUF bey hangi işlemi yapmak istersiniz >> "<<endl<<endl;
cout<<" << 1  >>  Toplama işlemi  "<<endl;
cout<<" << 2  >>  Çıkarma işlemi  "<<endl;
cout<<" << 3  >>  Bölme işlemi    "<<endl;
cout<<" << 4  >>  Çarpma işlemi   "<<endl;
cout<<" << 5  >>  Karakök alma    "<<endl;
cout<<" << 6  >>  Karesini alma   "<<endl;
cout<<" << 7  >>  Üstü alma       "<<endl;
cout<<" << 8  >>  Sinüs           "<<endl;
cout<<" << 9  >>  Cosinüs         "<<endl;
cout<<" << 10 >>  Tanjant         "<<endl;
cout<<" << 11 >>  Cotanjant       "<<endl;
cout<<" << 12 >>  Sayısalmı oynucan karşiiimm gel "<<endl;
cout<<" << 13 >>  Trigomu lazım karşiim gel  "<<endl;
cout<<" << 14 >>  Toplama işlemi  "<<endl;
cout<<" << 15 >>  Tek - Çift - Birler Basamağı "<<endl;
cout<<" << 0  >>  Çıkmak için basınız  "<<endl<<endl;
cout<<">>   ";

cin>>a;
system("cls");
switch(a)
{
case 0  : goto er0; break;
case 1  : goto er1; break;
case 2  : goto er2; break;
case 3  : goto er3; break;
case 4  : goto er4; break;
case 5  : goto er5; break;
case 6  : goto er6; break;
case 7  : goto er7; break;
case 8  : goto er8; break;
case 9  : goto er9; break;
case 10 : goto er10; break;
case 11 : goto er11; break;
case 12 : goto er12; break;
case 13 : goto er13; break;
case 14 : goto er14; break;
case 15 : goto er15; break;	
}

{ 
er1:
cout<<" << İki adet sayı giriniz >> ";
cin>>x>>y;
cout<<"Sonuc="<<x+y<<" ";
getch();
goto er;
}
{
er2:
cout<<" << İki adet sayı giriniz >> ";
cin>>x>>y;
cout<<"Sonuc="<<x-y<<" ";
getch();
goto er;
}
{
er3:
cout<<" << İki adet sayı giriniz >> ";
cin>>x>>y;
cout<<"Sonuc="<<x/y<<" ";	
getch();
goto er;	
}
{
er4:
cout<<" << İki adet sayı giriniz >> ";
cin>>x>>y;
cout<<"Sonuc="<<x*y<<" ";	
getch();
goto er;
}
{
er5:
cout<<" << Karekökü alınacak sayıyı giriniz >> ";
cin>>x;
cout<<"Sonuc="<<sqrt(x)<<" ";	
getch();
goto er;
}
{
er6:
cout<<" << Hangi sayının karesini almak istiyorsunuz >> ";
cin>>x;
cout<<"Sonuc="<<pow(x,2)<<" ";	
getch();
goto er;
}
{
er7:
cout<<" << Taban için bir X ve üst için bir Y değeri giriniz >> ";
cin>>x>>y;
cout<<"Sonuc="<<pow(x,y)<<" ";	
getch();
goto er;
}
{
er8:
cout<<" << Sinüs almak için 1'e Arcsin almak için 2'ye basınız >> ";
cin>>a;
if(a==1)
{
cout<<" << Derece giriniz >> ";
cin>>x;
z=x*M_PI/180;
cout<<"Sonuc="<<sin(z)<<" ";	
getch();
goto er;
}
if(a==2)
{
cout<<" << Değerini giriniz >> ";
cin>>x;
cout<<"Sonuc="<<asin(x)*180.0/M_PI<<" ";	
getch();
goto er;
}
}
{
er9:
cout<<" << Cosinüs almak için 1'e ArcCcos almak için 2'ye basınız >> ";
cin>>a;
if(a==1)
{
cout<<" << Derece giriniz >> ";
cin>>x;
z=x*M_PI/180;
cout<<"Sonuc="<<cos(z)<<" ";	
getch();
goto er;
}
if(a==2)
{
cout<<" << Değerini giriniz >> ";
cin>>x;
cout<<"Sonuc="<<acos(x)*180.0/M_PI<<" ";	
getch();
goto er;
}
}
{
er10:
cout<<" << Tanjant almak için 1'e Arctan almak için 2'ye basınız >> ";
cin>>a;
if(a==1)
{
cout<<" << Derece giriniz >> ";
cin>>x;
z=x*M_PI/180;
cout<<"Sonuc="<<tan(z)<<" ";	
getch();
goto er;
}
if(a==2)
{
cout<<" << Değerini giriniz >> ";
cin>>x;
cout<<"Sonuc="<<atan(x)*180.0/M_PI<<" ";	
getch();
goto er;
}
}
{
er11:
cout<<" << Cotanjant almak için 1'e ArcCcot almak için 2'ye basınız >> ";
cin>>a;
if(a==1)
{
cout<<" << Derece giriniz >> ";
cin>>x;
z=x*M_PI/180;
z=tan(z);
cout<<"Sonuc="<<1/z<<" ";	
getch();
goto er;
}
if(a==2)
{
cout<<" << Değerini giriniz >> ";
cin>>x;
x=tan(x);
cout<<"Sonuc="<<1/x*180.0/M_PI<<" ";	
getch();
goto er;
}
}
{
er12:
for(int i=1;i<7;i++)
{
cout<<i<<".Sayı  "<<rand()%100<<endl;
}
getch();
goto er;
}
{
er13:
for(int i=0;i<=180;i++)
{
z=i*M_PI/180;
cout<<"Açı: "<<i<<" > > > > > "<<"Sin:"<<sin(z)<<" > > > > > "<<"Cos:"<<cos(z)<<" > > > > > "<<"Tan:"<<tan(z)<<endl;	
}
getch();
goto er;
}
{
er14:
char y[10],o[10];
cout<<"Adını gir moruq > > >";
cin>>y;
cout<<endl<<"Soyadını gir knk > > >";
cin>>o;
getch();
goto er;
}
{
er15:
setlocale(LC_ALL, "Turkish");
int a;
char y;
exp:
system("cls");
cin>>a;
if(a%10>5 && a%2==0)
{
system("color c");
cout<<"girdiginiz sayının birler basamagı 5 ten buyuk ve çift sayıdır";
}
else if(a%10<=5 && a%2!=0)
{
system("color a");
cout<<"girdiginiz sayının birler basamagı 5 ten küçük ve tek sayıdır";
}
else
{
system("color b");
cout<<"girdiginiz sayı sayı deıldır moruq";
}
getch();
goto er;	
}
er0:
getch();	
}
