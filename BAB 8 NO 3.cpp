//Wisnu??

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include"hitnilai.h"

main(){
  int absen, tugas, uts, uas;
  float ttl = 0;
 char loop;
 gotoxy(31,13);cout<<"Wisnu :)";
 getch();
do{
clrscr();
 cout<<"\n\tProgram Hitung Nilai Akhir Mata Kuliah\n\n";

 cout<<"Masukan Nilai Absensi : ";cin>>absen;
 cout<<endl;
 cout<<"Masukan Nilai Tugas   : ";cin>>tugas;
 cout<<endl;
 cout<<"Masukan Nilai U.T.S   : ";cin>>uts;
 cout<<endl;
 cout<<"Masukan Nilai U.A.S   : ";cin>>uas;
 cout<<endl;
 cout<<"=======================================================\n"<<endl;
 cout<<"Nilai Murni Absensi = "<<absen<<" * 10% = "<<hit_abs(absen)<<endl;
 cout<<endl;
 cout<<"Nilai Murni Tugas   = "<<tugas<<" * 20% = "<<hit_tgs(tugas)<<endl;
 cout<<endl;
 cout<<"Nilai Murni Absensi = "<<uts<<" * 30% = "<<hit_uts(uts)<<endl;
 cout<<endl;
 cout<<"Nilai Murni Absensi = "<<uas<<" * 40% = "<<hit_uas(uas)<<endl;
 cout<<endl;
 ttl = hit_abs(absen) + hit_tgs(tugas) + hit_uts(uts) + hit_uas(uas);
 cout<<"Nilai Akhir yang diperoleh sebesar : "<<ttl<<endl;
 cout<<"Ulang (y/t) : ";cin>>loop;
}while(loop == 'y'||loop == 'Y');
 clrscr();
 gotoxy(31,13);cout<<"Sampai Jumpa :)";
  getch();
}
