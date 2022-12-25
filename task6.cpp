#include <iostream>
using namespace std;
main()
{


string name ;
float intermediate;
float intermediateper;
float intermediatewei;
float matric;
float matricper;
float matricwei;
float ecat;
float ecatper;
float ecatwei;
float total;


cout << "Enter the name:" ;
cin >> name;

cout << " Enter the intermediate marks: ";
cin >> intermediate;

cout << " Enter the matric marks: ";
cin >> matric;

cout << " Enter the ecat marks: ";
cin >> ecat;


intermediateper = intermediate/550*100;
matricper = matric/1100*100;
ecatper = ecat/400*100;


intermediatewei = intermediateper/100*40;
matricwei = matricper/100*10;
ecatwei = ecatper/100*50;

total = intermediatewei + matricwei + ecatwei;
cout << "Aggregate:" << total <<endl;
}