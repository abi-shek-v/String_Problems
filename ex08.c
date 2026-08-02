/* 
Write a C program to convert all uppercase letters
in a company name into lowercase.
*/
#include<stdio.h>
int main(){
char str[100];
scanf("%[^\n]",str);
for(int i=0;str[i]!='\0';i++){
if(str[i]>='A' && str[i]<='Z'){
str[i]=str[i]+32;
}
}
printf("%s",str);
printf("\n");
return 0;
}
