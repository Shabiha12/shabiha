#include<iostream>
using namespace std;
main(){
cout << "Enter vegetable price per kilogram (in coins): ";
float vegetable;
cin >> vegetable;
cout << "Enter fruit price per kilogram (in coins): ";
float fruit;
cin >> fruit;
cout << "Enter total kilograms of vegetables: ";
float tvegetable;
cin >> tvegetable;
cout << "Enter total kilograms of fruits: ";
float tfruit;
cin >> tfruit;
int output;
output = (vegetable * tvegetable)*(1/1.94);
int output1;
output1 = (fruit * tfruit)*(1/1.94);
int output2;
output2 =output + output1; 
cout <<"total earning in rupees "<< output2<<" Rps";
}