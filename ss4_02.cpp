#include <stdio.h>
int main() {
    int a;
    printf("so: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("So %d la so chan.\n", a);
    } else {
        printf("So %d l� so le.\n", a);
    }

    return 0;
}