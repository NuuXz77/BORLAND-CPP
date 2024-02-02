#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string>

main(){
int p1, p2, p3, rt, ttl, jml;
char nm[99];
string j;

puts("***************");
puts("\tHITUNG NILAI RATA-RATA");
puts("***************");
puts("");
cout<<"Nama Siswa             : ";gets(nm);
cout<<endl;
cout<<"Nilai Pertandingan I   : ";cin>>p1;
cout<<endl;
cout<<"Nilai Pertandingan II  : ";cin>>p2;
cout<<endl;
cout<<"Nilai Pertandingan III : ";cin>>p3;
jml=3;
ttl=p1+p2+p3;
rt=ttl/jml;
if(rt>80){
 j=", dan menjadi juara ke-1";
}else if(rt>75){
 j=", dan menjadi juara ke-2";
}else if(rt>65){
 j=", dan menjadi juara ke-3";
}else if(65>rt){
 j="";
}
clrscr();
puts("***************");
puts("\tHITUNG NILAI RATA-RATA");
puts("***************");
puts("");
cout<<"Siswa Yang Bernama "<<nm<<endl;
cout<<endl;
cout<<"Memperoleh nilai rata-rata "<<rt<<j<<endl;
cout<<endl;
cout<<"dari hasil perlombaan yang diikutinya"<<endl;
cout<<endl;

getch();
}