#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<string>
#include<windows.h>

int hit_nil(int a, int b);

main() {
    int jumda;
    int hasil[99];
    char hur[99][99],lagi;

    struct {
        int uts,uas;
        char nm[99];
    } nilai[100];

    gotoxy(31,14);
    cout<<"By Wisnu :)";
    getch();
    do{
      clrscr();
      cout<<"\n\tPROGRAM HITUNG NILAI UTS, UAS\n"<<endl;
    cout<<"Jumlah Data : ";
    cin>>jumda;
    for(int a=0; a<jumda; a++) {
        cout<<"Data Ke-"<<a+1<<endl;
        cout<<"Nama Mahasiswa    : ";
        gets(nilai[a].nm);
        cout<<"Masukan Nilai UTS : ";
        cin>>nilai[a].uts;
        cout<<"Masukan Nilai UAS : ";
        cin>>nilai[a].uas;
        hasil[a] = hit_nil(nilai[a].uts,nilai[a].uas);
        if(hasil[a] >= 80) {
            strcpy(hur[a],"A");
        } else if(hasil[a] >= 70) {
            strcpy(hur[a],"B");
        } else if(hasil[a] >= 56) {
            strcpy(hur[a],"C");
        } else if(hasil[a] >= 47) {
            strcpy(hur[a],"D");
        } else if(hasil[a] < 47) {
            strcpy(hur[a],"E");
        }
       }

    clrscr();
    cout<<"\n\tDaftar Nilai Mata Kuliah C++\n"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"No  Nama           Nilai         Nilai    Nilai\n";
    cout<<"    Mahasiswa   UTS     UAS      Akhir    Huruf\n";
    cout<<"--------------------------------------------------"<<endl;
    for(int b=0; b<jumda; b++) {
        gotoxy(1,8+b);
        cout<<b+1<<endl;
        gotoxy(5,8+b);
        cout<<nilai[b].nm<<endl;
        gotoxy(17,8+b);
        cout<<nilai[b].uts<<endl;
        gotoxy(25,8+b);
        cout<<nilai[b].uas<<endl;
        gotoxy(34,8+b);
        cout<<hasil[b]<<endl;
        gotoxy(43,8+b);
        cout<<hur[b]<<endl;

    }
    cout<<"\nHitung Lagi (y/t) : ";cin>>lagi;
    }while(lagi == 'y'||lagi == 'Y');
    clrscr();
    gotoxy(31,14);
    cout<<"Sampai Jumpa !! :)";
    getch();
}

int hit_nil(int a, int b) {
    a = a*0.4;
    b = b*0.6;
    return (a+b);
}
