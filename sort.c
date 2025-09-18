#include "h.h"

void sort(st* hptr)
{
        int i,n=0,j,size=sizeof(st)-8;
        st *temp=hptr;
        st temp1;


	char ch;
        printf("_________________________________\n");
        printf("| P/p : sort with percentage     |\n");
        printf("| N/n : sort with name           |\n");
        printf("|________________________________|\n");
        printf("Enter your choice : ");
	scanf(" %c",&ch);
	for(i=0;temp!=0;i++)
                temp=temp->next;

  if((ch=='N')||(ch=='n'))
  {
        for(j=0;j<i-1;j++)
        {
                for(n=0,temp=hptr;n<i-j-1;n++)
                {
                        if(0<strcmp(temp->name,temp->next->name))
                         {
                                memcpy(&temp1,temp,size);
                                memcpy(temp,temp->next,size);
                         	memcpy(temp->next,&temp1,size);
                         }

                                temp=temp->next;

                }

		}
        }



  if((ch=='P')||(ch=='p'))
  {
	 for(j=0;j<i-1;j++)
        {
                for(n=0,temp=hptr;n<i-j-1;n++)
                {
                        if((temp->per)>(temp->next->per))
                        {
                                memcpy(&temp1,temp,size);
                                memcpy(temp,temp->next,size);
                                memcpy(temp->next,&temp1,size);
                        }

                                temp=temp->next;

                }

        }
  }
}
