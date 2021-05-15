#include <stdio.h>

int main(void)

{
    int i, cnt = 0;
    char ch;
    scanf("%d", &i);
    printf("i = %i\n", i);

    while ((ch = getchar()) != '\n') {
        ++cnt;
        continue;
    }

    int j;
    scanf("%d", &j);
    printf("i = %i\n", j);
    printf("cnt = %d\n", cnt);
    return 0;
}
