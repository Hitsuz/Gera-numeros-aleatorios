#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 
int main(){


int i,tam,*vet;
printf("Quantidade de numeros aleatorios: ");
scanf("%d",&(tam));

vet = (int *)malloc(sizeof(int) * tam);    
FILE *aleatorios = fopen("NumerosAleatorios.txt", "w"); //Gera arquivo
   
if (aleatorios == NULL){ //Não conseguiu criar o arquivo
       printf("Problemas na criacao do arquivo com os numeros\n");
       return 0;
    } else {
        srand(time(0));
        for(i = 0; i < tam; i++) {
            vet[i] = rand()%tam; //Gera numero aleatorio
            fprintf(aleatorios,"%d\n ", vet[i]); //Imprime numero aleatorio no arquivo
        }
         fclose(aleatorios); //Fecha o arquivo
    }
    return 1;
}
