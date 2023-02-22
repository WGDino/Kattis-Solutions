#include <stdio.h>

int main(void)
{
    double in;

    scanf("%lf", &in);

    double out = in / 4.0;

    printf("%.2lf", out);

    return 0;
}