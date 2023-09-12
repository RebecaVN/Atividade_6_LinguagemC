//Escreva um programa em Linguagem C usando scanf e printf que leia duas variáveis inteiras e troque o conteúdo entre elas. 
#include <stdio.h>

int main() {
    int a, b, temp;
    
    // solicita o valor das variáveis a e b
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    // troca os valores de a e b usando uma variável temporária
    temp = a;
    a = b;
    b = temp;
    
    // exibe os valores atualizados de a e b
    printf("Depois da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}

