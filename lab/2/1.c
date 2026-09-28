#include <stdio.h>

int main(){
	int age;
	printf("enter your age : ");
	scanf("%d",&age);
	if(age >= 18){
		printf("you are eligible \n");
	}else if( age < 18 ) {
		printf("you are not eligible \n");
	}else{
	printf("input is not a valid type \n");
}
	int age_a = 18;
	if(age_a < 1){
		printf("Your age is shorter than 1 \n");}
	else if( age = 18 ){
		printf(" your age is 18 \n");
	};
	// Assignment
	int marks = 20;
	if (marks >= 80){
	printf("you passed !");
	}else if( marks  < 80  && marks >= 50 ){
	printf("you barely passed!");
	}else{
	printf("you passed away (failed)!");
	};

	return 0;
}
