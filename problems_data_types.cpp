/*
 * problem#1.cpp
 *
 *  Created on: Jan 30, 2024
 *      Author: alyah
 */



#include <iostream>
using namespace std;
int main() {
// problem#1
int x,y;
cout<<"please enter two numbers ";
cin>>x>>y;
cout<<x<<"+"<<y<<"="<<x+y<<"\n";
cout<<x<<"-"<<y<<"="<<(x)-(y)<<"\n";
cout<<x<<"/"<<y<<"="<<x/y<<"\n";
cout<<x<<"*"<<y<<"="<<x*y<<"\n";

//problem#2

cout<<"what is student 1 name\n";
string name1;
cin>>name1;
cout<<"their id\n";
int id1;
cin>>id1;
cout<<"their math exam grade\n";
float grade1;
cin>>grade1;
cout<<"what is student 2 name\n";
string name2;
cin>>name2;
cout<<"their id\n";
int id2;
cin>>id2;
cout<<"their math exam grade\n";
float grade2;
cin>>grade2;
cout<<"students grade in math\n"<<name1<<"( with id "<<id1<<")"<<"got grade:"<<grade1<<"\n"<<
name2<<"( with id "<<id2<<")"<<"got grade:"<<grade2<<"\n"<<"total average grades is "<<(grade1+grade2)/2;

//problem#3

int num1,num2,num3,num4,num5,num6,num7,num8;
cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8;
cout<<num2+num4+num6+num8<<" "<<num1+num3+num5+num7;
// problem#4

	int num_1,num_2;
	cin>>num_1>>num_2;
	int num_3 = num_1;
	num_1=num_2;
	num_2=num_3;
	cout<<num_1<<num_2;
return 0;
}
