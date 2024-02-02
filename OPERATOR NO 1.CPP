#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string>

main(){
int A=3 ,B= 6,C= 2, K= 5,L= 4,M= 3;
int a1, a2, a3, hsla;
int b1, b2, b3, hslb;
int c1, c2, c3, hslc;
int hsld;
int e1, e2, hsle;

puts("***********************************************");
puts("||\t\tT U G A S  3.7               ||");
puts("***********************************************");
puts("");
cout<<"Angka : A=3 ,B= 6,C= 2, K= 5,L= 4,M= 3"<<endl;
cout<<endl;
//No1 A
cout<<"\t\tPOIN A"<<endl;
a1=4 + 2 > A;
cout<<"\tHasil 4 + 2 > A      : "<<a1<<endl;
a2=B - 2 > 3 + 2;
cout<<"\tHasil B - 2 > 3 + 2  : "<<a2<<endl;
a3=B + 2 <= 6 + 2;
cout<<"\tHasil B + 2 <= 6 + 2 : "<<a3<<endl;
hsla=a1&&a2||a3;
cout<<"\tHasil a1 && a2 || a3 : "<<hsla<<endl;
cout<<endl;
cout<<"==============================================="<<endl;
cout<<endl;
//No1 B
cout<<"\t\tPOIN B"<<endl;
b1=K + 5 < M;
cout<<"\tHasil K + 5 < M      : "<<b1<<endl;
b2=C * M < L;
cout<<"\tHasil C * M < L      : "<<b2<<endl;
b3=2 * M - L > 0;
cout<<"\tHasil M - L > 0      : "<<b3<<endl;
hslb=b1||b2&&b3;
cout<<"\tHasil b1 || b2 && b3 : "<<hslb<<endl;
cout<<endl;
cout<<"==============================================="<<endl;
cout<<endl;
//No1 C
cout<<"\t\tPOIN C"<<endl;
c1=L + 5 < M;
cout<<"\tHasil L + 5 < M      : "<<c1<<endl;
c2=C * K < L;
cout<<"\tHasil C * K < L      : "<<c2<<endl;
c3=2 * K - L > 0;
cout<<"\tHasil K - L > 0      : "<<c3<<endl;
hslc=c1||c2&&c3;
cout<<"\tHasil c1 || c2 && c3 : "<<hslc<<endl;
cout<<endl;
cout<<"==============================================="<<endl;
cout<<endl;
//No1 D
cout<<"\t\tPOIN D"<<endl;
hsld=A * 4 <= 3 * M + B;
cout<<"\tHasil A*4 <= 3*M+B  : "<<hsld<<endl;
cout<<endl;
cout<<"==============================================="<<endl;
cout<<endl;
//No1 E
cout<<"\t\tPOIN E"<<endl;
e1=K + 10 > A;
cout<<"\tHasil K + 10 > A    : "<<e1<<endl;
e2= L - 2 > 4 * C;
cout<<"\tHasil  L–2 > 4*C    : "<<e2<<endl;
hsle=e1&&e2;
cout<<"\tHasil e1 && e2      : "<<hsle<<endl;
cout<<endl;
cout<<"==============================================="<<endl;
cout<<endl;
cout<<"\t    M I S I  S E L E S A I"<<endl;
cout<<endl;
cout<<"==============================================="<<endl;
getch();
}