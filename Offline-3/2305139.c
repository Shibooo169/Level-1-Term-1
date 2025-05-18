#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char a[]="binary",b[]="listen",c[]="earth";
char a1[50],y[50];
char ab[50]="there is a secret code",bc[50]="attack at dawn",ca[50]="meet me at the park";
char a2[50],y[50];
char abc[]="program",bca[]="network",cab[]="science";
char ss1[]="gram",ss2[]="work",ss3[]="ence";
char a3[50],y[50];
int number;

char strcpy(char a1[],char a[]);
void scramble(char str[]);
int string_length(char str[]);
int str_compare(char a[],char b[]);

int menu_bar()
{
    char a,b;
    printf("Welcome To This Exciting Game:)\n");
    printf("1.Start Game\n2.Exit\nEnter your choice:");
    int n;
    scanf("%d",&n);
    if(n==2)
    return 0;
    else if(n==1)
    return 1; 

}

void randomly_select()
{
    srand(time(0));
    int i=rand()%3;
    switch(i){
        case 0: strcpy(a1,a);
                break;
        case 1: strcpy(a1,b);
                break;
        default: strcpy(a1,c);  
    }
    strcpy(y,a1);
    //scramble(y);

}
int string_length(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }return count;
}
char strcpy(char s1[],char s2[])
{
    int n=string_length(a);
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }s1[i]='\0';
    
}
void scramble(char str[])
{
    srand(time(0));
    int n=string_length(str);
    for(int i=0;i<n;i++)
    {
        int j=rand()%(i+1);
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }printf("%s\n",str);
}

int str_compare(char a[],char b[])
{
    int x=string_length(a);
    int cnt=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            cnt++;
        }
        else break;
    }
    if(cnt==x)
    return 1;
    else return 0;
}
int counter(int j)
{
    int pnt1;
    if(j<=3)
    pnt1=(3-j)*10+10;
    else if(j>3)
    pnt1=0;
    return pnt1;
}



void randomly_selects()
{
    srand(time(0));
    int i=rand()%3;
    switch(i){
        case 0: strcpy(a2,ab);
                break;
        case 1: strcpy(a2,bc);
                break;
        default: strcpy(a2,ca);  
    }
    strcpy(y,a2);
    //scramble(y);

}
/**char strcpy(char s1[],char s2[])
{
    //int n=string_length(a);
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }s1[i]='\0';
    
}**/
void encrypt(char rma[])
{
    int i=0;
    while(rma[i]!='\0')
    {
        //if((rma[i]=65||rma[i]>65)&&( rma[i]<90||rma[i]=90))
        if(rma[i]>='A' && rma[i]<='Z')
        {
            int temp=rma[i]-'A'+3;
            temp=temp%26;
            rma[i]=temp+'a';
        }
        //else if((rma[i]='a'||rma[i]>'a')&&( rma[i]<'z'||rma[i]='z'))
        else if(rma[i]>='a'&& rma[i]<='z')
        {
            int temp=rma[i]-'a'+3;
            temp=temp%26;
            rma[i]=temp+'a';
        }
        i++;
    }
        printf("%s\n",rma);
}
/**int string_length(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }return count;
}**/
/**int str_compare(char a[],char b[])
{
    int x=string_length(a);
    int cnt=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            cnt++;
        }
        else break;
    }
    if(cnt==x)
    return 1;
    else return 0;
}**/
int counters(int j)
{
    int pnt2;
    if(j<=3)
    pnt2=(3-j)*10+10;
    else if(j>3)
    pnt2=0;
    return pnt2;
}


void randomly_selectss()
{
    srand(time(0));
    int i=rand()%3;
    switch(i){
        case 0: strcpy(a3,abc);
                strcpy(y,ss1);
                printf("pro____");
                break;
        case 1: strcpy(a3,bca);
                strcpy(y,ss2);
                printf("net____");
                break;
        default:strcpy(a3,cab);
                strcpy(y,ss3); 
                printf("sci____");
    }
    //strcpy(y,a3);
    //scramble(y);
}

/**char strcpy(char s1[],char s2[])
{
    //int n=string_length(a);
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }s1[i]='\0';
    
}**/

/**int substring(int num,char chr)
{
    int yz;
    switch (num){
        case 0: yz=str_compare(ss1,chr);
                break;
        case 1: yz=str_compare(ss2,chr);
                break;
        case 2: yz=str_compare(ss3,chr);
                break;
    }
    return yz;
    
}**/
/**int string_length(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }return count;
}**/

