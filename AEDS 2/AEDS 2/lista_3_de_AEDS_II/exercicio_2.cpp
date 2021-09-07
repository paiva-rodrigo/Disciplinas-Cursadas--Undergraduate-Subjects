#include<iostream>
#include<time.h>
using namespace std;
void insercao(int n, int v[]){
int i, j, temp;
for (j=1; j<n; j++){
temp = v[j];
for(i=j-1; i >=0 && v[i]>temp; i--){
v[i+1] = v[i];
}
v[i+1] = temp;
}
}
int main(){
	int vet[]={1,2,3,4,5,6,7};
	int n;
	cout<<"Digite um numero: ";
	cin>>n;
	insercao(n,vet);
}
