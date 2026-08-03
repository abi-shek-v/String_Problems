/* Write a C program to remove all spaces from a product serial number entered by the user. */
#include<stdio.h>
int main(){
char serial[100];
int j=0;
printf("Enter the Serial Number:");
scanf("%[^\n]",serial);
for(int i=0;serial[i]!='\0';i++){
if(serial[i]!=' '){
serial[j]=serial[i];
j++;
}
}
serial[j]='\0';
printf("%s",serial);
printf("\n");
return 0;
}
