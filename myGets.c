/**********************************************************************
 Use this .c file as header as
 #include "./myGets.c"
 it will solve your problem without memory dump in all systems.
 
 
 Use and enjoy  :)
                                    --Subhendu Hazra
************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#include<alloc.h>

void sortByPtrExchange(char **person, int n){
	int i,j;
	char *temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(strcmp(person[j],person[j+1])>0){
				temp=person[j];
				person[j]=person[j+1];
				person[j+1]=temp;
			}
		}
	}
}

/* our function to get a entire string
use it like--------------

char a[20];
getString(a);


--------------------
***************************************************************************************************************************
please remember that input string legth mut be in rage as allocated, here string length of variable a have to be within 20
****************************************************************************************************************************
then the variable a will be treated as simple string variable.
to print the string is simple. :)
printf("%s",a);
*/
void getString(char *str){
	char c;
	do{
		c=getchar();
		*str=c;
		str++;
	}while(c!='\n');
	str--;
	*str='\0';
}

