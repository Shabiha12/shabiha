#include<iostream>
using namespace std;
main(){ 
cout << "Number of square meters you can paint: ";
int paint;
cin >> paint;
cout << "width of the single wall (in meters):  ";
int wall;
cin >> wall;
cout << "Height of the single wall(in meters):  ";
int height;
cin >> height;
int output;
output = paint / (wall * height);
cout <<"Number of walls you can paint:"<<output;
}

