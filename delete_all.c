#include"h.h"

void delete_all(st ** hptr)
{
	st * hpt;

	while(*hptr!=0)
	{
		hpt=(*hptr)->next;

		free(*hptr);

		*hptr=hpt;
	}

}
