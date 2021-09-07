#include<iostream>
using namespace std;
 int main(){

 	int rjp[3][3],rj1=0,rj2=0,rj3=0,rjvet[3];
    cout<<"Para saber o valor das somas das colunas de uma matriz 3 por 3:\n";
 	for(int r=0;r<3;r++){
 	   for(int j=0;j<3;j++){
 		cout<<"Digite o numero ("<<r+1<<","<<j+1<< ")"<<" da matriz:"<<endl;
 		cin>>rjp[r][j];
 	   }
    }

 	   for(int j=0;j<3;j++){
 	   	rjvet[j]=rjp[0][j]+rjp[1][j]+rjp[2][j];
       }

    cout<<"Os valores das somas das colunas sao,respectivamente:\n";
	for(int r=0;r<3;r++){
	  cout<<" "<<rjvet[r];

	}
	  return 0;
}
