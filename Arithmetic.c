#include <stdio.h>

int main() {
    
    int A, N, D;
    int sum = 0;
    scanf("%d %d %d",&N,&A,&D);
    
    sum = (N * (2 * A + (N - 1) * D)) / 2;
    printf("%d",sum);
    return 0;
}
