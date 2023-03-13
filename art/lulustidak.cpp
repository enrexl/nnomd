#include <iostream>
using namespace std;

double rerata (double a, double b){
    return (a + b)  / 2;
}

string status1 (double d)
{
if (d >= 60)
        return "Lulus";
else    
        return "Tidak lulus";
}

string status2 (double r, double m){
if (r >= 60 && m >= 70)
        return "Lulus";
else    
        return "Tidak lulus";
}

int main (){

    double nilM, nilB;
    cout<< "masukkan nilai Matematika = ";
    cin>>nilM;
    cout<< "masukkan nilai Bahasa = ";
    cin>>nilB;

    cout<< "Status Kelulusan Pertama adalah " << status1(rerata(nilM,nilB))<< endl;
    cout<< "Status Kelulusan Kedua adalah " <<status2(rerata(nilM,nilB),nilM);


}