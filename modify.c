#include"h.h"
void modify(st * hptr)
{
	char ch;
	st * temp=hptr;

	 printf("_______________________________________________\n");
	 printf("| Enter which record to search for mofication |\n");
       	 printf("| R/r : to search a rollno                    |\n");
	 printf("| N/n : to search a name                      |\n");
         printf("| P/p : percentage based                      |\n");
         printf("|_____________________________________________|\n");
         printf("Enter your choice : ");
	 
	 scanf(" %c",&ch);

	
	 if(ch=='R' || ch== 'r')
	 {
		 int roll;
		 printf("\n");
                 label:
		 ch=0;
		 printf(" \nenter the roll number : ");
		 scanf("%d",&roll);
		 while(temp!=0)
		 {
			 if(temp->roll==roll)
			  {
				  printf("\nthis the current data :  %d %s %f\n",temp->roll,temp->name,temp->per);
				  printf("\nenter the new data : ");
				  scanf("%s%f",temp->name,&temp->per);
				  return;
			  }
			 temp=temp->next;
		 }
		 
		 
	
	 }
		 
	 if(ch=='N' || ch== 'n')
	 {
		 char name[20];
		 printf("\n");
		 printf("\nenter the name : ");
		 scanf("%s",name);
		 int i=0; 
		 while(hptr!=0)
                 {
                         if(strcmp(name,hptr->name)==0)
			 {
                                 printf("\n %d %s %f\n",hptr->roll,hptr->name,hptr->per);
				 i++;	 
			 }

			 hptr=hptr->next;
		
		 }
		 printf("\n");
			if(i==1)
                          {
                                  printf("\nenter the new data : ");
                                  scanf("%s%f",hptr->name,&hptr->per);
                                  return;
                          }
                        else if(i>1)
			{
				printf("there are more than one \"%s\" \n",name);
			        goto label;	
			}
			i=0;
                 }
		

	 
		
	 if(ch=='P' || ch== 'p')
	 {
                 float mark;
                 printf("\n");
                 printf(" \nenter the percentage : ");

                 scanf("%f",&mark);
                 
		  int i =0;
                 while(hptr!=0)
                 {
                         if(mark==hptr->per)
                         {
                                 printf("\n %d %s %f\n",hptr->roll,hptr->name,hptr->per);
                                 i++;
                         }

                         hptr=hptr->next;
                 }
		 printf("\n");
                        if(i==1)
                          {
                                  printf("\nenter the new data : ");
                                  scanf("%s%f",hptr->name,&hptr->per);
                                  return;
                          }
                        else if(i>1)
                        {
                                printf("there are more than one \"%f\" \n",mark);
                                goto label;
                        }




        }


}
