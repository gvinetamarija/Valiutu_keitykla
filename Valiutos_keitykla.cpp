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

//Visi skaiciai bus rodomi su 2 skaitmenimis po kablelio.
cout << fixed;
cout.precision(2);
int pasirinkimas;
//Pagrindinis meniu
do{
cout << "MENIU" << endl;
cout << "1. Valiutos kurso palyginimas su euru." << endl;
cout <<"2. Valiutos pirkimas (EUR --> pasirinkta valiuta)." << endl;
cout <<"3. Valiutos pardavimas(pasirinkta valiuta --> EUR)." << endl;
cout << "4. Išeiti." << endl;




cout <<"Pasirinkite veiksmą: ";
cin >> pasirinkimas;

//Iskarto netinkamus variantus pazymiu
if (pasirinkimas ==4){
    cout << "Viso gero." << endl;
    return 0;
}
if (pasirinkimas < 1 || pasirinkimas > 4){
    cout << "Neteisingas pasirinkimmas." << endl;
    return 0;
}

//Valiutos meniu
cout <<"Pasirinkite valiuta:" << endl;
cout <<"1 - GBP" << endl;
cout <<"2 - USD" << endl;
cout <<"3 - INR" << endl;
cout << "Jusu pasirinkimas: ";

int valiuta;
cin >> valiuta;
double suma;
double rezultatas;

if(valiuta < 1 || valiuta > 3) {
    cout << "Klaida: neteisingas valiutos pasirinkimas." << endl;
    return 0;
}

// 1 Pasirinkimas is meniu su visom valiutom
if(pasirinkimas == 1){
    if(valiuta ==1){
        cout << "1 EUR = " << GBP_Bendras << "GBP" << endl;
        cout << "1 GBP = " << 1/ GBP_Bendras << "EUR" << endl;
    }
    else if(valiuta == 2){
        cout << "1 EUR = " << USD_Bendras << "USD" << endl;
        cout << "1 USD = " << 1/USD_Bendras << "EUR" << endl;
    }
    else{
        cout << "1 EUR = " << INR_Bendras << "INR" << endl;
        cout << "1 INR =" << 1 / INR_Bendras << "EUR" << endl;
    }}

    // 2 pasirinkimas - pirkimas
else if(pasirinkimas == 2) {
    cout << "Iveskite euru suma: ";
   
    cin >> suma;

    if (suma <= 0) {
        cout << "Iveskite teigiama suma." << endl;
        return 0;
    }

    if (valiuta == 1) {
        rezultatas = suma * GBP_Pirkti;
        cout << suma << "EUR = " << rezultatas <<"GBP" <<endl;
    }
    else if (valiuta ==2) {
        rezultatas = suma *USD_Pirkti;
        cout << suma << "EUR = " << rezultatas << "USD" << endl;
        }

        else{
            rezultatas = suma * INR_Pirkti;
            cout << suma << "EUR = " << rezultatas << "INR" << endl;
        }
}
    // Pardavimas
else if(pasirinkimas == 3){
    cout << "Iveskite parduodamos valiutos kieki: " ;
    cin >> suma;

    if(suma <= 0){
        cout << "Klaida, turi buti teigiamas skaicius" <<endl;
        return 0;
    }
    
    if(valiuta ==1){
        rezultatas = suma / GBP_Parduoti;
        cout << suma << "GBP = " <<rezultatas << "EUR" << endl;
    }
    else if(valiuta == 2 ){
        rezultatas = suma / USD_Parduoti;
        cout << suma << "USD = " << rezultatas <<" EUR "<< endl;
    }
    else {
        rezultatas = suma / INR_Parduoti;
        cout << suma << "INR = " << rezultatas << "EUR" << endl;
    }
}
} while(pasirinkimas !=4);
return 0;
}



