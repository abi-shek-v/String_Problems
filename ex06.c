#include<stdio.h>
int main(){
char str[100];
scanf("%s",str);
int len=0,flag=1;
while(str[len]!='\0'){
len++;
}
for(int i=0;i<len/2;i++){
if(str[i]>='A'||str[i]<='Z'||str[i]>='a'||str[i]<='z'){
if(str[i]!=str[len-i-1]){
flag=0;
break;
}
}
}
if(flag)
printf("It is a Palindrome\n");
else
printf("It is not a Palindrome\n");
return 0;
}
