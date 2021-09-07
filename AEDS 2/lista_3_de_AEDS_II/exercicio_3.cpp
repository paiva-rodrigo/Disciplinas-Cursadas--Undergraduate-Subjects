#include<iostream>
#include<fstream>
using namespace std;
void insercao(int n, string v[]){
	int i, j;
	string temp;
		for (j=1; j<n; j++){
		temp = v[j];
			for(i=j-1; i >=0 && v[i]>temp; i--){
			  v[i+1] = v[i];
			}
		v[i+1] = temp;
		}
}
int main(){
	ifstream leia("nomesaleatorios.txt");
    string le;
    int t=0;
	    while(getline(leia,le)){
	    	t++;
		}
    string vet[t];
    int r=0;
    ifstream l("nomesaleatorios.txt");
    string e;
	    while(getline(l,e)){
	    	vet[r]=e;
	    	r++;
	    	if(r>=t){
	    		break;
			}
		}
    insercao(t, vet);
	    for (int i=0; i<t; i++){
	        cout << "\n" << vet[i];
	    }
}
