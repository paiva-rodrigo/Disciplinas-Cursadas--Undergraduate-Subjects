#include<iostream>
#include<fstream>
using namespace std;
int separa (int p, int r, long v[]){
    int c, j, k, t;
    c=v[r];
    j=p;
    for (k=p; k<r; k++){
        if (v[k]<=c){
            t=v[j];
            v[j]=v[k];
            v[k]=t;
            j++;
        }
    }
    v[r]=v[j];
    v[j]=c;
    return j;
}
void quicksort (int p, int r, long v[]){
    int j;
    if (p<r){
        j=separa (p, r, v);
        quicksort (p, j-1, v);
        quicksort (j+1, r, v);
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
    quicksort(0, t-1, vet);
    for (int i=0; i<t-1; i++){
        cout << " " << vet[i];
        cout << endl;
    }
}
