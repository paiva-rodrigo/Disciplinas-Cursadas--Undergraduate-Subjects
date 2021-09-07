#include<iostream>
 using namespace std;
 int main(){
 	int rjpvet[10],rjp,rj=0;

 	for(int r=0;r<10;r++){
 		cout<<"Digite o "<<r+1<<"o numero:";
 		cin>>rjpvet[r];
	 }
	cout<<"\n\nDigite um numero que voce acha ser um dos antes digitados:\n";
	cin>>rjp;
     for(int r=0;r<10;r++){
		if(rjp==rjpvet[r]){
			cout<<"\nO numero foi o "<<r+1<<" a ser digitado";
			cout<<" e o seu valor e de:"<<rjp;
			}
        else{
            rj+=1;
        }
    }
    if(rj==10){
        cout<<"Esse numero nao foi digitado anteriormente!";
    }

	 return 0;
 }
