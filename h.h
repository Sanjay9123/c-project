#include <stdio.h>

typedef struct student
{
        struct student *prev;
        int roll;
        char name [20];
        float per;
        struct student *next;


}st;


void add(st *);
