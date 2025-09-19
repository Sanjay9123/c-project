#include "h.h"
int count(st *);
void reverse(st ** hptr)
{
	int i,c=count(*hptr);

	st *temp=*hptr;

	st  **p=(st**)malloc(c*sizeof(st*));

	for(i=0;i<c;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	
	p[0]->next=0;

	for(i=1;i<c;i++)
		p[i]->next=p[i-1];

	*hptr=p[c-1];
	


}

int count(st * hptr)
{
       	int co=0;
       	while(hptr!=0)
       	{
	       	co++;
		hptr=hptr->next;
       	}
       	return co; 
}
