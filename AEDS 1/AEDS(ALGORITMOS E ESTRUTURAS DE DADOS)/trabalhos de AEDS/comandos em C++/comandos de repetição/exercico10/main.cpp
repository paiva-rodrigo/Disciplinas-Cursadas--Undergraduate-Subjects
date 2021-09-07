#include <iostream>

using namespace std;

int main()
{
   int rjp;

    cout<<"Para saber a quantia minima de notas do valor que quer sacar:\n\n";
    cout<<"Digite o valor que deseje sacar:\n" << endl;
    cin>>rjp;
     cout<<"\nA menor quantia de cedulas sera:\n";
     cout<<rjp/100<<" Notas de 100 Reais\n";
     cout<<(rjp%100)/50<<" Notas de 50 Reais\n";
     cout<<(rjp%50)/20<<" Notas de 20 Reais\n";
     cout<<(rjp%20)/10<<" Notas de 10 Reais\n";
     cout<<(rjp%10)/5<<" Notas de 5 Reais\n";
     cout<<(rjp%5)/2<<" Notas de 2 Reais\n";
     cout<<(rjp%2)/1<<" Notas de 1 Real\n";

    return 0;
}