/**int str_compare(char a[],char b[])
{
    int x=string_length(a);
    int cnt=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            cnt++;
        }
        else break;
    }
    if(cnt==x)
    return 1;
    else return 0;
}**/
int counterss(int num1,int num2,int j)
{
    int pnt3;
    if(j<=3)
    {
        pnt3=(3-j)*10+10-(num1+num2)*2;
    }else if(j>3)
    {
        pnt3=0;
    }
    return pnt3;
}



int main()
{
    int r=menu_bar();
    if(r==0)
    goto game_complete;
    else if(r==1)
    {
        char str2[10];
        char fcb[50];
        char guess[50];
        int numb,buet,counter1=0,counter2=0,i1,i2,i3,len;
        printf("Starting Anagram Challenge....\n");
        randomly_select();
        gets(str2);
        for(i1=1;i1<=3;i1++)
        {
            printf("Scrambled Word:");
            //randomly_select();
            scramble(y);
            printf("Your guess:");
            gets(str2);
            int c1=string_length(y);
            int c2=string_length(str2);
            if(c1==c2)
            {
                int r=str_compare(a1,str2);
                if(r==1)
                {
                    printf("Correct!You solved it in %d attempt(s).\n",i1);
                    break;
                }
                else if(r==0)
                {
                    printf("Incorrect!Try again.\n");
                }
            }
            else printf("Incorrect! Try again.\n");
        
        }
        int point1=counter(i1);
        if(point1==30)
        point1+=5;
        printf("\n\n");

        printf("Starting Caesar Cipher Challenge(Shift:3).........\n");
        randomly_selects();
        //scanf("%s",fcb);
        printf("Encrypted phrase:");
        encrypt(y);
        for(i2=1;i2<4;i2++)
        {
            printf("Your guess:");
            gets(fcb);
            int r=str_compare(a2,fcb);
            if(r==1)
            {
                printf("Correct!You decrypted it in %d attempt(s)\n",i2);
                break;
            }else if(r==0)
            {
                printf("Incorrect! Try again.\n");
            }
        }
        int point2=counters(i2);
        if(point2==30)
        point2+=5;
        printf("\n\n");


        printf("Starting Word Guessing Challenge.......\nHint:");
        randomly_selectss();
        printf("\nSelect an option: 1.Write answer 2.Check Substring 3.Check Length\n");
        //gets(guess);
        for(i3=1;i3<4;i3++)
        {
             label:
             scanf("%d",&numb);
             if(numb==2)
             counter1++;
             if(numb==3)
             counter2++;
             //if(counter1<2&&counter2<2)
             {
                if(numb==1)
                {
                    printf("Write answer:");
                    scanf("%s",&guess);
                    int xy=str_compare(a3,guess);
                    if(counter1>1)
                    counter1=1;
                    if(counter2>1)
                    counter2=1;
                    if(xy==1)
                    {
                        printf("Correct!You guessed it in %d attempt(s) using %d utility functions.\n",i3,counter1+counter2);
                        break;
                    }
                    else if(xy==0)
                    {
                        printf("Incorrect! Try again.\n");
                    }
                }
                else if (numb==2)
                {
                    if(counter1>1){
                        printf("Utility function already used.\n");
                        goto label;
                    }
                    printf("Enter Substring:");
                    scanf("%s",&guess);
                    //int zx=substring(number,guess);
                    int zx=str_compare(y,guess);
                    if(zx==1)
                    {
                        printf("Yes\n");
                        //break;
                    }
                    else if(zx==0)
                    {
                        printf("No.\n");
                    }
                    i3--;
                }
                else if(numb==3)
                {
                    if(counter2>1){
                        printf("Utility function already used.\n");
                        goto label;
                    }
                    len=string_length(a3);
                    printf("Enter length:");
                    scanf("%d",&buet);
                    if(buet==len)
                    {
                        printf("Yes\n");
                    }else 
                    printf("No\n");
                    i3--;
                }
             }
        }
        int point3=counterss(counter1,counter2,i3);
        if(point3==26||point3==30||point3==28)
        point3+=5;
        printf("\n\n");
        printf("Game over!\nYour total score:%d",point1+point2+point3);
    }
    game_complete:
    return 0;
}