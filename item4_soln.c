#include <stdio.h>

int main(){
    char s[20];
    printf("Enter one-syllable regular verb: ");
    scanf("%s",s);

    int len = 0;
    for(;s[len]!='\0';len++);

    if(s[len-1]=='e'){
        s[len++] = 'd';
    }

    else if(s[len-1]=='y'){
        if(s[len-2]=='a' || s[len-2]=='e' || s[len-2]=='i' ||
           s[len-2]=='o' || s[len-2]=='u'){
            s[len++] = 'e';
            s[len++] = 'd';
           }
        else{
            s[len-1] = 'i';
            s[len++] = 'e';
            s[len++] = 'd';
        }
    }
    else if(!(s[len-3]=='a' || s[len-3]=='e' || s[len-3]=='i' || s[len-3]=='o' || s[len-3]=='u') &&
             (s[len-2]=='a' || s[len-2]=='e' || s[len-2]=='i' || s[len-2]=='o' || s[len-2]=='u') &&
            !(s[len-3]=='a' || s[len-3]=='e' || s[len-3]=='i' || s[len-3]=='o' || s[len-3]=='u')){
            s[len++] = s[len-1];
            s[len++] = 'e';
            s[len++] = 'd';
    }
    else{
        s[len++] = 'e';
        s[len++] = 'd';
    }

    s[len] = '\0';
    printf("The past form is %s\n",s);
}
