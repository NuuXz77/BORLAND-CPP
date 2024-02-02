//Wisnu???

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<iomanip.h>
#include<windows.h>

 main() {
//Program Hitung Honor Karyawan Kontrak//
int jumkar,gol,tunj[20],jamker[20],pend,pajak[20];
int per[20],penber[20],honor[20],ttl[20],ttlgj = 0;
int lembur[20],pndd[20],bersih[20];
char namkar[20][20];
string loop;

do{
 clrscr();
  cout<<"\tPT. STAY COOL"<<endl;
  cout<<endl;
  cout<<"Masukan Jumlah Karyawan : ";cin>>jumkar;
  for(int a=0; a<jumkar; a++){
   cout<<"Karyawan Ke-"<<a+1<<endl;
   cout<<endl;
   cout<<"Nama Karyawan \t\t\t: ";gets(namkar[a]);
   cout<<endl;
atas:
   cout<<"Golongan [1-3] \t\t\t: ";cin>>gol;
   switch(gol){
    case 1 :
      tunj[a] = 700000 * 0.05;
      break;
    case 2 :
      tunj[a] = 700000 * 0.10;
      break;
    case 3 :
      tunj[a] = 700000 * 0.15;
      break;
    default :
      cout<<"Pilihan Tidak Ada!!"<<endl;
      goto atas;
      break;
   }
   cout<<endl;
atas1:
   cout<<"Pendidikan [1=SMU/2=D3/3=S1] \t: ";cin>>pend;
    switch(pend){
    case 1 :
      pndd[a] = 700000 * 0.05;
      break;
    case 2 :
      pndd[a] = 700000 * 0.10;
      break;
    case 3 :
      pndd[a] = 700000 * 0.15;
      break;
    default :
      cout<<"Pilihan Tidak Ada!!"<<endl;
      goto atas;
      break;
   }
   cout<<endl;
   cout<<"Jumlah Jam Kerja \t\t: ";cin>>jamker[a];
   if(jamker[a] > 240){
     lembur[a] = (jamker[a]-240) * 2500;
   }else{
    lembur[a] = 0;
   }
   ttl[a] = tunj[a] + pndd[a] + lembur[a];
   pajak[a] = ttl[a] * 0.10;
   bersih[a] = ttl[a] - pajak[a];
  }

clrscr();
  cout<<"\tPT. STAY COOL"<<endl;
  cout<<"----------------------------------------------------------------------------"<<endl;
  cout<<"No  Nama\t    Tunjangan"<<endl;
  cout<<"    Karyawan\t   -------------- \t  Honor  \t\tPendapatan\n";
  cout<<"            \tJabatan\t   Pendidikan \t  Lembur\t Pajak\t  Bersih\n";
  cout<<"----------------------------------------------------------------------------"<<endl;
  cout<<endl;
  for(int b=0; b<jumkar; b++){
  gotoxy(1,8+b);cout<<b+1;
  gotoxy(5,8+b);cout<<namkar[b]<<endl;
  gotoxy(15,8+b);cout<<"Rp."<<tunj[b]<<endl;
  gotoxy(29,8+b);cout<<"Rp."<<pndd[b]<<endl;
  gotoxy(43,8+b);cout<<"Rp."<<lembur[b]<<endl;
  gotoxy(56,8+b);cout<<"Rp."<<pajak[b]<<endl;
  gotoxy(65,8+b);cout<<"Rp."<<bersih[b]<<endl;
  cout<<endl;
  ttlgj = ttlgj + bersih[b];
  }
  cout<<"----------------------------------------------------------------------------"<<endl;
  cout<<"\t\t\tTotal Gaji Yang Dikeluarkan Rp."<<ttlgj<<endl;
  cout<<endl;
  cout<<"Ulang (y/t) : ";cin>>loop;
  }while(loop == "y"||loop == "Y");
 cout<<"SAMPAI JUMPA :) !!!!!"<<endl;
getch();
}
