/* 
Write a C program to count how many times a particular character
appears in a paragraph.
*/
#include<stdio.h>
int main(){
char str[100];
char ch;
int count=0;
fgets(str,sizeof(str),stdin);
printf("Enter the Character:");
scanf("%c",&ch);
for(int i=0;str[i]!='\0';i++){
if(str[i]==ch){
count++;
}}
printf("%d\n",count);
return 0;
}
