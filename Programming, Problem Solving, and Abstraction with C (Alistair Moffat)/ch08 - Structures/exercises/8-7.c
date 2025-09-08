#include <stdio.h>

#define STUDENT_PROMPT "Enter student num and mark"
#define MAX_STUDENTS 5

typedef struct
{
    int student_num;
    int mark;
} student_result_t;

int read_student(student_result_t *student);
void sort_students(student_result_t students[], int n);

int main(int argc, char *argv[])
{
    student_result_t students[MAX_STUDENTS];
    int i;

    for (i = 0; i < MAX_STUDENTS; i++)
    {
        student_result_t student;

        if (read_student(&student) != EOF)
        {
            students[i] = student;
        }
    }

    sort_students(students, MAX_STUDENTS);

    for (i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Student position %d: ", i);
        printf("student num: %d student mark %d\n",
            students[i].student_num, 
            students[i].mark
        );
    }

    return 0;
}

int read_student(student_result_t *student)
{
    int nvals_read;
    printf("%s:\n", STUDENT_PROMPT);
    nvals_read = scanf("%d %d",
        &student->student_num,
        &student->mark
    );

    if (nvals_read != 2)
    {
        return EOF;
    }
    
    return 0;
}

void sort_students(student_result_t students[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        int min_indx = i;

        for (j = i + 1; j < n; j++)
        {
            if(students[j].mark < students[min_indx].mark)
            {
                min_indx = j;
            }
        }

        student_result_t temp = students[i];
        students[i] = students[min_indx];
        students[min_indx] = temp;
    }
}
