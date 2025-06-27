<<<<<<< Updated upstream
#include <stdio.h>

int main() {
    int n, i, j, k, l;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--){
            printf(" ");
            }
        for (k = 1; k <= i; k++){
            printf("%d", (2 * k) - 1);
            }
        for (l = i - 1; l >= 1; l--){
            printf("%d", (2 * l) - 1);
            }
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main() {
    int n, i, j, k, l;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--){
            printf(" ");
            }
        for (k = 1; k <= i; k++){
            printf("%d", (2 * k) - 1);
            }
        for (l = i - 1; l >= 1; l--){
            printf("%d", (2 * l) - 1);
            }
        printf("\n");
    }
    return 0;
}
>>>>>>> Stashed changes
