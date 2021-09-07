#include<iostream>
 using namespace std;
  int main(){
   int rjp1[2][2],rjp2[2][2],rjp3[2][2],rjrj;
   char op;
   cout<<"Digite abaixo os numeros de duas matrises 2 por 2:\n";
   for(int r=0;r<2;r++){
  	   for(int j=0;j<2;j++){
  		cout<<"Digite o valor("<<r+1<<","<<j+1<<") da 1a matriz: ";
  		cin>>rjp1[r][j];
	  }
    }
    cout<<endl;
    for(int r=0;r<2;r++){
  	   for(int j=0;j<2;j++){
  		cout<<"Digite o valor("<<r+1<<","<<j+1<<") da 2a matriz: ";
  		cin>>rjp2[r][j];
	  }
    }
     while(op!='d'){
        cout<<"\nEscolha uma opcao:\na)Somar as duas matrizes\nb)Adicionar uma constante as matrizes";
        cout<<"\nc)Imprimir matrizes\nd)Sair\n";
        cin>>op;
            if(op=='a'){
    		  for(int r=0;r<2;r++){
  	  		   for(int j=0;j<2;j++){
  	            rjp3[r][j]=rjp2[r][j]+rjp1[r][j];
	           }
              }
            }
            else if(op=='b'){
                cout<<"Digite a constante pela qual as matrizes serao multiplicadas:\n";
                cin>>rjrj;
               for(int r=0;r<2;r++){
  	  		     for(int j=0;j<2;j++){
                    rjp1[r][j]=rjp1[r][j]*rjrj;
                    rjp2[r][j]=rjp2[r][j]*rjrj;
                    rjp3[r][j]=rjp3[r][j]*rjrj;
  	  		     }
               }
            }
            else if(op=='c'){
                cout<<"1a matriz:  ";
               for(int r=0;r<2;r++){
    		    cout<<endl;
  	  		     for(int j=0;j<2;j++){
  	            cout<<rjp1[r][j]<<" ";
  	  		     }
               }
                cout<<"\n2a matriz: ";
                 for(int r=0;r<2;r++){
    		    cout<<endl;
  	  		     for(int j=0;j<2;j++){
  	            cout<<rjp2[r][j]<<" ";
  	  		     }
               }
                cout<<"\n3a matriz: (Resultado da soma das anteriores) ";
               for(int r=0;r<2;r++){
    		    cout<<endl;
  	  		     for(int j=0;j<2;j++){
  	            cout<<rjp3[r][j]<<" ";
  	  		     }
               }
            }
            else{
                cout<<"\nEssa alternativa nao existe!\n";
            }
        }

  return 0;
}
