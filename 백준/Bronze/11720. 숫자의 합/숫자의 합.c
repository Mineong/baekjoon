#include <stdio.h>

int main() {
    int num, n;
    int sum=0;

    scanf("%d\n", &n);

    for(int i=0; i<n; i++) {
        scanf("%1d", &num);
        sum+=num;
    }

    printf("%d\n", sum);
    return 0;
}