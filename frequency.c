#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int frequency[10] = {0};
    char str[1000];
    int i;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            frequency[str[i] - '0']++; // Converting ASCII character to integer before finding element.
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", frequency[i]);
    }
    
    printf("\n");
    
    return 0;
}
