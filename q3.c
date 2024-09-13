#include <stdio.h>
int r(int x, int y) {
    int resultado = (3 * x) * (3 * x) + y * y;
    return resultado;
}

int b(int x, int y) {
    int resultado1 = 2 * (x * x) + (5 * y) * (5 * y);
    return resultado1;
}

int c(int x, int y) {
    int resultado2 = (-100 * x) + (y * y * y);
    return resultado2;
}
int main(){
    int N;
    scanf("%d", &N);
    int X, Y;
    for(int i=0; i<N; i++){
        scanf("%d %d", &X, &Y);
        int x1 = r(X,Y);
        int x2 = b(X,Y);
        int x3 = c(X,Y);
     if (x1 > x2 && x1 > x3) {
            printf("Rafael ganhou\n");
        } else if (x2 > x1 && x2 > x3) {
            printf("Beto ganhou\n");
        } else {
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}