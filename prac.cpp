#include<stdio.h>

int main (){
	
	int age;
	printf("enter your age :");
	scanf("%d",&age);
	
	if(age >= 18){
	 printf("you can vote :\n");
	 
	
	if (age >=60){
	 printf ("you are senior citizen :");
	 
	}else {
	 printf("you are junior citizen :");
	}
	
}else {
	printf ("you can not vote :");
}
	return 0;
}