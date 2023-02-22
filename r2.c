#include <stdio.h>

int main(void)
{
    int r1;
    int s;
    int r2;

    scanf("%d %d", &r1, &s);

    r2 = (s*2) - r1;

    printf("%d", r2);

    return 0;
}