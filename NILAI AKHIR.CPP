#include<stdio.h>
#include<conio.h>
#include<iostream.h>

main(){
int nilai, nk, nt, nu;
char nm[99];

cout << "=============================================" << endl;
cout << "||\tPROGRAM HITUNG NILAI AKHIR         ||"<<endl;
cout << "=============================================" << endl;
cout << "\tNama Siswa       :";cin>>nm;
cout << endl;
cout << "\tNilai Keaktifan  :";cin>>nk;
cout << endl;
cout << "\tNilai Tugas      :";cin>>nt;
cout << endl;
cout << "\tNilai Ujian      :";cin>>nu;
cout << "==============================================" << endl;
cout << "Siswa Yang Bernama "<<nm<<endl;
cout << "Dengan Nilai Presentasi Yang Dihasilkan."<<endl;
nk=nk*0.20;
cout << "Nilai Keaktifan  : "<<nk<<endl;
nt=nt*0.30;
cout << "Nilai Tugas      : "<<nt<<endl;
nu=nu*0.50;
cout << "Nilai Ujian      : "<<nu<<endl;
cout << endl;
cout << "===================================================================" << endl;
nilai=nk+nt+nu;
cout << "Jadi Siswa Yang Bernama "<<nm<<", Mendapat Nilai Akhir Sebesar "<<nilai<<endl;
cout << "===================================================================" << endl;
getch();
}