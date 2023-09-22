#include<iostream>
using namespace std;
main(){
cout << "Enter the number of minutes" ;
int minutes;
cin >> minutes;
cout << "Enter the frames per second" ;
int seconds;
cin >> seconds;
int total_number;
total_number = minutes * 60 * seconds;
cout << " total_number is " <<total_number ;
} 