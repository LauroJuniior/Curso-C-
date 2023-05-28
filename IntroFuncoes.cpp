#include <iostream>

using namespace std;

int soma (int num, int numSoma){

    int soma;
    soma = num + numSoma;
    
    return soma;
}

int main (){

    int num, numSoma;
    cout<<"\nDigite um numero: ";
    cin >> num;

    cout<<"Digite o numero a ser somado: ";
    cin >> numSoma;

    cout<<"\nA soma deste numero "<< num <<" com o numero "<<numSoma<<" Sera: "<<soma (num, numSoma)<<"\n";

    return 0;
}