#include<iostream>
using namespace std;
 int main(){

 	int rjp1[8],rjp2[8],rjp3[8];
         cout<<"Preencha um vetor com 8 numeros:\n";
 	     for(int r=0;r<8;r++){
		 	cout<<"Digite o valor do "<<r+1<<"o numero do vetor:\n";
		 	cin>>rjp1[r];
         }
         for(int r=0;r<8;r++){
           if(rjp1[r]%2==0){
		 	rjp2[r]=rjp1[r];
           }
           else{
            rjp3[r]=rjp1[r];
           }
         }
         cout<<"\nOs vetor com os numeros impares do anterior  e:\n";
            for(int r=0;r<8;r++){
             if(rjp2[r]==rjp1[r]){
                cout<<"  ";
             }
             else{
              cout<<rjp3[r]<<" ";

              }
          }
           cout<<"\nOs vetor com os numeros pares do anterior e:\n";
            for(int r=0;r<8;r++){
             if(rjp3[r]==rjp1[r]){
                cout<<"  ";
             }
             else{
              cout<<rjp2[r]<<" ";

              }
          }

         return 0;
}
