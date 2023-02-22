#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int x, y = 0;

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &x);
        y = y + x;
    }

    printf("%d", y - (n-1));
    
    return 0;
}