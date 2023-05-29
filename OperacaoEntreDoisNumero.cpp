#include <iostream>

using namespace std;

//PROTOTIPO DAS FUNÇOES
float soma (float num, float num2);
float sub (float num, float num2);
float multi (float num, float num2);
float div (float num, float num2);


int main (){

    float n1, n2;

    cout<<"\nEntre com o primero numero: ";
    cin>>n1;
    cout<<"\nEntre com o segundo numero: ";
    cin >>n2;

    //PEGANDO OS VALORES QUE O USUARIO DIGITOU E SALVANDO
    //NAS VARIAVEIS SOMA, SUB,DIV,MULTI
    //QUE SERA ENVIADA PARA OS RETURN
    cout<<"\n***Resultado das Operacoes***\n";
    cout<< n1 <<" e "<< n2 <<"\n";
    cout<<"Soma: "<<soma(n1, n2)<<"\n";
    cout<<"Subtracao: "<<sub(n1, n2)<<"\n";
    cout<<"Multiplicacao: "<<multi(n1, n2)<<"\n";
    cout<<"Divisao: "<<div(n1, n2)<<"\n";

    return 0;
}

float soma(float num, float num2)
{
    return num + num2;
}

float sub(float num, float num2)
{
    return num - num2;
}

float multi(float num, float num2)
{
    return num * num2;
}

float div(float num, float num2)
{
   return num / num2;
}
