#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
void soma_matriz( float matriz_A[10][10], float matriz_B[10][10], float matriz_C[10][10],int i_A, int j_A, int i_B, int j_B){
    int i, j;
    //laco de repeticao que percorre as matrizes A e B, somando as celulas correspondentes
    if(i_A==i_B && j_A==j_B){ //condicao para soma de matrizes
        for(i=0;i<i_A;i++) {
            for(j=0;j<j_A;j++) {
                matriz_C[i][j]=0;
                matriz_C[i][j] = matriz_A[i][j] + matriz_B[i][j];
            }}}else {
        printf("impossivel realizar operacao\n"
               "Dica: para somar matrizes o numero de linhas e colunas devem ser iguais");
    }
}

void prod_matriz(float matriz_A[10][10], float matriz_B[10][10], float matriz_C[10][10], int i_A, int j_A, int i_B){
    int i, j, k;
    if(j_A==i_B){//condicao para multiplicar matrizes
        //laco de repeticao que percorre as matrizes A e B realizando a operacao da eq.1
        for (i=0;i<i_A; i++) {
            for (j=0; j<i_A; j++) {
                matriz_C[i][j]=0;
                for (k=0; k<j_A; k++) {
                    //eq.1 procedimento par mult matriz
                    matriz_C[i][j] = matriz_C[i][j] + (matriz_A[i][k] * matriz_B[k][j]);

                }}}}else {
        printf("impossivel realizar operacao\n"
               "Dica: para muliplicar matrizes o numero de colunas de A deve ser igual ao numero de linhas de B");

    }
}
void sub_matriz(float matriz_A[10][10], float matriz_B[10][10], float matriz_C[10][10],int i_A, int j_A, int i_B, int j_B){

    int i,j;
    //laco de repeticao que percorre as matrizes A e B, subtraindo as celulas correspondentes
    if(i_A==i_B && j_A==j_B){//condicao para sub de matrizes
        for(i=0;i<i_A;i++) {
            for(j=0;j<j_A;j++) {
                matriz_C[i][j]=0;
                matriz_C[i][j] = matriz_A[i][j] - matriz_B[i][j];
            }}}else {
        printf("impossivel realizar operacao\n"
               "Dica: para subtrair matrizes o numero de linhas e colunas devem ser iguais");
    }
}
void imprimir_A(float matriz_A[10][10], int i_A, int j_A){
    int i, j;
    printf("\nMatriz A:\n");
    //laco de repeticao que percorre a matriz A, imprimindo na tela seus valores
    for ( i=0; i<i_A; i++ ){
        for ( j=0; j<j_A; j++ )
        {
            printf ("%3.2f ", matriz_A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
void imprimir_B(float matriz_B[10][10], int i_B, int j_B){
    int i, j;
    printf("\nMatriz B:\n");
    //laco de repeticao que percorre a matriz B, imprimindo na tela seus valores
    for ( i=0; i<i_B; i++ ){
        for ( j=0; j<j_B; j++ )
        {
            printf ("%3.2f ", matriz_B[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
void imprimir_C(float matriz_C[10][10], int i_B, int j_B){

    int i, j;
    printf("\nMatriz C:\n");
    //laco de repeticao que percorre a matriz C, imprimindo na tela seus valores
    for ( i=0; i<i_B; i++ ){
        for ( j=0; j<j_B; j++ )
        {
            printf ("%3.2f ", matriz_C[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
void rand_A(float matriz_A[10][10], int i_A, int j_A){
    int i, j, max, min;
    srand(time(NULL));
    printf("\nDigite o valor minimo da faixa de aleatorios:");
    scanf("%d", &min);
    printf("\nDigite o valor maximo da faixa de aleatorios:");
    scanf("%d", &max);
    //laco de repeticao que percorre a matriz A, atribuindo valores aleatorios as celulas
    for ( i=0; i<i_A; i++ )
        for ( j=0; j<j_A; j++ )
        {
            matriz_A[i][j]=0;
            matriz_A[i][j]=min+(rand()%max);
        }

}
void rand_B(float matriz_B[10][10], int i_B, int j_B){
    int i, j, min, max;
    srand(time(NULL));
    printf("\nDigite o valor minimo da faixa de aleatorios:");
    scanf("%d", &min);
    printf("\nDigite o valor maximo da faixa de aleatorios:");
    scanf("%d", &max);
    //laco de repeticao que percorre a matriz B, atribuindo valores aleatorios as celulas
    for ( i=0; i<i_B; i++ )
        for ( j=0; j<j_B; j++ ){

            matriz_B[i][j]=0;
            matriz_B[i][j]=min+(rand()%max);
        }
}
void man_A(float matriz_A[10][10], int i_A, int j_A){
    int i, j;
    printf ("\nDigite valor para os elementos da matriz A\n\n");
    //laco de repeticao que percorre a matriz A, e, a cada celula percorrida eh requisitado um valor
    for ( i=0; i<i_A; i++ ){
        for ( j=0; j<j_A; j++ ){
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%f", &matriz_A[ i ][ j ]);
        }}
}
void man_B(float matriz_B[10][10], int i_B, int j_B){
    int i,j;
    printf ("\nDigite valor para os elementos da matriz B\n\n");
    //laco de repeticao que percorre a matriz A, e, a cada celula percorrida eh requisitado um valor
    for ( i=0; i<i_B; i++ ){
        for ( j=0; j<j_B; j++ ){
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%f", &matriz_B[ i ][ j ]);
        }}
}
void menu(){

    printf("PROGRAMA DE MANIPULACAO DE MATRIZES\n");
    printf("(1) Definir o tamanho da matriz A\n");
    printf("(2) Definir o tamanho da matriz B\n");
    printf("(3) Preencher a matriz A com valores aleatorios\n");
    printf("(4) Preencher a matriz B com valores aleatorios\n");
    printf("(5) Atribuir valores manualmente para os elementos da matriz A\n");
    printf("(6) Atribuir valores manualmente para os elementos da matriz B\n");
    printf("(7) Calcular A+B\n");
    printf("(8) Calcular A-B\n");
    printf("(9) Calcular A*B\n");
    printf("(10) Imprimir matriz A\n");
    printf("(11) Imprimir matriz B\n");
    printf("(12) Imprimir matriz C\n");
    printf("(13) Ler a matriz A de um arquivo\n");
    printf("(14) Ler a matriz B de um arquivo\n");
    printf("(15) Escrever a matriz C em um arquivo\n");
    printf("(16) Sair\n\n");


}
void w_matriz_c(float matriz_C[10][10], int i_B, int j_B){
    //funcao que trabalha com a escrita em um arquivo
    FILE *file;
    int i, j;
    char dir_C[100];
    printf("Digite o diretorio onde a matriz C sera salva:");
    scanf("%s", dir_C);
    file=fopen(dir_C, "w");
    for ( i=0; i<i_B; i++ ){
        for ( j=0; j<j_B; j++ ){
            fprintf (file, "%3.2f ", matriz_C[i][j]);
        } fprintf(file,"\n");
    }
    fclose(file);
}
void r_matriz_a(){
    //funcao que trabalha com a leitura de um arquivo
    FILE *file_A;
    float matriz_A [10][10];
    int i_A,j_A;
    int i, j;
    char dir_A[100];
    printf("Digite o diretorio do seu arquivo:");
    scanf("%s", dir_A);
    file_A=fopen(dir_A,"r");
    fscanf(file_A,"%d %d", &i_A, &j_A);
    for(i=0; i<i_A; i++){
        for(j=0; j<j_A; j++){
            fscanf(file_A,"%f", &matriz_A[i][j]);
        }
    } fclose(file_A);

}
void r_matriz_b(float matriz_B[10][10], int i_B, int j_B){
    //funcao que trabalha com a leitura de um arquivo
    FILE *file_B;
    char dir_B[100];
    int i,j;
    printf("Digite o diretorio do seu arquivo:");
    scanf("%s", dir_B);
    file_B=fopen(dir_B,"r");
    fscanf(file_B,"%d %d", &i_B, &j_B);
    for(i=0; i<i_B; i++){
        for(j=0; j<j_B; j++){
            fscanf(file_B,"%f", &matriz_B[i][j]);
        }
    } fclose(file_B);
}
int main(){
    int i_A, j_A, i_B, j_B;
    float matriz_A[10][10];
    float matriz_B[10][10];
    float matriz_C[10][10];
    int i, j;
    int op;
    FILE *file_A;
    FILE *file_B;
    char buffer[100];
    char dir_A[100];
    char dir_B[100];
    do{
        menu();
        //capta valores e endereca a variavel de operação
        printf("digite sua operacao:");
        scanf("%s", buffer);

        op=atoi(buffer); //converte string para inteiro para evitar bug de loop infinito quando se digita um caractere
        printf("\n");
        switch (op) {

        case 1:
            //capta valores e endereca as variaveis de linhas e colunas da matriz A
            printf("Digite o numero de linhas da matriz A:");
            scanf("%d", &i_A);
            printf("\n");
            printf("Digite o numero de colunas da matriz A:");
            scanf("%d", &j_A);
            break;
        case 2:
            //capta valores e endereca as variaveis de linhas e colunas da matriz B
            printf("Digite o numero de linhas da matriz B:");
            scanf("%d", &i_B);
            printf("\n");
            printf("Digite o numero de colunas da matriz B:");
            scanf("%d", &j_B);
            break;

        case 3:
            rand_A(matriz_A, i_A,j_A);

            break;
        case 4:
            rand_B(matriz_B, i_B, j_B);

            break;
        case 5:
            man_A(matriz_A, i_A, j_A);
            break;
        case 6:
            man_B(matriz_B, i_B, j_B);
            break;
        case 7:
            soma_matriz(matriz_A, matriz_B, matriz_C, i_A, j_A, i_B, j_B);
            break;
        case 8:
            sub_matriz(matriz_A, matriz_B, matriz_C, i_A, j_A, i_B, j_B);
            break;
        case 9:
            prod_matriz(matriz_A, matriz_B, matriz_C,i_A,j_A,i_B);
            break;
        case 10:
            imprimir_A(matriz_A, i_A, j_A);
            break;
        case 11:
            imprimir_B(matriz_B, i_B, j_B);
            break;
        case 12:
            imprimir_C(matriz_C, i_B, j_B);
            break;
        case 13:
            printf("Digite o diretorio do seu arquivo:");
            scanf("%s", dir_A);
            // r_matriz_a(dir_A);

            file_A=fopen(dir_A,"r");
            fscanf(file_A,"%d %d", &i_A, &j_A);
            for(i=0; i<i_A; i++){
                for(j=0; j<j_A; j++){
                    fscanf(file_A,"%f", &matriz_A[i][j]);
                }
            } fclose(file_A);
            break;
        case 14:
            //r_matriz_b(matriz_B, i_B, j_B);
            printf("Digite o diretorio do seu arquivo:");
            scanf("%s", dir_B);
            file_B=fopen(dir_B,"r");
            fscanf(file_B,"%d %d", &i_B, &j_B);
            for(i=0; i<i_B; i++){
                for(j=0; j<j_B; j++){
                    fscanf(file_B,"%f", &matriz_B[i][j]);
                }
            } fclose(file_B);
            break;
        case 15:
            w_matriz_c(matriz_C,i_B, j_B);
            break;

        default:
            printf("opcao inexistente");

        }
        printf("\n\n");

    }while(op!=16);

    return 0;
}
