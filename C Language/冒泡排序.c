# include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[6] = {3 , -56 , 51 , 0 , 5 , +2};
    int i, j , t;
    for(i = 0; i < 6-1; ++i)
        for (j = 0; j < 6-1-i; j++)
            if(a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }


    for (i=0; i < 6; ++i) 
        printf("%d\t", a[i]);

    putchar('\n');
    return 0;
}

