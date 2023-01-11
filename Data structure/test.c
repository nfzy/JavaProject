#include <stdio.h>


int main(void)
{
    int i, j, sum = 0;
    for(i = 1; i <= 100; ++i)
        for(j = 1; j <= 100; ++j)
            ++sum;
    printf("result is: %d\n", sum);


    /*
     *  x: 90  ... 100 101 91 ... 100 101 91    
     *  y: 100 ... 100 100 99 ... 99  99  98  
     *  100 * 10
     * */

    int x = 90, y = 100, count = 0; 
    while(y > 0)
        if(x > 100)
        {
            x -= 10; 
            --y;
            ++count;
        }
        else
        {
            ++x;
            ++count;
        }

    printf("x: %d, y:%d, count:%d\n", x, y, count);

    return 0;
}
