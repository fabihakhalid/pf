#include<stdio.h>

int main ()
{
	 char vowel;
	printf("enter a character :");
	scanf("%c",&vowel);
	
	if (vowel =='a' || vowel =='e' || vowel =='i' ||vowel =='o'|| vowel == 'u'  ) {
		printf("it is a vowel :");
		
	}else {
		printf("it is not a vowel :");
	}
	
	
	
	return 0;
}