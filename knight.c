#include <stdio.h>

int main(void)
{
    int read;
    scanf("%d", &read);

    if(read % 2){
        printf("first");
    }

    else{
        printf("second");
    }

    return 0;
}