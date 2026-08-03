/* Write a C program to check whether a given character exists in a string entered by the user. */
#include<stdio.h>
int main(){
int i,found=0;
char str[100];
printf("Enter the string:");
scanf("%[^\n]",str);
char ch;
printf("Enter the Character:");
scanf(" %c",&ch);
for(int i=0;str[i]!='\0';i++){
if(str[i]==ch){
found=1;
break;
}
}
if(found)
printf("The character is found\n");
else
printf("The character is not found\n");
return 0;
}
