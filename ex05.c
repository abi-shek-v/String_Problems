/* 
Write a C program to reverse a password string and display the reversed version.
*/
#include<stdio.h>
int main(){
char str[100];
fgets(str,sizeof(str),stdin);
int len=0;
while(str[len]!='\n' && str[len]!='\0'){
len++;
}
for(int i=len-1;i>=0;i--){
printf("%c",str[i]);
}
printf("\n");
return 0;
}
