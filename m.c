#include<stdio.h>
#include "h.h"
#include <unistd.h>
 char r[30];
int main()
{
	FILE *raw=fopen("raw.txt","r");

 	st * hptr=0;	
	int size=sizeof(st)-8;
	st temp;
	if(raw!=NULL)
	{
		while((fscanf(raw,"%d %s %f",&temp.roll,temp.name,&temp.per))!=EOF)
		{
			st * t=(st *)malloc(sizeof(st));
			memcpy(t,&temp,size);
			t->next=0;
			
			if(hptr==0)
			{
			    hptr=t;
			    r[temp.roll]=1;
			}
			else
			{
			 	 st * last=hptr;
        			 while(last->next!=0)
                    			last=last->next;
				 last->next=t;
				 r[t->roll]=1;
			}
		}


			
		fclose(raw);
	}

	 char op;
 label:

	printf("_________________________________\n");
	printf("| *****STUDENT RECORD MENU***** |\n");
        printf("| _____________________________ |\n");
	printf("|                               |\n");
	printf("| a/A  : add new record         |\n");
	printf("| d/D  : delete a record        |\n");
	printf("| s/S  : show the list          |\n");
        printf("| m/M  : modify a record        |\n");
        printf("| v/V  : save                   |\n");
	printf("| e/E  : exit                   |\n");
        printf("| t/T  : sort the list          |\n");
        printf("| l/L  : delete all the records |\n");
	printf("| r/R  : reverse the list       |\n");
        printf("|_______________________________|\n");
	printf("ENTER YOUR CHOICE : ");
	scanf(" %c",&op);

	if((op<='Z')&&(op>='A'))
		op^=32;
 switch(op)
 {
	case 'a':
		add(&hptr);
		goto label;
		break;

	case 's':
		show(hptr);
		goto label;
		break;
       
	case 'm':
                modify(hptr);
                goto label;
                break;

	case 't':
		sort(hptr);
		goto label;
		break;

	case 'd':
		delete_(&hptr);
		goto label;
		break;//dummy

	case 'v':
		save(hptr);
		goto label;
		break;
	
       	case 'l':
                delete_all(&hptr);
                goto label;
                break;
	
	
       	case 'r':
                reverse(&hptr);
                goto label;
                break;

	case 'e':
		 char ch;
		 printf("_________________________________\n");
                 printf("| s/S : save and exit            |\n");
                 printf("| E/e : exit without saving      |\n");
                 printf("|________________________________|\n");
                 printf("Enter your choice : ");
                 scanf(" %c",&ch);
		 if(ch=='s' || ch=='S')
		 {
			 save(hptr);
			 return 0;
		 }
		 else if(ch=='e' || ch=='E')
		 	 return 0;
		 else
			 goto label;
		 
			 

	default :
		printf("\n\tENTER THE VALID DATA\n");
                printf("\t********************\n\n");
		sleep(1);
		goto label;
	        break;	

 } 

 }
