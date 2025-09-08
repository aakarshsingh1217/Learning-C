#define NAMESTRLEN 40
#define MAXSUBJECTS 8

typedef char namestr [NAMESTRLEN+1];

typedef struct 
{
    namestr given, others, family;
} fullname_t;

typedef struct
{
    int yy, mm, dd;
} date_t;

typedef struct 
{
    int subjectcode;
    date_t enrolled;
    int status;
    int finalmark;
} subject_t;

typedef struct 
{
    fullname_t name;
    int employeenumber;
    date_t dob;
    date_t datecommenced;
    int status;
    int annualsalary;
} staff_t;

typedef struct 
{
    fullname_t name;
    int studentnumber;
    date_t dob;
    int nsubjects;
    subject_t subjects[MAXSUBJECTS];
}
student_t;

void sort_staff_by_number(staff_t staff[], int nstaff)
{
    int i, j;

    for (i = 0; i < nstaff - 1; i++)
    {
        int min_index = i;

        for (j = i + 1; j < nstaff; j++)
        {
            if (staff[j].employeenumber < staff[min_index].employeenumber)
            {
                min_index = j;
            }
        }

        staff_t temp = staff[i];
        staff[i] = staff[min_index];
        staff[min_index] = temp;
    }
}
