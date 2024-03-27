#include <bits/stdc++.h>


using namespace std;

int main(){

//inicializa a variavel n
 int n;
//solicita ao usuario que insira um numero
cout << "Digite um numero: " << endl;
//pega a entrada do usuario
cin >> n;
//Inicializa duas variaveis (a e b) com os valores iniciais da sequencia de Fibonacci (0 e 1, respectivamente).
    int a = 0;
    int b = 1;
//inicia um laço de repeticao que continua ate que b seja maior ou igual ao numero inserido pelo usuario.
    for (int i = 0; b < n; i++) {
//A variavel 'temp' armazena o valor antigo de b antes de atualizar.
        int temp = b;
//A cada iteracao atualiza a e b para serem os proximos dois numeros na sequencia de Fibonacci.
        b = a + b;
        a = temp;
    }
//Condicional que valida que se, em qualquer ponto, b for igual a n, o for para e informa ao usuario que o numero pertence a sequencia de Fibonacci.
    if (b == n){

        cout << "Pertence a sequencia de Fibonacci." << endl;
    //Caso contrario, informa ao usuario que o numero nao pertence a sequencia de Fibonacci.
    }else{

        cout << "Nao pertence a sequencia de Fibonacci." << endl;
    }

    return 0;
}

