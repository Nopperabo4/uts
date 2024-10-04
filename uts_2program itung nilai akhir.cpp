#include <iostream>
using namespace std;

int main(){
    char nilai;

    cout << "Nama : Muhammad Alfiansyah Suardi"<<endl;
    cout << "NPM : 2410631170085"<<endl;
    cout<<endl;
    cout << "============================="<<endl<<endl;

    float nilai_absen, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    
    cout<<"Masukkan nilai absen: ";
    cin>>nilai_absen;
    cout<<"Masukkan nilai tugas: ";
    cin>>nilai_tugas;
    cout<<"Masukkan nilai uts: ";
    cin>>nilai_uts;
    cout<<"Masukkan nilai uas: ";
    cin>>nilai_uas;
    cout<<endl;

    nilai_akhir = (nilai_absen*10/100)+(nilai_tugas*20/100)+(nilai_uts*30/100)+(nilai_uas*40/100);

    if(nilai_akhir>85){
        nilai='A';
    }
    else if(nilai_akhir<=85 && nilai_akhir>80){
        nilai='B';
    }
    else if(nilai_akhir<=80 && nilai_akhir>75){
        nilai='C';
    }
    else if(nilai_akhir<=75 && nilai_akhir>70){
        nilai='D';
    }
    else{
        nilai='E';
    }
    cout <<" ----------------------------" << endl << endl;

    cout << "Nilai Akhir Anda = " <<nilai_akhir<< endl;
    cout << "Nilai Huruf Anda = "<<nilai<<endl;
    cout << endl;

return 0;
}