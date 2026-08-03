/*Write a C program to copy one employee name into another string without using strcpy().*/
#include<stdio.h>
int main(){
int i;
char str1[100],str2[100];
printf("Enter the employee1:");
scanf("%s",str1);
for(i=0;str1[i]!='\0';i++){
str2[i]=str1[i];
}
str2[i]='\0';
printf("Old Employee name is %s\n",str1);
printf("new Employee name is %s\n",str2);
return 0;
}
