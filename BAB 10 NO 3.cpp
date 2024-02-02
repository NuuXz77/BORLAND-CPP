#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string>

 char nama[99];
 char kode, jenis[20];
 int tarif,pinj, ttl;

int hitungT(int a){
 int b = tarif * pinj;
 return b;
}

int main(){
 char loop;
 gotoxy(31,14);cout<<"Wisnu :)";
 do{
 clrscr();

 cout<<"\n\tPerpustakaan Kecil-Kecilan\n";
 cout<<"-----------------------------------\n";
 cout<<"Masukan Nama Penyewa Buku : ";gets(nama);
 atas:
 cout<<"Kode Buku [C/K/N]         : ";cin>>kode;
 if(kode == 'C'||kode == 'c'){
  strcpy(jenis,"Cerpen");
  tarif = 500;
 }else if(kode == 'K'||kode == 'k'){
  strcpy(jenis,"Komik");
  tarif = 700;
 }else if(kode == 'N'||kode == 'n'){
  strcpy(jenis,"Novel");
  tarif = 1000;
 }else{
  cout<<"Pilihan Tidak Tersedia !!!\n";
  goto atas;
 }
 cout<<"Banyak Pinjam             : ";cin>>pinj;
 ttl = hitungT(pinj) * pinj;
 clrscr();

 cout<<"\n\tPerpustakaan Kecil-Kecilan\n";
 cout<<"-----------------------------------\n";
 cout<<"Tarif Sewa \t\t\t: Rp."<<hitungT(pinj)<<endl;
 cout<<"Jenis Buku \t\t\t: "<<jenis<<endl;
 cout<<"Penyewa Dengan Nama \t\t: "<<nama<<endl;
 cout<<"Jumlah Bayar Penyewaan Sebesar \t: Rp."<<ttl<<endl;
 cout<<"-----------------------------------\n";
 cout<<"Ulang (y/t) : ";cin>>loop;
 }while(loop == 'y'||loop == 'Y');
 clrscr();
 gotoxy(31,14);cout<<"Sampai Jumpa :)";
 getch();
 }