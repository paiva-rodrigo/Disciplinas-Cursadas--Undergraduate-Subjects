#include <iostream>
using namespace std;
int main() {
	int rjp,rjp1;
	
	cout<<"Qual a idade desse trabalhador?"<<endl;
	cin>>rjp;
	cout<<"Ha quantos anos ele trabalha na empresa?"<<endl;
	cin>>rjp1;
	if(rjp1>=65||rjp-rjp1>=30||rjp>=60&&rjp1>=25){
		cout<<"\nesse trabalhador pode se aposentar!!";
	}
	else{
		cout<<"\nesse trabalhador nao pode se aposentar!!";
	}
	
	return 0;
}
