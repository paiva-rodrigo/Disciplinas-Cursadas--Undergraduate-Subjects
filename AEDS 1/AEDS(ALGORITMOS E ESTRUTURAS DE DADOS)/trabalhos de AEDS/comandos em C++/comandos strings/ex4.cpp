#include <iostream>
#include<stdio.h>
#include <string.h>
using namespace std;
int main(){
	char rjan1[50],rjan2[50];

    cout<<"Oi, voce e a primeira pessoa a entrar no jogo :)"\
    "\nDiga o nome de um animal para o proximo participante tentar acertar:\n";
    cin.getline(rjan1,50);
    cout<<"Uma pessoa digitou,anteriromente, um nome e de animal";
	cout<<"\nQual animal voce acha que e?\n";
	cin.getline(rjan2,50);
	while(strcmp(rjan1, rjan2) !=0){
		cout<<"ops! nao foi esse o animal digitado!";
    	cout<<"\ntente outra vez:\n";
    	cin.getline(rjan2,50);

	}
	cout<<"\nParabens, esse e o animal digitado anteriormente!";

 return 0;
}
