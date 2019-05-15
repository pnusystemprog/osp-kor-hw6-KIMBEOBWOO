#include<stdio.h>
#include"phone.h"
#include<string.h>

void delete1(int num)
{
	int i;
	for(i=num;i<size;i++){
		if(i!=size){
		strcpy(PhoneBook[i].Name,PhoneBook[i+1].Name);
		strcpy(PhoneBook[i].PhoneNumber,PhoneBook[i+1].PhoneNumber);
		}
	}
	size--;
}
