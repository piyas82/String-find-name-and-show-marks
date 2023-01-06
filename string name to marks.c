#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	
	char name[2][30];
	int i,marks[3];
	
	for(i=0;i<2;i++){
		
		printf("Enter your name:");
		gets(name[i]);
		fflush(stdin);
		
		printf("Enter your marks:");
		scanf("%d",&marks[i]);
		fflush(stdin);
		
	}
	int j,string;
	char see[30];
	
	printf("Enter name you want to see marks:");
	gets(see);
	
	for(i=0;i<2;i++){
		
		string=strcmp(see,name[i]);
		if(string==0){
			break;
		}
	
	}
	printf("Your marks:%d",marks[i]);
	
}
