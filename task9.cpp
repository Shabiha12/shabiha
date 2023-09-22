#include<iostream>
using namespace std;
main(){
cout <<"Enter a 4-digit number: ";
int num;
cin>>num;
int num1;
num1=num%10;
int num2;
num2=num/10;
int num_2;
num_2=num2%10;
int num3;
num3=num2/10;
int num_3;
num_3=num3%10;
int num4;
num4=num3/10;
int final;
final=num1+num_2+num_3+num4;
cout<<"Sum of the individual digits:"<<final;
}


