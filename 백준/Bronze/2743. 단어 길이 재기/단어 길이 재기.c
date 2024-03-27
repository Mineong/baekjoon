#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    
    scanf("%s\n", word);

    int length=0;
    for(int i=0; word[i] !=0; i++) {
        length+=1;
    }
    printf("%d\n", length);

    return 0;
}
