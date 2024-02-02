#include<iostream.h>
#include<conio.h>
#include<stdio.h>

main(){
char nm[99];
int t1,t2,t3,rata,ttl,nim,jml;

cout<<"========================================="<<endl;
cout<<"\tHITUNG RATA RATA NILAI"<<endl;
cout<<"========================================="<<endl;
//Input Data
cout<<"Nim Siswa       : ";cin>>nim;
cout<<"Nama Siswa      : ";cin>>nm;
cout<<"Nilai Tugas l   : ";cin>>t1;
cout<<"Nilai Tugas 2   : ";cin>>t2;
cout<<"Nilai Tugas 3   : ";cin>>t3;
cout<<"========================================="<<endl;
//Hitung Nilai
ttl=3;
jml=t1+t2+t3;
cout<<"TOTAL NILAI     : "<<jml<<endl;
rata=jml/ttl;
cout<<"RATA RATA NILAI : "<<rata<<endl;
cout<<"========================================="<<endl;
clrscr();
cout<<"Nim "<<nim<<", Siswa Yang Bernama "<<nm<<endl;
cout<<"Memperoleh Nilai Rata-Rata "<<rata<<" Dari Tugas Yang Di Ikuti"<<endl;
cout<<"PERTAHANKAN !!!!:)"<<endl;
getch();
}