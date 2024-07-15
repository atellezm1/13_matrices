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
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n;j++){
            if(i<j){
                s=A[i][j]+s;
            }
        }
    }
    cout<<"la sumatoria de los elementos de una matriz cuadrada que estén por encima de su diagonal principal es: "<<endl;
    cout<<s;
    
    return 0;
