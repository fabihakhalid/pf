#include<stdio.h>

int main ()
{
	int marks ;
	printf("enter your marks :");
	scanf("%d",&marks );
	
	if(marks >=90){
	 printf("you got A+");
  }
    else if (marks >=80){
     printf("you got A");
  }
	else if (marks >=70){
	 printf("you got B");	 
  }
	else if (marks >=60){
	 printf("you got C");
  }
	else if (marks >=50){
	 printf("you got D");
	} 
	else if (marks>0 && marks<= 50){
	
	 printf("you got F");
}
	else {
	 printf("invalid choice  :");
	}
	
	return 0;
}