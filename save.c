#include"h.h"


void save(st *hptr)
{
	FILE * op= fopen("stu.txt","w");
	FILE * raw=fopen("raw.txt","w");
        fprintf(op,"|%-5s| %-20s|%-9s|\n","Roll","Name","perentage");
        fprintf(op,"|-----|---------------------|---------|\n");
        while(hptr!=0)
        {
	fprintf(raw,"%d %s %f\n",hptr->roll,hptr->name,hptr->per);
        fprintf(op,"|%-5d| %-20s|%-9.2f|\n",hptr->roll,hptr->name,hptr->per);
        fprintf(op,"|-----|---------------------|---------|\n");
        hptr=hptr->next;	
        }
}
