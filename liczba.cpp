#include<iostream>
#include<cmath>
using namespace std;

bool czy_bezkwadratowa(int liczba){
    int sliczba = sqrt(liczba);
    for(int i=2;i<=sliczba;i++){
        if((liczba % (int)pow(i, 2)) == 0) return false;
    }

    return true;
}
void czy_ujemna(int liczba){
    if(liczba <= 0){
        cout << "Podana liczba nie jest naturalna, koncze dzialanie...";
        abort();
    }
}

int main(){
    int n;
    cin >> n;
    czy_ujemna(n);
    cout << n << endl;
    if(czy_bezkwadratowa(n)) cout << "Bezkwadratowa" << endl;
    else cout << "Nie jest bezkwadratowa" << endl;
    return 0;
}
