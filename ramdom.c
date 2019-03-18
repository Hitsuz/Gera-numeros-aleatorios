#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
int i,tam,c,*v;

printf("Quantidade de numeros aleatorios: ");
scanf("%d",&(tam));

v = (int *)malloc(sizeof(int) * tam);    
FILE *aleatorios = fopen("NumAleatorios.txt", "w"); //Gera arquivo
   
if (aleatorios == NULL){ //Não conseguiu criar o arquivo
    printf("Problemas na criacao do arquivo com os numeros\n");
    return 0;
} else {
    srand(time(NULL));
    for(i = 1; i < tam; i++) {
        c = rand()%100000; //Gera numero aleatorio em uma variavel
        if(c == v[i])
        return 0;
    v[i] = c;
    fprintf(aleatorios,"%d  ", v[i]); //Imprime numero aleatorio no arquivo 
    }
}fclose(aleatorios); //Fecha o arquivo

    return 1;
}
