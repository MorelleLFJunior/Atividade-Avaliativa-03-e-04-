//alg. bogoSort
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_sorted(int *a, int n) //funcao classificadora 
{
  while ( --n >= 1 ) { //decrementando o contador
    if ( a[n] < a[n-1] ) return false; //se verificar que AINDA existe algo fora de sequencia, retornar FALSE
  }
  return true; //se verificar que NÃO existe algo fora de sequencia, retornar TRUE
}
 
void shuffle(int *a, int n) //funcao embaralhadora 
{
  int i, t, r; 
  for(i=0; i < n; i++) { //laco de acordo com length de "n"
    t = a[i]; //declaração do valor de "t" = number[indice]
    r = rand() % n; //declaração do valor de "r" = (aleatório % contador)
    a[i] = a[r]; //declaração de a[indice] = a[random]
    a[r] = t; //declaração de a[random] = t
  }
}
 
void bogosort(int *a, int n) //função bogoSort
{
  while ( !is_sorted(a, n) ) shuffle(a, n); // enquanto não estiver classificado, chamar a funcão embaralhadora (modificadora)
}
 
int main() //funcao principal
{
  printf("Gerador de tokens para APIs \n");
  system("read -p 'Pressione Enter para gerar os tokens em ordem crescente...' var");
  int numbers[4]; //quantidade de tokens a serem gerados (array);
  char *propsApi[10] = {"API_1", "API_2", "API_3", "API_4"};
  int o;
  for (o = 0; o < 4; o++) { //laço para gerar tokens
  int randomNumber = random();
      numbers[o] = randomNumber;
  }
  
  int i; //contador
  bogosort(numbers, 4); //chamando a funcao bogoSort
  for (i=0; i < 4; i++) printf("\ntoken %d: %s_%d%d", i+1,propsApi[i], i, numbers[i]); // impressão dos números pós sequencia-los
  printf("\n"); //impressao de espaço
}
