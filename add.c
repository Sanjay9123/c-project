#include "h.h"

char r[30]={0};
void add(st**hptr)
{
    int i;
    st * temp=(st *)malloc(sizeof(st));
    if (!temp)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("enter the name and percentage\n");
    scanf("%s%f",temp->name,&temp->per);
    temp->next=0;

    if(*hptr==0)
    {
	    temp->roll=1;
	    *hptr=temp;
	    r[1]=1;
    }
    else
    {
    	i=1;
   	 while(r[i])
		 i++;
 
	    temp->roll=i;
	st * last=*hptr;
   	 while(last->next!=0)
        	    last=last->next;

  	  last->next=temp;
	  r[i]=1;
    }
}
