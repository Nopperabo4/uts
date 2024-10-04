#include <iostream>
using namespace std;

int main(){
    float berat, tinggi, imt;
    cout << "Masukkan berat badan Anda (dalam kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan Anda (dalam meter): ";
    cin >> tinggi;

    imt = berat / (tinggi * tinggi);

    cout << "\nIndeks Massa Tubuh (IMT) Anda adalah: " << imt << endl;

    if (imt < 18.4){
        cout << "Berat badan kurang" << endl;
    } else if (imt >= 18.5 && imt < 24.9){
        cout << "Berat badan ideal." << endl;
    } else if (imt >= 25 && imt < 29.9){
        cout << "Berat badan lebih." << endl;
    } else if (imt >= 30){
        cout << "Berat badan gemuk." << endl;
    } else{
        cout << "Berat badan sangat gemuk." <<endl;
    }
return 0;
}