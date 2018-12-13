#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int a;
    int b;
    int c;
    float x;
    double pi = 0.0;

    printf("Hullo, Mate! Let me show you some Pi.\n");
    printf("How many decimals would you like to get? ");

    scanf("%d", &n);

    for(int k = 0; k <= n; k++) {
        pi += pow(16.0, -k)*(4.0/(8*k + 1) - 2.0/(8*k + 4) - 1.0/(8*k + 5) - 1.0/(8*k + 6));
    }

    printf("\nValue of Pi to %d decimals is: %.*f\n", n, n, pi);

    printf("\nSee you around, mate!");
    
    return 0;
}