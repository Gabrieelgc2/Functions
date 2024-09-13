#include <stdio.h>

int main() {
    int M, N;
    
    while (scanf("%d %d", &M, &N)!=EOF) {
        
        long long int numerofinal = 1;
        long long int numerofinal2 = 1;
        
        for (int i = M; i > 1; i--) {
            numerofinal *= i;
        }

        for (int i = N; i > 1; i--) {
            numerofinal2 *= i;
        }

        long long int somarfatoriais = numerofinal + numerofinal2;
        printf("%lld\n", somarfatoriais);
    }

    return 0;
}