#include "h.h"

void show(st *hptr)
{
	while(hptr!=0)
	{
	printf("%d %s %.2f\n",hptr->roll,hptr->name,hptr->per);
		hptr=hptr->next;
	
	}



}

