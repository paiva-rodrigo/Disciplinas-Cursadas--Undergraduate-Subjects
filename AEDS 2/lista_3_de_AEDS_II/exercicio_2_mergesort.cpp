#include<iostream>
#include<fstream>
using namespace std;
void intercala(int p, int q, int r, long v[]){
    int i, j, k;
    long *w;
    w=new long[r-p];
    i=p; j=q; k=0;
    while (i<q && j<r){
        if (v[i]<=v[j]) w[k++]=v[i++];
        else w[k++]=v[j++];
    }
    while (i<q) w[k++]=v[i++];
    while (j<r) w[k++]=v[j++];
    for (i=p; i<r; i++) v[i]=w[i-p];
}
void mergesort(int p, int r, long v[]){
    if (p<r-1){
        int q=(p+r)/2;
        mergesort (p,q,v);
        mergesort (q,r,v);
        intercala (p,q,r,v);
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
    mergesort(0, t, vet);
    for (int i=0; i<t; i++){
        cout << " " << vet[i];
    }
}
