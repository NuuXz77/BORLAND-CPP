#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string>

main(){
char nm[99];
int gj, jmkrj, tnjgn, pnd, honor, ttl;
string pndd;

puts("*****************************************");
puts("\tPT. DINGIN DAMAI");
puts("*****************************************");
puts("");
cout<<"Nama Karyawan             : ";cin>>nm;
cout<<"Golongan Jabatan [1-3]    : ";cin>>gj;
if(gj==1){
 tnjgn=0.05*300000;
}else if(gj==2){
 tnjgn=0.10*300000;
}else if(gj==3){
 tnjgn=0.15*300000;
}
cout<<"Pendidikan [SMA/D1/D3/S1] : ";cin>>pndd;
if(pndd=="sma"||pndd=="SMA"){
 pnd=0.025*300000;
}else if(pndd=="d1"||pndd=="D1"){
 pnd=0.05*300000;
}else if(pndd=="d3"||pndd=="D3"){
 pnd=0.20*300000;
}else if(pndd=="s1"||pndd=="S1"){
 pnd=0.30*300000;
}
cout<<"Jumlah Jam Kerja          : ";cin>>jmkrj;
if(jmkrj>8){
 honor=jmkrj*3500;
}else{
 honor=0;
}

cout<<"Karyawan Yang Bernama : "<<nm<<endl;
cout<<"Honor Yang Di Terima  : "<<endl;
cout<<"\tTunjangan Jabatan    : "<<tnjgn<<endl;
cout<<"\tTunjangan Pendidikan : "<<pnd<<endl;
cout<<"\tHonor Lembur         : "<<honor<<endl;
ttl=tnjgn+pnd+honor;
cout<<"\tTotal Semua          : "<<ttl;
getch();
}