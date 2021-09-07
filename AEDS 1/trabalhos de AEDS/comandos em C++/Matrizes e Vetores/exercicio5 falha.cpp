#include<iostream>
using namespace std;
 int main(){

 	int rjp[10],rj1,rjrj=0;
     cout<<"Para colocar um determinado vetor em ordem decrescente:\n";
        for(int r=0;r<10;r++){
            cout<<"Digite o "<<r+1<<" numero do vetor\n";
            cin>>rjp[r];
        }
 	cout<<endl<<"O vetor digitado foi:\n";
        for(int r=0;r<10;r++){
            cout<<rjp[r]<<" ";
        }                 
        for(int r=0;r<10;r++){
             for(int j=r;j<10;j++){
               if(rjp[r]<rjp[j]){
                 rj1=rjp[r];
                 rjp[r]=rjp[j];
                 rjp[j]=rj1;
                 rjrj+=1;
               }
             }
        }
    cout<<endl<<"O vetor em ordem decrescente e:\n";
        for(int r=0;r<10;r++){
            cout<<rjp[r]<<" ";
        }
    cout<<"\nForam gastas "<<rjrj<<" inversoes para colocar o vetor original em ordem!";


return 0;
}
