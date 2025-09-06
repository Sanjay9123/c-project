#include<stdio.h>
#include "h.h"

st *hptr=(st*)0x50;

int main()
{
	char op;
label:

	printf("_________________________________\n");
	printf("| *****STUDENT RECORD MENU***** |\n");
        printf("| _____________________________ |\n");
	printf("|                               |\n");
	printf("| a/A  : add new record         |\n");
	printf("| d/D  : delete a record        |\n");
	printf("| s/S  : show the list          |\n");
        printf("| m/M  : save                   |\n");
	printf("| e/E  : exit                   |\n");
        printf("| t/T  : sort the list          |\n");
        printf("| l/L  : delete all the records |\n");
	printf("| r/R  : reverse the list       |\n");
	printf("|                               |\n");	
	printf("| ENTER YOUR CHOICE:            |\n");
        printf("|_______________________________|\n");

	scanf(" %c",&op);

	if((op<='Z')&&(op>='A'))
		op^=32;
switch(op)
{
	case 'a':
		add(hptr);
		break;
	case 'e':
		return 0;
	default :
		printf("\n\tENTER THE VALID DATA\n");
                printf("\t********************\n\n");
		sleep(1);
		goto label;
	        break;	

}



}
