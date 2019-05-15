#include<stdio.h>
#include"phone.h"
void print()
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("%s  %s\n",PhoneBook[i].Name,PhoneBook[i].PhoneNumber);
	}
}
