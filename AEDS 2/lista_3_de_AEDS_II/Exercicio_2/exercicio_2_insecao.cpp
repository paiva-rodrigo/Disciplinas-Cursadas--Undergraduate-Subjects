#include<iostream>
#include<fstream>
using namespace std;
void insercao(int n, long v[]){
int i, j, temp;
for (j=1; j<n; j++){
temp = v[j];
for(i=j-1; i >=0 && v[i]>temp; i--){
v[i+1] = v[i];
}
v[i+1] = temp;
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
    insercao(t, vet);
    for (int i=0; i<t; i++){
        cout << " " << vet[i];
    }
}
