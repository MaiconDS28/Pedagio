#include <stdio.h>
#include <string.h>

int main() {
  
    printf("====================================================\n");
    printf("      🚗 Controle de PedágioMasterBrasterVADER 🚦   \n");
    printf("==================================================\n\n");

  
    int carros[7];
    char *dias[7] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
    int i, soma = 0, maior = 0, diaPico = 0;

    
    printf("Digite a quantidade de carros por dia da semana:\n");
    for (i = 0; i < 7; i++) {
        printf("%s: ", dias[i]);
        scanf("%d", &carros[i]);

        soma += carros[i];
        if (carros[i] > maior) {
            maior = carros[i];
            diaPico = i;
        }
    }

   
    printf("\n=== Relatorio da Semana ===\n");
    for (i = 0; i < 7; i++) {
        if (i == diaPico) {
            
            printf("\033[1;31m%s: %d carros 🚨 (Dia de Pico)\033[0m\n", dias[i], carros[i]);
        } else {
            printf("%s: %d carros\n", dias[i], carros[i]);
        }
    }

 
    printf("\nTotal de carros na semana: %d\n", soma);
    printf("Media diaria: %.2f carros\n", soma / 7.0);

    return 0;
}
