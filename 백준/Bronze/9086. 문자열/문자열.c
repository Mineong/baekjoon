#include <stdio.h>
#include <string.h>

int main() {
    char word[1000];
    int T=0;
    scanf("%d\n", &T);

    while(T--) {
        scanf("%s\n", word);
        printf("%c%c\n", word[0], word[strlen(word)-1]);
    }
    return 0;
}