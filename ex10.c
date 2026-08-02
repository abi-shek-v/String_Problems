/* 
Write a C program to replace every occurrence of a given character
with another character in a sentence.
*/
#include<stdio.h>
int main(){
char str[100];
char oldch,newch;
fgets(str,sizeof(str),stdin);
printf("Original String:%s",str);
printf("Enter the old Character:");
scanf(" %c",&oldch);
printf("Enter the new Character:");
scanf(" %c",&newch);
for(int i=0;str[i]!='\0';i++){
if(str[i]==oldch){
str[i]=newch;
}
}
printf("%s\n",str);
return 0;
}
