#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[100]={0};
    scanf("%s\n", str);

    for(int i=97; i<=122; i++) {
        int j=0;
        while (str[j]!=0) {
            if(str[j]==(char)i) break;
            j++;
        }
        if(str[j]==(char)i) printf("%d ", j);
        else printf("-1 ");
    }
    return 0;
}