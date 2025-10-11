#include "h.h"

extern char r[30];
void delete_(st**hptr)
{
	char op;
	printf("_________________________________\n");
	printf("| R/r : enter roll to del       |\n");
       	printf("| N/n : enter name to del       |\n");
	printf("|_______________________________|\n");
	printf("Enter your choice : ");
	scanf(" %c",&op);

        st *temp,*last;
	temp=*hptr;
	last=*hptr;


	if((op=='R')||(op=='r'))
	{
		int roll;
                label:
		printf("enter the roll number : ");

	        scanf(" %d",&roll);
			
		while(temp!=0)
		{
         if(temp->roll==roll)
		 {
			if(temp==*hptr)
			{
				*hptr=temp->next;
				free(temp);
				printf("\t****************ROLL=%d node deleted**********\n",roll);	
				r[roll]=0;
				return;
			}
			
				 last->next=temp->next;
				 free(temp);
				 r[roll]=0;
				printf("\t****************ROLL=%d node deleted**********\n",roll);	
				 return;
			 }
			 last=temp;
			 temp=temp->next;
		}			
	}


	//////////////////////////////////////////////////////////////////////////////////////////////
	


        if((op=='N')||(op=='n'))
        {
                char name[20];
                printf("enter the  name: ");
                scanf(" %s",name);
                int i=0;
		st *check=temp;
                while(temp!=0)
                {
                         if(!(strcmp(name,temp->name)))
			{
				printf("%d %s %f\n",temp->roll,temp->name,temp->per);
				i++;
			}

                         last=temp;
                         temp=temp->next;
		}
		temp=check;
			if(i==1)
                         {		
		             	 if(*hptr==temp)
			       	{

					*hptr=temp->next;	
					r[temp->roll]=0;
					free(temp);
					printf("\t****************name=%s node deleted**********\n",name);		
					return;
				}
                                 last->next=temp->next;
                                 r[temp->roll]=0;
                                 free(temp);
			       	printf("\t****************name=%s node deleted**********\n",name);	
                                 return;
                         }

			temp=check;

			 if(i>1)
			{
				printf("\nplease select the roll number ");
				goto label;

			}
                }

		
          }

