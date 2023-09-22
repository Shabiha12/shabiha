#include<iostream>
using namespace std;
main(){ 
cout << "Enter the size of the fertilizer bag in pounds: ";
int bags;
cin >> bags;
cout << "Enter the cost of the bag: ";
int price;
cin >> price;
cout << "Enter the area in square feet that can be covered by the bag: ";
int feet;
cin >> feet;
int output;
output = price / bags;
int square;
square = bags / feet;
cout << "output"<<output<<"$" <<endl;
cout << "square"<<square<<"$";
}