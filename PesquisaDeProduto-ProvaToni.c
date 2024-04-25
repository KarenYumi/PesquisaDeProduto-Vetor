#include <stdio.h>

int main(){

char produto[10][15]={"Leite","Bala","Suco","Linguica","Carne","Arroz","Cenoura"};
char pesquisa[1][15];
int i, posicao=7;


printf("Qual produto deseja ver: ");
scanf("%s", &pesquisa);

for(i=0;i<10;i++){
    if(strcmp(pesquisa,produto[i])== 0){ //retorna um valor que indica a relação entre as duas strings, valor negativo = 1string menor que a segunda, 0 = elas são iguais, positivo 1string maior que a segunda
        posicao = i;
        break;
    }
}
if(posicao <=6){
    printf("O produto esta na posicao: %i\n", posicao);
}
else{
    printf("O produto nao consta no vetor.");
}


return 0;
}
