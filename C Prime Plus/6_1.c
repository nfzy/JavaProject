#include <stdio.h>

int main(void)
{
    char latin[26], ch;
    for(ch = 0; ch < 26; ++ch)
        latin[ch] = ch + 97;
    for (ch = 0; ch < 26; ++ch)
        printf("%c", latin[ch]);

    puts("\nDone!");
    return 0;
}
