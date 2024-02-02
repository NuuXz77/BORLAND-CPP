#include<iostream.h>
#include<stdio.h>
#include<conio.h>
//Nuu77
main()
{
int a,b,total;

for(a=2;a<=10;a+=2)
{
total=0;
   for(b=2;b<=a;b+=2)
       {
         if(b!=2)
         cout<<" + ";
         cout<<b;
         total +=b;
      }
cout<<" = "<<total<<endl;
}
cout<<endl;
getch();
}