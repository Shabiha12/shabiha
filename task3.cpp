#include<iostream>
using namespace std;
main(){
cout << "Enter the initial_velocity (m/s): ";
int velocity;
cin >> velocity;
cout << "Enter the acceleration (m/s^2): ";
int acceleration;
cin >> acceleration;
cout << " Enter the time: ";
int time;
cin >> time; 
int final_velocity;
final_velocity = acceleration * time - velocity;
cout << "final velocity is "<< final_velocity;
}