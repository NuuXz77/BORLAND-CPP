#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string>

main(){
char nm[99];
int nk, nt, nu, ttl;
string grade;

puts("********************************************");
puts("\tHITUNG NILAI AKHIR");
puts("********************************************");
puts("");
cout<<"Nama Siswa   : ";gets(nm);
cout<<endl;
cout<<"Nilai Keaktifan : ";cin>>nk;
cout<<endl;
cout<<"Nilai Tugas     : ";cin>>nt;
cout<<endl;
cout<<"Nilai Ujian     : ";cin>>nu;
nk=nk*0.20;
nt=nt*0.30;
nu=nu*0.50;
ttl=nk+nt+nu;
if(ttl>80){
 grade="A";
}else if(ttl>70){
 grade="B";
}else if(ttl>56){
 grade="C";
}else if(ttl>46){
 grade="D";
}else{
 grade="E";
}
clrscr();
puts("********************************************");
puts("\tHITUNG NILAI AKHIR");
puts("********************************************");
puts("");
cout<<"Siswa Yang Bernama "<<nm<<endl;
cout<<endl;
cout<<"Dengan Nilai Presentasi Yang Di Hasilkan."<<endl;
cout<<endl;
cout<<"Nilai Keaktifan * 20%  : "<<nk<<endl;
cout<<endl;
cout<<"Nilai Tugas * 30%      : "<<nt<<endl;
cout<<endl;
cout<<"Nilai Ujian * 50%      : "<<nu<<endl;
cout<<endl;
cout<<"Jadi Siswa yang bernama "<<nm<<endl;
cout<<"memperoleh nilai akhir sebesar "<<ttl<<endl;
cout<<"dengan grade "<<grade<<endl;


cout<<endl;
getch();
}