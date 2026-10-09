#include <iostream>
using namespace std;

int main(){

 //valiutu kursai
const double GBP_Bendras   = 0.8729;
const double GBP_Pirkti    = 0.8600;
const double GBP_Parduoti  = 0.9220;

const double USD_Bendras   = 1.1793;
const double USD_Pirkti    = 1.1460;
const double USD_Parduoti  = 1.2340;

const double INR_Bendras   = 104.6918;
const double INR_Pirkti    = 101.3862;
const double INR_Parduoti  = 107.8546;

//Pagrindinis meniu
cout << "MENIU" << endl;
cout << "1. Valiutos kurso palyginimas su euru." << endl;
cout <<"2. Valiutos pirkimas (EUR --> pasirinkta valiuta)." << endl;
cout <<"3. Valiutos pardavimas(pasirinkta valiuta --> EUR)." << endl;
cout << "4. Išeiti." << endl;

int pasirinkimas;
cout <<"Pasirinkite veiksmą: ";
cin >> pasirinkimas;

//Valiutos meniu
cout <<"Pasirinkite valiuta:" << endl;
cout <<"1 - GBP" << endl;
cout <<"2 - USD" << endl;
cout <<"3 - INR" << endl;
cout << "Jusu pasirinkimas: ";

int valiuta;
cin >> valiuta