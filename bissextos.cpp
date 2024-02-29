#include <stdio.h>
#include <cmath>
#include <string>
#include <iostream>

/**
 * Determina se o input representa
 * ou não um ano bissexto.
 * 
 * @param ano ano inputado pelo usuário 
 * @return 0
*/
int bissexto(int ano){
    if (ano % 400 == 0){
    printf("O ano %d é bissexto.", ano);
    }
    else if (ano % 100 == 0){
        printf("O ano %d não é bissexto.", ano);
    }
    else if (ano % 4 == 0){
        printf("O ano %d é bissexto.", ano);
    }
    else{
        printf("O ano %d não é bissexto", ano);
    }
    return 0;
}


/**
 * Determina se: (1) é vazia,
 * (2) representa um número negativo ou
 * (3) contém algum caractere não numérico. 
 * 
 * @param resposta input do usuário
 * @return 0 ou 1
*/
int checarInput(std::string resposta){
    int counter = 0;

    //Checa se o usuário não está escrevendo nada.
    if (resposta.size() == 0){
        std::cout << "Você não digitou nada."
                    "Assim eu não tenho nem como começar a pensar em anos bissextos.\n";
        return 0;
    //Checa se o primeiro elemento da string é um sinal de menos (número negativo)
    } else if (resposta[0] == '-'){
        std::cout << "Esse número é negativo."
                    "Acho que não existe nenhum ano que seja negativo, existe?.\n";
        return 0;
    } else {
        //Para cada um dos caracteres entre 0 e resposta.size()
        for (int i = counter; (unsigned) i < resposta.size(); i++){ 
            //Checamos se ele não é um número
            if (!isdigit(resposta[i]))
                return 0;
        }
    }
    return 1;
}

int main(){
    //Definimos a entrada do usuário como string
    std::string resposta;

    std::cout << "Digite um ano, e vamos descobrir se ele é bissexto.\n";
    std::cin >> resposta;

    bool valido = checarInput(resposta);

    if (valido){
        int ano = std::stoi(resposta);
        bissexto(ano);
    } else {
        std::cout << "Input inválido.\n";
    } 
    return 0;
}











/*nota: na linha 53 se não fizesse int i = counter e só colocasse o counter diretamente,
o programa aparentemente não processa o último for quando eu inputava uma string de caracteres
(tipo "larissa"), sempre retornando 1. Por que?*/