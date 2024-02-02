#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

main(){
char m[]="Manajemen";
char i[]="informatika";

cout<<"Teks 1 : "<<m<<endl;
cout<<endl;
cout<<"Teks 2 : "<<i<<endl;
cout<<endl;
strcat(m,i);
cout<<"Hasil  : "<<m;
cout<<endl;
getch();
}