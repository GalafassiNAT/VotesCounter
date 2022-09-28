#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0, b = 0, nulo = 0;
    printf("Informe seu voto (1-4 candidatos, 5 nulo e 6 branco):\n");
    printf("> ");
    scanf("%d", &n);
    do{
        switch(n){
            case 1: c1++;   break;
            case 2: c2++;   break;
            case 3: c3++;   break;
            case 4: c4++;   break;
            case 5: nulo++; break;
            case 6: b++;    break;
        }
            printf("> ");
            scanf("%d", &n);
    }while(n != 0);

      
        if(c1 > c2 && c1 > c3 && c1 > c4){
            if(c1 == c2 || c1 == c3 || c1 == c4){
            printf("Houve um empate, as eleições devem ser refeitas!");
            return 0;
            }
            c1 += b;
        }else if (c2 > c3 && c2 > c4){
            if(c2 == c1 || c2 == c3 || c2 == c4){
            printf("Houve um empate, as eleições devem ser refeitas!");
            return 0;
            }
            c2 += b;
        }else if(c3 > c4 ){
            if(c3 == c1 || c2 == c3 || c3 == c4){
            printf("Houve um empate, as eleições devem ser refeitas!");
            return 0;
            }
            c3 += b;
        }else if ( !(c3 == c1 || c3 == c2 || c3 == c4)){
            c4 += b;
        }else{
            printf("Houve um empate, as eleições devem ser refeitas!");
            return 0;
        }

        printf("Candidato 1: %d votos\nCandidato 2: %d votos\n", c1, c2);
        printf("Candidato 3: %d votos\nCandidato 4: %d votos\n", c3, c4);
        printf("Nulo: %d votos\nBranco: %d votos\n", nulo, b);



    return 0;
}