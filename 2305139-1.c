#include <stdio.h>
#include <string.h>
void reverse_words(char *s);
void reverse_string(char *string)
{
    if (string == NULL) 
    return ;
    char *end = string;
    if (*end == '\0') return ;
    while (*end != '\0') end++;
    end--;
    char *start = string;
    char temp;
    while (start < end)
    {    
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
    end--;
    }
    reverse_words(string);
}
int main() 
{
    char s[100];
    gets(s);
    int len=strlen(s);
    char *b;
    b=s;
    
    char *p;
    p=s;
    int i=0,j=0;
    for(i=0;*(b+i)==' ';i++)
    for(j=0;*(b+j);i++)
    {
        if((b+i)==' '&&(b+(i-1))==' ')
        {
            continue;
        }
        else{
            *(b+j)=*(b+i);
            j++;
        }
    }
    
    // while(*(p+i)!='\0')
    // {
    //     if(!*(p+i)=' '&& *(p+(i+1))==' ')
    //     {
    //         (b+j)=(p+i); 
    //         j++;
    //     }i++;
    //     if(*(p+i)==' '&& *(p+(i+1))==' ')
    //         continue;
    // }
    // *(b+j)='\0';
    
    reverse_string(b);
    //reverse_words(s);
    printf("%s\n", s);
    return 0;
}
void reverse_words(char *s)
{
    int len = strlen(s);
    int i = 0, j = 0;
    char temp[100];
    for (i = 0; i < len; i++)
    { 
        for (j = 0; i < len; j++, i++)
        {
            if (s[i] == ' ' || s[i] == '.')
            break;
            temp[j] = s[i];
        }  
        while (j > 0)
        {
            j--;
            s[i - j - 1] = temp[j];
        }
    }
}