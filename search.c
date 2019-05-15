#include<stdio.h>
#include"phone.h"
#include<string.h>

int search()
{
	char state[10];
	int i=0,num=0;
	scanf("%s",state);
	while(1){
		if(strcmp(state,PhoneBook[i].Name)==0){
			break;}
		++i;}
	if(i>size){
		num=51;}
	else {
		num=i;}
	return num;
}

	 
