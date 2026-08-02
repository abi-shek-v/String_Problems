/* 
Write a C program to count the number of vowels and consonants in a customer's feedback message.
*/
#include<stdio.h>
int main(){
char str[100];
fgets(str,sizeof(str),stdin);
int vow=0,con=0;
for(int i=0;str[i]!='\0';i++){
if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a' && str[i]<='z')){ 
if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
vow++;
}
else{
con++;
}
}
}
printf("The Total Vowels are %d\n",vow);
printf("The Total Consonants are %d\n",con);
return 0;
}
