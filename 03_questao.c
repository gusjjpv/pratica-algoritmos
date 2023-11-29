#include <stdio.h>
int main ( ) {
int N_ant , N_prox , N , N_atual
N_ant = N_atual =1;
for( i =1 ,i <= N , i ++) {
N_prox = N_ant + N_atual ;
N_ant = N_atual ;
N_atual = N_prox ;
printf ("Fim do laco !\n") ;
return
}

/*
1° - linha 4: era esperado um ';' na linha 3, como n tem, da erro na linha seguinte
2° - linha 5: a variavel i, n esta declarada, n foi definida o tipo então resulta em um erro
3° - linha 5: no for, é para usar ';' e esta sendo usado somente ','
4° - linha 11: da erro pq na linha 10 existe um return sem ';'
*/