#include <iostream>
using namespace std;
int main() {
	int rjp;
	float rjp1;
	
	cout<<"Quantos dias esse trabalhador veio  ao trabalho?\n";
	cin>>rjp;
	cout<<"Quanto ele recebe por dia de trabalho?\n";
	cin>>rjp1;
	
	cout<<"\nA quantidade liquida recebida por esse tabalhador sera de:\n"<< rjp*rjp1*0.92;
	
	
	return 0;
}
