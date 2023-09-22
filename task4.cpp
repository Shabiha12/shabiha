#include<iostream>
using namespace std;
main(){
cout << "Enter imposter count: ";
int imposter;
cin >> imposter;
cout << "Enter player count: ";
int player;
cin >> player;
int chance;
chance = 100 * imposter/player;
cout << "chance of being an imposter" << chance<<"%";
} 