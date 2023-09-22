#include<iostream>
using namespace std;
main(){
cout << "Enter the adult ticket price: ";
int adult;
cin >> adult;
cout << "Enter the child ticket price: ";
int child;
cin >> child;
cout << "Enter the number of adult tickets sold: ";
int tickets;
cin>> tickets;
cout << "Enter the number of child tickets sold: ";
int sold;
cin >> sold;
cout << "Enter the percentage of the amount to be donated to charity: ";
int charity;
cin >> charity;
int output;
output = (adult * tickets) + (child * sold);
cout << "output"<<output<<endl;
int charity1;
charity1= output * 0.1;
cout<<"charity1"<<charity1<<endl;
int remaining;
remaining=output-charity1;
cout<<"remaining"<<remaining;
}

