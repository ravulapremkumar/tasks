#include<stdio.h>
#include<string.h>
void palidrome(char s1[],char s2[])
{
   strcpy(s2, s1);
    strrev(s2);
    if (!strcmp(s1, s2))
    printf("String is palindrome");
    else{
        printf("String is not palindrome");
   
}
int main(){
    char s1[1000], s2[1000];
    printf("enter the string:");
    gets(s1);
     palidrome(s1,s2);

}