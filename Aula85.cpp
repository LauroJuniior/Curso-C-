#include <iostream>

using namespace std;

//prototipo da função
bool isPar(int num);


int main (){
    
    int numero;

    cout<<"Digite um numero inteiro: ";
    cin>> numero;
    //se o retorno da função for true que a condição do if sera verdadeira e entra no texto par
    
    if(isPar(numero))
    {
        cout<<"Numero: "<< numero <<" PAR\n";

    }
    else if(isPar(numero))
    {
        cout<<"Numero: "<< numero <<" Inpar\n";
    }
    return 0;
}

bool isPar(int num){
    //se o resto da divisao de um numero e igual a zero ele e par
    //retorn true se nao ele e impar return false.
    if(num % 2 == 0)
    {
       return true;
    }
    else
        return false;

}