/* Write a C program to compare two usernames without using strcmp() and determine whether they are identical. */
#include<stdio.h>
int main(){
char username1[100];
char username2[100];
int same=1;
printf("Enter the Username 1:");
scanf(" %[^\n]",username1);
printf("Enter the Username 2:");
scanf(" %[^\n]",username2);
for(int i=0;username1[i]!='\0' || username2[i]!='\0';i++){
if(username1[i]!=username2[i]){
same=0;
break;
}
}
if(same)
printf("The username is Same\n");
else
printf("The username is not Same\n");
return 0;
}
