#include<iostream>
using namespace std;
 int main(){

 	int rjp1[5],rjp2[5],rjp3[5];
        cout<<"Digte os valores de dois vetores com 5 numeros:\n";
 	     for(int r=0;r<5;r++){
		 	cout<<"Digite o valor do "<<r+1<<" numero da 1o vetor:\n";
		 	cin>>rjp1[r];
		 	cout<<"Digite o valor do "<<r+1<<" numero da 2o vetor:\n";
		 	cin>>rjp2[r];
         }
         for(int r=0;r<5;r++){
		 	rjp3[r]=(rjp1[r])*(rjp2[r]);
         }
        cout<<"O vetor resultante da multiplicacao dos ";
        cout<<"numeros dos dois vetores e:\n";
         for(int r=0;r<5;r++){
		 	cout<<rjp3[r]<<endl;
        }
    return 0;
}
