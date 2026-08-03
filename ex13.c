/* Write a C program to concatenate a first name and last name without using strcat(). */
#include<stdio.h>
int main(){
int i,j;
char str1[100];
char str2[100]; 
printf("Enter the FirstName:");
scanf("%s",str1);
printf("Enter the LastName:");
scanf("%s",str2);
for(i=0;str1[i]!='\0';i++);
str1[i]=' ';
i++;
for(j=0;str2[j]!='\0';j++){
str1[i]=str2[j];
i++;
}

str1[i]='\0';
printf("%s\n",str1);
return 0;
}
