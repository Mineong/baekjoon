#include <stdio.h>

int main() {
    int index;
    char s[1000];

    scanf("%s\n", s);
    scanf("%d\n", &index);

    printf("%c", s[index-1]);

    return 0;
}