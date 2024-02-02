//Wisnu??

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#define r pow (a,2)
#define f pow (b,3)
#define judul cprintf
#define asik textcolor

main(){
 int a,b;
 char ulang;
 gotoxy(31,12);cout<<"Ini Wisnu :)";
 getch();
do{
clrscr();
 asik(7);
 printf("\n\tHITUNG NILAI PANGKAT 2 DAN 3\n");
 cout<<endl;
 cout<<"masukan nilai pangkat dua  : ";cin>>a;
 cout<<endl;
 cout<<"masukan nilai pangkat tiga : ";cin>>b;
 a = r;
 b = f;
 cout<<endl;
 cout<<"========================================"<<endl;
 cout<<endl;
 cout<<"Hasil pangkat dua  : "<<a<<endl;
 cout<<endl;
 cout<<"Hasil pangkat tiga : "<<b<<endl;
 cout<<endl;
 cout<<"Ingin Mengulang (y/t) : ";cin>>ulang;
 }while(ulang == 'y'||ulang == 'Y');
 clrscr();
 gotoxy(31,12);cout<<"Sampai Jumpa Bos!!!"<<endl;
 getch();
}
