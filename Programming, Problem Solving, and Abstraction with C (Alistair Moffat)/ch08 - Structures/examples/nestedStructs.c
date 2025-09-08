#include <stdio.h>

#define NAMESTRLEN 40
#define MAXSUBJECTS 8

typedef char namestr[NAMESTRLEN + 1];

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
    int employeenum;
    date_t dob;
    date_t datecommenced;
    int status;
    int annualsal;
} staff_t;

typedef struct
{
    fullname_t name;
    int studentnumber;
    date_t dob;
    int nsubj;
    subject_t subjects[MAXSUBJECTS];
} student_t;
