#include<stdio.h>
#include<conio.h>
#include<iostream.h>
//Nuu77
main(){
int total=0;
 for(int a=2; a<=20; a+=2){
  cout<<a;
  total += a;
  if(a!=20)
   {
    cout<<" + ";
  }
  }
  cout<<" = "<<total<<endl;
  getch();
}
