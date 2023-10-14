#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender)
{
    int boys = 0, girls = 0;

    for (int i = 0; i < number_of_students; i++)
    {
        if (i % 2)
            girls += marks[i]; // i % 2 is TRUE == 1 therefore ODD
        else
            boys += marks[i]; // FALSE == 0 therefore EVEN
    }    
    
    return (gender == 'b') ? boys : girls; 
    // if char is b for boys (TRUE) return boys sum else (FALSE) return girls sum 
    
}

int main() 
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
    
}