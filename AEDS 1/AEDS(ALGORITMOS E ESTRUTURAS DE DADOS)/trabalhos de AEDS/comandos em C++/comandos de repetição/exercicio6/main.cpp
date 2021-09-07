#include <iostream>

using namespace std;

int main()
{
    float rjp1,rjp11,rjp2,rjp22,rjrj1,rjrj2;

    cout << "Abaixo, informe os dados de duas pessoas,a fim de saber as suas classifiacoes quanto a IDH e ao que podem estar sujeitas por causa desse\n" << endl;
    cout<<"Digite o peso da primeira pessoa em kg:\n";
    cin>>rjp1;
    cout<<"Digite a altura da primeira pessoa em metros:\n";
    cin>>rjp11;
    cout<<"Digite o peso da segunda pessoa em kg:\n";
    cin>>rjp2;
    cout<<"Digite a altura da segunda pessoa em metros:\n";
    cin>>rjp22;
    rjrj1=(rjp1)/(rjp11*rjp11);
    rjrj2=(rjp2)/(rjp22*rjp22);
        if(rjrj1>16 && rjrj1<=16.9){
            cout<<"\nA primira pessoa esta muito abaixo do peso";
            cout<<"\nA primeira pessoa tera queda de cabelo,infertilidade e ausencia menstrual";
        }
        else if(rjrj1>=17 && rjrj1<=18.4){
            cout<<"\nA segunda pessoa esta abaixo do peso";
            cout<<"\nA primeira pessoa tera fadiga,stress e ansiedade";
        }
        else if(rjrj1>=18.5 && rjrj1<=22.9){
            cout<<"\nA primira pessoa esta no peso normal";
            cout<<"\nA primeira pessoa tera menor risco de ter doencas cardiovasculares";
        }
        else if(rjrj1>=25 && rjrj1<=29.9){
            cout<<"\nA primira pessoa esta acima do peso";
            cout<<"\nA primeira pessoa tera fadiga,ma circulacao e varizes";
        }
        else if(rjrj1>=30 && rjrj1<=34.9){
            cout<<"\nA primira pessoa esta com obesidade 1";
            cout<<"\nA primeira pessoa tera diabetes,angina,infarto e ateroscirose";
        }
        else if(rjrj1>=35 && rjrj1<=40){
            cout<<"\nA primira pessoa esta com obesidade 2";
            cout<<"\nA primeira pessoa tera apneia do sono e falta de ar";
        }
        else if(rjrj1>=40){
            cout<<"\nA primira pessoa esta com obesidade 3";
            cout<<"\nA primeira pessoa tera refluxo,dificuldade para se mover,escaras,AVC e infarto";
        }
        if(rjrj2>16 && rjrj2<=16.9){
            cout<<"\nA segunda pessoa esta muito abaixo do peso";
            cout<<"\nA segunda pessoa tera queda de cabelo,infertilidade e ausencia menstrual";
        }
        else if(rjrj2>=17 && rjrj2<=18.4){
            cout<<"\nA segunda pessoa esta abaixo do peso";
            cout<<"\nA segunda pessoa tera fadiga,stress e ansiedade";
        }
        else if(rjrj2>=18.5 && rjrj2<=22.9){
            cout<<"\nA segunda pessoa esta no peso normal";
            cout<<"\nA segunda pessoa tera menor risco de ter doencas cardiovasculares";
        }
        else if(rjrj2>=25 && rjrj2<=29.9){
            cout<<"\nA segunda pessoa esta acima do peso";
            cout<<"\nA segunda pessoa tera fadiga,ma circulacao e varizes";
        }
        else if(rjrj2>=30 && rjrj2<=34.9){
            cout<<"\nA segunda pessoa esta com obesidade 1";
            cout<<"\nA segunda pessoa tera diabetes,angina,infarto e ateroscirose";
        }
        else if(rjrj2>=35 && rjrj2<=40){
            cout<<"\nA segunda pessoa esta com obesidade 2";
            cout<<"\nA segunda pessoa tera apneia do sono e falta de ar";
        }
        else if(rjrj2>=40){
            cout<<"\nA segunda pessoa esta com obesidade 3";
            cout<<"\nA segunda pessoa tera refluxo,dificuldade para se mover,escaras,AVC e infarto";
        }

    return 0;
}
