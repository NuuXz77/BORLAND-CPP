//Wisnu???

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<iomanip.h>

 main() {
    string loop;
    int benjen,ub;
    int harga[10], ppn, jumba[10],ttl,bayar=0,banli[10];
    char jenis,jns[10][10];

do{
 clrscr();
    puts(" GEROBAK FRIED CHICKEN");
    cout<<endl;
    puts("=============================");
    puts("Kode  Jenis\tHarga");
    puts("=============================");
    puts(" D    Dada\tRp.2500");
    cout<<endl;
    puts(" P    Paha\tRp.2000");
    cout<<endl;
    puts(" S    Sayap\tRp.1500");
    cout<<endl;
    cout<<"Banyak Jenis : ";
    cin>>benjen;
    cout<<endl;
    for(int a=0; a<benjen; a++) {
        cout<<"Jenis Ke-"<<a+1<<endl;
atas:
        cout<<"Jenis Potong [D/P/S] : ";
        cin>>jenis;
        cout<<endl;
        switch(jenis) {
        case 'D':
        case 'd':
            strcpy(jns[a],"Dada ");
            harga[a] = 2500;
            break;
        case 'P':
        case 'p':
            strcpy(jns[a],"Paha ");
            harga[a] = 2000;
            break;
        case 'S':
        case 's':
            strcpy(jns[a],"Sayap");
            harga[a] = 1500;
            break;
        default :
            cout<<"Pilihan Tidak Tersedia!!!"<<endl;
            goto atas;
            break;

        }
        cout<<"Banyak Potong : ";
        cin>>banli[a];
        cout<<endl;
        jumba[a] = harga[a]*banli[a];
        bayar = bayar + jumba[a];
    }
clrscr();


    puts("=================================================");
    puts("  No  Jenis\tHarga\tBanyak\tJumlah");
    puts("     Potong\tSatuan\tBeli\tHarga");
    puts("=================================================");
    for(int c=0; c<benjen; c++) {
        cout<<"  "<<c+1<<"  "<<jns[c]<<"\t";
        cout<<harga[c]<<"\t";
        cout<<banli[c]<<"\t";
        cout<<jumba[c]<<endl;
        cout<<endl;
    }
    puts("=================================================");
    cout<<"\t\tJumlah Bayar : "<<bayar<<endl;
    cout<<endl;
    ppn = bayar * 0.1;
    cout<<"\t\tPajak 10%    : "<<ppn<<endl;
    cout<<endl;
    ttl = bayar + ppn;
    cout<<"\t\tTotal  Bayar : "<<ttl<<endl;
    puts("=================================================");
    cout<<"\t\tUang Bayar   : ";cin>>ub;
    cout<<endl;
    ub = ub - ttl;
    cout<<"\t\tUang Kembali : "<<ub<<endl;
    puts("=================================================");
    cout<<"Ingin Ulang (y)  : ";cin>>loop;
    }while(loop == "y");
getch();
}