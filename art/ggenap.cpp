#include <iostream>
using namespace std;

int main (){
 //begin
 // numeric bil
 int bil;
 // char status
 string status;
 //disp "masukkan bilangan ="
 cout<< "masukkan bilangan = ";
 //accept bilangan
 cin>>bil;
 //if (bil==0)
 if (bil==0)
    status = "nol";
 else if (bil %2 == 0)
    status = "genap";
 else 
    status = "ganjil";

    cout<< "bilangannya merupakan bilangan "<< status;
}