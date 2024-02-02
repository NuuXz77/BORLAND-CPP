#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#define phi 3.14

 
float luas(float r){
  float l = phi * (r * r);
  return l;
}

float kell(float r){
  float k = 2 * phi * r;
  return k;
}

void tampilL(float r){
 float L = luas(r);
  cout<<"\n\tHitung Luas\n";
  cout<<"L \t= phi * r * r\n";
  cout<<"L \t= "<<phi<<" *("<<r<<" * "<<r<<")\n";
  cout<<"L \t= "<<L<<endl;
}

void tampilK(float r){
 float K = kell(r);
  cout<<"\n\tHitung Keliling\n";
  cout<<"K \t= 2 * phi * r\n";
  cout<<"K \t= 2 * "<<phi<<" * "<<r<<"\n";
  cout<<"K \t= "<<K<<endl;
}
