#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_shelves;
    scanf("%d", &total_shelves); // This is the number of shelves

    int total_queries;
    scanf("%d", &total_queries); // This is the number of queries

    int* total_number_of_books = (int*)malloc(sizeof(int)*total_shelves);
    int** total_number_of_pages = (int**)malloc(sizeof(int*)*total_shelves);

    for(int i = 0; i < total_shelves; i++){
        total_number_of_books[i] = 0;
        total_number_of_pages[i] = (int*)malloc(sizeof(int));
    }

    while (total_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
            total_number_of_pages[x] = realloc(total_number_of_pages[x], sizeof(int)*(total_number_of_books[x]+1));
            total_number_of_pages[x][total_number_of_books[x]] = y;
            total_number_of_books[x]++;


        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n",total_number_of_pages[x][y]);

            
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n",total_number_of_books[x]);
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }

    for (int i = 0; i < total_shelves; i++) {
        if (total_number_of_pages[i]) {
            free(total_number_of_pages[i]);
        }
    }

    if (total_number_of_pages) {
        free(total_number_of_pages);
    }

    return 0;
}
