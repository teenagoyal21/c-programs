#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            printf("%c is a vowel",c);
        
        else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            printf("vowel");
        
        else
            printf("%c is a consonent",c);
        
    }
    else
        printf("%c is a symbol",c);
    
    return 0;
}