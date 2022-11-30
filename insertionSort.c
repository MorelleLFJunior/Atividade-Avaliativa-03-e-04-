//alg. insertionSort
//bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void insertionSort(int arr[], int size){ //funcao sequenciadora
    int i, j, key; //contadores
    for (i = 1; i < size; i++) { //laço de repetição de acordo com o tamanho do array
        key = arr[i]; //numero atual dentro do array (KEY)
        j = i - 1; //j = indice atual - 1
        while (j >= 0 && arr[j] > key) { //enquanto o indice "j" for maior que 0 e o valor que array[indice "J"] for maior que a key
            arr[j + 1] = arr[j]; //alterar a sequência dos valores 
            j = j - 1; // diminuir o valor do indice "j"
        }
        arr[j + 1] = key; //ajustando o valor para a ordem crescente dentro do array
    }
}

void printArray(int arr[], int size){ //funcao que imprime o resultado
    int i; //contador
    for (i = 0; i < size; i++) // laço de repetição para impressão dos valores
        printf("%d | ", arr[i]); //impressão dos valores pós sequenciamento
    printf("\n"); //impressão de espaço pós renderização
}

void main(){
    printf("Sequenciador de números aleatórios \n");
    printf("Digite a quantidade de numeros alatórios que deseja gerar e trazer sequenciados (ordem crescente) \n"); //Solicita a quantidade que deseja gerar;
    int qtd; //identificador da quantidade
    scanf("%d", &qtd); //função para digitar quantidade
    int arr[qtd]; //array a ser sequanciado
    int i = 0;
    while (qtd > 0 && i < qtd) { //criar um aleatório enquanto o indice for menor que a quantidade solicitada
        int randomNumber = (random() / 100000); //gerando valor aleatório
        arr[i] = randomNumber; //inserindo valor gerado ao array
        i = i + 1; //contador++
    }
    int size = sizeof(arr) / sizeof(arr[0]); //tamanho do array
    insertionSort(arr, size); //chamando a funcao sequenciadora
    printArray(arr, size);//chamando a funcao que imprime o resultado
}
