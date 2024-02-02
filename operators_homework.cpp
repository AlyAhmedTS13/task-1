/*
 * operators_homework.cpp
 *
 *  Created on: Feb 2, 2024
 *      Author: alyah
 */




#include <iostream>
using namespace std;
int main() {

int nb,ng,nt;
cin>>nb>>ng>>nt;

cout<< (nb>25) <<"\n";
cout<< (ng<=30) <<"\n";
cout<< (nb > 20 && nt > 2 || ng > 30 && nt > 4) <<"\n";
cout<< (nb<60||ng<70) <<"\n";
cout<< (!(nb>=60)&&!(ng>60))<<"\n";
cout<< (nb==ng+10)<<"\n";
cout<< (nb-ng>10 || nt>5)<<"\n";
cout<< (nb==ng+10 || ng==nb+15);
//problem2
double num1,num2,num3,num4,num5;
cin>>num1>>num2>>num3>>num4>>num5;
cout<<(num1+num2+num3+num4+num5)/5<<"\n";
cout<<(num1+num2+num3)/(num4+num5)<<"\n";
cout<<((num1+num2+num3)/3) / ((num4+num5)/2);
//problem3
double a,b;
cin>>a>>b;
double result = a/b;
int final_result= (int)result;
cout<<result-final_result;
//problem4
int n,m;
cin>>n>>m;
float x=n/m;
int y=x*m;
int rel=n-y;
cout<<rel;

}
