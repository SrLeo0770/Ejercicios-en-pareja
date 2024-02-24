#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
   /* int numero;
    cout << "INGRESE UN NUMERO Y LE DIRE SI ES PAR O IMPAR: " << endl;
    cin >> numero;


    if (numero%2 ==0){
        cout<<numero<<" ES UN NUMERO PAR"<<endl;
    }else {
        cout<<numero<<" ES UN NUMERO IMPAR"<<endl;
    }

*/

    int numero;
    int i;
    cout<<"INGRESE UN NUMERO: "<<endl;
    cin>>numero;
    do {
        for (i=1; i<=numero; i++){
            cout<<i<<endl;
        }




    }while (i ==numero);

    return 0;
}
