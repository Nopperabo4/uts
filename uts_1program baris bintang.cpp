#include <iostream>

using namespace std;

int main(){
int baris,i,j,k;

  cout << "Masukkan jumlah baris bintang: ";
  cin >> baris;

  cout << endl;

  for(i=1; i<=baris; i++){
  for(k=1; k<=i; k++) {
    cout << " *";
}
    cout << endl;
}

  return 0;
}