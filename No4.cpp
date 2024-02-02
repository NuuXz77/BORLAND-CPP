#include<iostream.h>
#include<stdio.h>
#include<conio.h>
//Nuu77
main(){
int a,b,total,input;

for(a=1;a<=10;a+=2)
	{
   total=1;
	for(b=1;b<=a;b+=2)
   {
      if(b!=1)
      cout<<" * ";
      cout<<b;
   	total *= b;
   }
   cout<<" = "<<total<<endl;
   }

getch();
}