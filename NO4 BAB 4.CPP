#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>

main(){
char k1[]="35.6";
char k2[]="12.5";
float ka1, ka2, tb, krg, kl, bg, mod;
int u,p;

cout<<"Kalimat 1 : "<<k1<<endl;
cout<<"Kalimat 2 : "<<k2<<endl;
ka1=atof(k1);
ka2=atof(k2);
tb=ka1+ka2;
cout<<"Pertambahan : "<<tb<<endl;
krg=ka1-ka2;
cout<<"Pengurangan : "<<krg<<endl;
kl=ka1*ka2;
cout<<"Perkalian   : "<<kl<<endl;
bg=ka1/ka2;
cout<<"Pembagian   : "<<bg<<endl;
u=ka1*1;
p=ka2*1;
mod=u%p;
cout<<"Modulus     : "<<mod<<endl;
getch();
}