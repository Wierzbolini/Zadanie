#include<iostream>
using namespace std;

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
    return 0;
}
