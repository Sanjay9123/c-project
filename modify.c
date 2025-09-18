#include"h.h"
void modify(st * hptr)
{
	char ch;

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
		 printf(" \nenter the roll number : ");
	
		 scanf("%d",&roll);
		 while(hptr!=0)
		 {
			 if(hptr->roll==roll)
			  {
				  printf("\nthis the current data :  %d %s %f\n",hptr->roll,hptr->name,hptr->per);
				  printf("\nenter the new data : ");
				  scanf("%s%f",hptr->name,&hptr->per);
				  return;
			  }
			 hptr=hptr->next;
		 }
		 
		 
	
	 }
		 
	 if(ch=='N' || ch== 'n')
	 {
		 char name[20];
		 printf("\n");
		 printf("\nenter the name : ");
		 scanf("%s",name);
		 
		 while(hptr!=0)
                 {
                         if(strcmp(name,hptr->name)==0)
                          {
                                  printf("\nthis the current data :  %d %s %f\n",hptr->roll,hptr->name,hptr->per);
                                  printf("\nenter the new data : ");
                                  scanf("%s%f",hptr->name,&hptr->per);
                                  return;
                          }
                         hptr=hptr->next;
                 }
		

	 }
		
	 if(ch=='P' || ch== 'p')
	 {
                 float mark;
                 printf("\n");
                 printf(" \nenter the percentage : ");

                 scanf("%f",&mark);
                 while(hptr!=0)
                 {
                         if(hptr->per==mark)
                          {
                                  printf("\nthis the current data :  %d %s %f\n",hptr->roll,hptr->name,hptr->per);
                                  printf("\nenter the new data : ");
                                  scanf("%s%f",hptr->name,&hptr->per);
                                  return;
                          }
                         hptr=hptr->next;
                 }
	 }



}
