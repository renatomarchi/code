/* Calculadora Taxa Metabólica Basal
 Criado em 4 de outubro de 2017
 Autor: Renato Marchi Oliveira
 Versão 2
 Cálculo baseado no Método Harris-Benedict */

#include <stdio.h>

int main ()
{
    int genero;
    int atividade;
    int objetivo;
    float pesoh;
    float alturah;
    float idadeh;
    float tmbh;
    float totalh;
    float objetivoh;
    float pesom;
    float alturam;
    float idadem;
    float tmbm;
    float totalm;
    float objetivom;
    float fatoratividade;
    
    //Pede ao usúario informar seu genero e executa o bloco de código de acordo com a resposta (case 1 homem / case 2 mulher).
    printf("Digite [1] para homem \n");
    printf("Digite [2] para mulher \n");
    scanf("%i", &genero);
    //Estrutura de repetição para genero errado.
    while (genero != 1 && genero != 2) {
        printf("Escolha uma opção: \n");
        printf("Digite [1] para homem \n");
        printf("Digite [2] para mulher \n");
        scanf("%i", &genero);
    }
    switch (genero) {
        case 1:
            printf("Qual seu peso (KG):");
            scanf("%f", &pesoh);
            printf("Qual sua altura (CM):");
            scanf("%f", &alturah);
            printf("Qual sua idade (ANOS):");
            scanf("%f", &idadeh);
            
            tmbh = 66 + (13.7 * pesoh) + (5 * alturah) - (6.8 * idadeh);
            
            printf("Sua taxa metabolica basal é: %6.2f Kcal. \n", tmbh);
            
            //Fator atividade
            printf("Qual seu fator atividade? \n");
            printf("Digite [1] para Sedentário - Pouco ou nenhum exercício diário \n");
            printf("Digite [2] para Levemente Ativo - Exercício leve de 1 a 3 dias na semana \n");
            printf("Digite [3] para Moderadamente Ativo - Exercício leve de 3 a 5 dias na semana \n");
            printf("Digite [4] para Bastante Ativo - Exercício pesado de 6 a 7 dias na semana \n");
            printf("Digite [5] para Muito Ativo - Exercício pesado todos os dias da semana ou treinos duas vezes ao dia \n");
            scanf("%i", &atividade);
            //Repetição caso fator seja diferente dos propostos.
            while ((atividade != 1) && (atividade != 2) && (atividade != 3) && (atividade != 4) && (atividade != 5)){
                printf("Escolha um fator de atividade: \n");
                printf("Digite [1] para Sedentário - Pouco ou nenhum exercício diário \n");
                printf("Digite [2] para Levemente Ativo - Exercício leve de 1 a 3 dias na semana \n");
                printf("Digite [3] para Moderadamente Ativo - Exercício leve de 3 a 5 dias na semana \n");
                printf("Digite [4] para Bastante Ativo - Exercício pesado de 6 a 7 dias na semana \n");
                printf("Digite [5] para Muito Ativo - Exercício pesado todos os dias da semana ou treinos duas vezes ao dia \n");
                scanf("%i", &atividade);
            }
            switch (atividade) {
                case 1:
                    fatoratividade = 1.20;
                    break;
                case 2:
                    fatoratividade = 1.37;
                    break;
                case 3:
                    fatoratividade = 1.55;
                    break;
                case 4:
                    fatoratividade = 1.72;
                    break;
                case 5:
                    fatoratividade = 1.90;
                    break;
            }
            totalh = tmbh * fatoratividade;
            
            printf("Seu gasto calórico diário é %6.2f Kcal \n", totalh);
            break;
        case 2:
            printf("Qual seu peso (KG):");
            scanf("%f", &pesom);
            printf("Qual sua altura (CM):");
            scanf("%f", &alturam);
            printf("Qual sua idade (ANOS):");
            scanf("%f", &idadem);
            
            tmbm = 655 + (9.6 * pesom) + (1.8 * alturam) - (4.7 * idadem);
            
            printf("Sua taxa metabolica basal é: %6.2f Kcal. \n", tmbm);
            
            //Fator atividade
            printf("Qual seu fator atividade? \n");
            printf("Digite [1] para Sedentário - Pouco ou nenhum exercício diário \n");
            printf("Digite [2] para Levemente Ativo - Exercício leve de 1 a 3 dias na semana \n");
            printf("Digite [3] para Moderadamente Ativo - Exercício leve de 3 a 5 dias na semana \n");
            printf("Digite [4] para Bastante Ativo - Exercício pesado de 6 a 7 dias na semana \n");
            printf("Digite [5] para Muito Ativo - Exercício pesado todos os dias da semana ou treinos duas vezes ao dia \n");
            scanf("%i", &atividade);
            //Repetição caso fator atividade seja diferente dos propostos.
            while ((atividade != 1) && (atividade != 2) && (atividade != 3) && (atividade != 4) && (atividade != 5)){
                printf("Escolha um fator de atividade: \n");
                printf("Digite [1] para Sedentário - Pouco ou nenhum exercício diário \n");
                printf("Digite [2] para Levemente Ativo - Exercício leve de 1 a 3 dias na semana \n");
                printf("Digite [3] para Moderadamente Ativo - Exercício leve de 3 a 5 dias na semana \n");
                printf("Digite [4] para Bastante Ativo - Exercício pesado de 6 a 7 dias na semana \n");
                printf("Digite [5] para Muito Ativo - Exercício pesado todos os dias da semana ou treinos duas vezes ao dia \n");
                scanf("%i", &atividade);
            }
            switch (atividade) {
                case 1:
                    fatoratividade = 1.20;
                    break;
                case 2:
                    fatoratividade = 1.37;
                    break;
                case 3:
                    fatoratividade = 1.55;
                    break;
                case 4:
                    fatoratividade = 1.72;
                    break;
                case 5:
                    fatoratividade = 1.90;
                    break;
            }
            totalm = tmbm * fatoratividade;
            
            printf("Seu gasto calórico diário é %6.2f Kcal \n", totalm);
            break;
    }
    printf("Qual seu objetivo? \n");
    printf("Digite [1] para ganhar massa muscular \n");
    printf("Digite [2] para perder gordura \n");
    printf("Digite [3] para manter o peso \n");
    
    if (genero == 1) {
        scanf("%i", &objetivo);
        //Repetição caso objetivo selecionado seja diferente dos propostos.
        while ((objetivo != 1) && (objetivo != 2) && (objetivo != 3)) {
            printf("Qual seu objetivo? \n");
            printf("Digite [1] para ganhar massa muscular \n");
            printf("Digite [2] para perder gordura \n");
            printf("Digite [3] para manter o peso \n");
            scanf("%i", &objetivo);
        }
        switch(objetivo) {
            case 1:
                objetivoh = totalh + 500;
                break;
            case 2:
                objetivoh = totalh - 500;
                break;
            case 3:
                objetivoh = totalh;
                break;
        }
        printf("Você precisa ingerir %6.2f Kcal por dia \n", objetivoh);
    }
    else {
        scanf("%i", &objetivo);
        //Repetição caso objetivo selecionado seja diferente dos propostos.
        while ((objetivo != 1) && (objetivo != 2) && (objetivo != 3)) {
            printf("Qual seu objetivo? \n");
            printf("Digite [1] para ganhar massa muscular \n");
            printf("Digite [2] para perder gordura \n");
            printf("Digite [3] para manter o peso \n");
            scanf("%i", &objetivo);
        }
        switch(objetivo) {
            case 1:
                objetivom = totalm + 500;
                break;
            case 2:
                objetivom = totalm - 500;
                break;
            case 3:
                objetivom = totalm;
                break;
        }
        printf("Você precisa ingerir %6.2f Kcal por dia \n", objetivom);
    }
    return 0;
}