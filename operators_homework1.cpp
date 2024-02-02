#include <iostream>
using namespace std;
int main() {

int num1;
cin>>num1;
int reslut= num1%10;
int x=num1/10;
int reslut2= x%10;
int x1=x/10;
int reslut3=x1%10;
cout<<reslut+reslut2+reslut3;

//problem2
int number;
cin>>number;
int number_division=number/1000;
int number_modlus=number_division%10;
cout<<number_modlus;
//








return 0;
}
