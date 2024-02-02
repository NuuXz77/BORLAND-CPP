#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include"lingkaran.h"

main(){
 char loop;
  gotoxy(31,14);cout<<"Wisnu :)";
  getch();
  clrscr();
 do{
   clrscr();
     float r,L,K;
  cout<<"Masukan Nilai Jari-Jari = ";cin>>r;
  tampilL(r);
  cout<<endl;
  tampilK(r);
  cout<<"Ulang (y/t) : ";cin>>loop;
 }while(loop == 'y'||loop == 'Y');
  clrscr();
  gotoxy(31,14);cout<<"Sampai Jumpa :)";
 getch();
}