#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int vowel = 0,consonent=0;
    gets(str);
    int len;
    len = strlen(str);
    for(int i = 0;i<len;i++){
        if(str[i]=='a'||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
            consonent++;
        }
    }
    printf("%d %d",vowel,consonent);

    
}