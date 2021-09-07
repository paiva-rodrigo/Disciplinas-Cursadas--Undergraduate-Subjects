#include<iostream>
#include<fstream>
using namespace std;
void selecao(int n, long v[]){
    for (int a=0;a<n-1; a++){
        for(int b=a+1; b<n; b++){
            if(v[a]>v[b]){
                int aux=v[a];
                v[a]=v[b];
                v[b]=aux;
            }
        }
    }
}
void ler (long v[], int t){
    int c=0;
    ifstream fin("numeros.txt");
    int n;
    while (fin>>n){
        v[c++]=n;
    }
    fin.close();
}
int main(){
	int t;
	cout<<"Digite o tamanho do vetor de numeros aleatorios: ";
	cin>>t;
    long vet[t];
    ler (vet, t);
    selecao(t, vet);
    for (int i=0; i<t; i++){
        cout << " " << vet[i];
    }
}
