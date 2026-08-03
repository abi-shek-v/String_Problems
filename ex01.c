/* 
Write a C program to accept a student's full name and display it exactly as entered.
*/
#include<stdio.h>
int main(){
char str[100];
fgets(str,sizeof(str),stdin);
printf("%s\n",str);
return 0;
}
