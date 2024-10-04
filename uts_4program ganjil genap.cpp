#include <iostream>
using namespace std;

void Ganjil() {
    cout << "Bilangan ganjil :" << endl;
    for (int i = 1; i < 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

void Genap() {
    cout << "Bilangan genap :" << endl;
    int i = 0;
    while (i < 10) {
        cout << i << " ";
        i += 2;
    }
    cout << endl;
}

int main(){
    Ganjil();
    Genap();

    return 0;
}