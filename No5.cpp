#include<conio.h>
#include<stdio.h>
#include<iostream.h>
//Nuu77
main(){
 int total,jumlah=0;

 for(int a=2; a<=10; a+=2){
 total=0;
  for(int b=10; b>=a; b-=2){
  if(b!=10)
   cout<<" + ";
   cout<<b;
    total += b;


   jumlah += b;
  }
   cout<<" = "<<total<<endl;

 }
 cout<<"--------------------------"<<endl;
 cout<<"TOTAL = "<<jumlah<<endl;
 cout<<"--------------------------"<<endl;
 getch();
}
