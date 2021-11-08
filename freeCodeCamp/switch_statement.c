#include<stdio.h>
#include <stdlib.h>

int main(){
	char grade = 'A';

	switch(grade){
		case 'A' :
			printf("You did great! ");
			break;
		case 'B' :
			printf("You did alright. ");
			break;
		case 'C' :
			printf("You did average. ");
			break;
		case 'D' :
			printf("Ehh you shoulda studied a little bit. You can do better. ");
			break;
		case 'F' :
			printf("What's going on bud? Problems at home? ");
			break;
		default:
			printf("Invalid Grade!\n");
	}
	return 0;
}
