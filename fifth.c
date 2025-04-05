//ASHIQ ALI N K 24100673
#include <stdio.h>
void sort_string(char str[]){
    int i,j,len;
    char temp;
    len=strlen(str);
    for (i=0;i<len-1;i++){
        for (j=i+1;j<len;j++){
            if (str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}
int char_count(char str[],char ch){
    int i,count=0;
    for (i=0;str[i]!='\0';i++){
        if (str[i]==ch){
            count++;
        }
    }
    return count;
}
int palindrome(char str[]){
    int i,j,len;
    len=strlen(str);
    for (i=0;j=len-1;i<j;i++;j--){
        if (str[i]!=str[j]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str[100],ch;
    int count;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    char sorted_str[100];
    strcpy(sorted_str,str);
    sort_string(sorted_str);
    printf("\nenter a character to count its occurences: ");
    scanf("%c",&ch);
    count=char_count(str,ch);
    printf("charac %c occurs %d times in the string %s",ch,count,str);
    if (palindrome(str)){
        printf("\n%s is a palindrome",str);
    }
    else{
        printf("\n%s is not a palindrome",str);
    }
    return 0;
}