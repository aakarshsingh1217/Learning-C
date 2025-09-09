#include <stdio.h>

int main(void)
{
    int grade, grade_tens;

    printf("Enter numerical grade: ");

    if (scanf("%d", &grade) != 1 || grade < 0 || grade > 100) 
    {
        printf("Error, grade must be between 0 and 100.");

        return 1;
    }   

    grade_tens = grade / 10;
    
    switch (grade_tens) 
    {
        case 9: case 10:
            printf("Letter Grade: A\n");
            break;
        case 8:
            printf("Letter Grade: B\n");
            break;
        case 7:
            printf("Letter Grade: C\n");
            break;
        case 6:
            printf("Letter Grade: D\n");
            break;
        default:
            printf("Letter Grade: F\n");
            break;
    }

    return 0;
}