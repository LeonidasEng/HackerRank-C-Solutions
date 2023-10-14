#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* 
    Reverse the array 
    - Swap algorithm
    - We iterate through the array up to half
    its length and swap the elements from the beginning
    and end. Finally, we print the reversed array and free 
    the allocated memory using free(arr).
    */
    for(i = 0; i < num/2; i++) {
        temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }

    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);

    free(arr); // Free the allocated memory
    return 0;
}
