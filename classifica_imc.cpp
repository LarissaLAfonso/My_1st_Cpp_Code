#include <stdio.h>
#include <cmath>

/**
 * Recebe 
*/
int classificaIMC(int massa, float altura){
    float imc = massa / pow(altura, 2);

    if (imc < 17){
        printf("Você está bem abaixo do peso! Aceita um milkshake?");
    }
    else if (imc < 18.5){
        printf("Você está abaixo do peso. Topa almoçar uma pizza?");
    }
    else if (imc < 25){
        printf("Você está com o peso normal. Continue assim!");
    }
    else if (imc < 30){
        printf("Você está acima do peso. Vamos andar de bicleta na praia?");
    }
    else if (imc < 35){
        printf("Você está obeso. Vamos tentar comer um pouco menos de doces.");
    }
    else if (imc < 40){
        printf("Você está com obesidade severa. Vamos marcar uma nutricionista");
    }
    else {
        printf("Você está com obesidade mórbida. Isso é perigoso!");
    }

    return 0;
}

int main(){
    classificaIMC(56, 1.6);

    return 0;
}
