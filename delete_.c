#include "h.h"

extern char r[30];
void delete_(st**hptr)
{
	char op;
	printf("delete by roll or name or percent : 1,2,3\n");
	scanf(" %c",&op);

        st *temp,*last;
	temp=*hptr;
	last=*hptr;
	if(op=='1')
	{
		int roll;
		printf("enter the roll number");
	        scanf("%d",&roll);      
                if(temp->roll==roll)
		{
			*hptr=temp->next;
			free(temp);
			r[roll]=0;
			return;
		}
		temp=temp->next;
		while(temp!=0)
		{
               		 if(temp->roll==roll)
			 {
				 last->next=temp->next;
				 free(temp);
				 r[roll]=0;
				 return;
			 }
			 last=temp;
			 temp=temp->next;
		}			
	}


}
