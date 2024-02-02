#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int bbeli,dis,ttl;
char loop;

void potong(){
 if(bbeli<1000000){
  dis = 0;
  cout<<"Besar Diskon Yang Diberikan       : Rp."<<dis<<endl;
 }else if(bbeli>1000000){
  dis = bbeli * 0.2;
  cout<<"Besar Diskon Yang Diberikan       : Rp."<<dis<<endl;
 }else if(bbeli>5000000){
  dis = bbeli * 0.35;
  cout<<"Besar Diskon Yang Diberikan       : Rp."<<dis<<endl;
 }
}


main(){
 gotoxy(31,14);cout<<"Wisnu :)";
 getch();

 do{
  clrscr();
  cout<<"\n\tPROGRAM HITUNG POTONGAN\n\n";
  cout<<"===========================================================\n";
  cout<<"Besar Beli Barang                 : Rp.";cin>>bbeli;
  cout<<endl;
  potong();
  ttl = bbeli - dis;
  cout<<endl;
  cout<<"Besar harga yang harus dibayarkan : Rp."<<ttl<<endl;
  cout<<"===========================================================\n";
  cout<<"Ulang (y/t) : ";cin>>loop;
  }while(loop == 'y'||loop == 'Y');
  clrscr();
   gotoxy(31,14);cout<<"Sampai Jumpa :)";
 getch();
}
