/* 
Write a C program to count the number of words in a sentence entered by a user.
*/
#include<stdio.h>
int main(){
char str[100];
fgets(str,sizeof(str),stdin);
int word=0;
for(int i=0;str[i]!='\0';i++){
if(i==0 && str[i]!=' ' &&str[i]!='\n' || str[i]!=' ' && str[i]!='\n' && str[i-1]==' '){ 
word++;
}
}
printf("The Total words are %d\n",word);
return 0;
}

