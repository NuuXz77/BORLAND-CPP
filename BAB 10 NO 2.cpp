//Wisnu?
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string>


void garis() {
    cout<<"------------------------------------\n";
}

double hitung(double a) {
    return(a = (a - 32) * 5 / 9);
}

float hitung(float a) {
    return(a = (a- 32) * 5 / 9);
}

int hitung(int a) {
    return(a = (a - 32) * 5 / 9);
}

void tampilDou(double a) {
    double dou = hitung(a);
    cout<<"c = (f - 32) * 5 / 9\n"<<endl;
    cout<<"c = ("<<a<<" - 32) * 5 / 9\n"<<endl;
    cout<<"c = ("<<a-32<<") * 5 / 9\n"<<endl;
    cout<<"c = "<<dou<<" (double)\n"<<endl;
}

void tampilFlo(float a) {
    float flo = hitung(a);
    cout<<"c = (f - 32) * 5 / 9\n"<<endl;
    cout<<"c = ("<<a<<" - 32) * 5 / 9\n"<<endl;
    cout<<"c = ("<<a-32<<") * 5 / 9\n"<<endl;
    cout<<"c = "<<flo<<" (floating)\n"<<endl;
}

void tampilInt(int a) {
    int in = hitung(a);
    cout<<"c = (f - 32) * 5 / 9\n"<<endl;
    cout<<"c = ("<<a<<" - 32) * 5 / 9\n"<<endl;
    cout<<"c = ("<<a-32<<") * 5 / 9\n"<<endl;
    cout<<"c = "<<in<<" (integer)\n"<<endl;
}

main() {
    double v;
    float b;
    int n;
    char lagi;
    gotoxy(31,14);cout<<"Wisnu-_-";
    getch();
    do {
        clrscr();
        cout<<"\n\tKONVERSI SUHU FAHRENHEIT -> CELCIUS\n"<<endl;
        cout<<"Masukan Suhu Fahrenheit : ";
        cin>>v;
        b = v;
        n = v;
        cout<<endl;
        garis();
        tampilDou(v);
        garis();
        tampilFlo(b);
        garis();
        tampilInt(n);
        garis();
        cout<<"Ulang (y) : ";
        cin>>lagi;
    } while(lagi == 'y'||lagi == 'Y');
    clrscr();
    gotoxy(31,14);cout<<"Sampai Jumpa!-_-";
    getch();
}
