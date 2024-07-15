//Alexander Jesús Téllez mesa
#include<iostream>
using namespace std;
int main() {
    int n,s;
    s=0;
    cout<<"ingrese el orden de la matris: "<<endl;
    cin>>n;
    int A[n][n];
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n;j++){
            cout<<"el elementyo de la fila "<<i<<" columna "<<j<<" es: "<<endl;
            cin>>A[i][j];
        }
    }
    
    return 0;