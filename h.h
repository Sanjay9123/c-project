#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
        int roll;
        char name[20];
        float per;
        struct student *next;
}st;

void add(st **);
void show(st*);
void delete_(st**);
void save(st *);
void sort(st *);
void modify(st *);
void delete_all(st **);
void reverse(st **);
