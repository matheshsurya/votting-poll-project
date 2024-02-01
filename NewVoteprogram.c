#include<stdio.h>
#include<string.h>
int age,ham,apk,ntk,pkt,bkt,choice;
char name[25];
 int check()
 {
    printf("\nEnter Your Name :");
    scanf("%s",&name);
    printf("\nEnter Age");
    scanf("%d",&age);
    strupr(name);
    if(age>=18)
    {
        printf("\nHello %s!",name);
        printf("\nYou are Eligible for Vote");
        printf("\nWhich Party Do You Want To Vote");
        printf("\nTo Vote  HAM    Press 1");
        printf("\nTo Vote  APK    Press 2");
        printf("\nTo Vote  NTK    Press 3");
        printf("\nTo Vote  PKT    Press 4");
        printf("\nTo Vote  BKT    Press 5");
        scanf("%d",choice);
        return choice 
           

    }
    else
    {
        printf("\nHello %s!",name);
        printf("\nYour are Not Eligiable for Vote");
        printf("\nYou have %d Years to Vote",18-age);
    }
    return 0;
 }
int vote()
{
    switch (choice)
        {
        case 1:
              printf("\n You Voted HAM");
              ham++;
              break;
        

         case 2:
              printf("\n You Voted APK");
              apk++;
              break;     
        case 3:
              printf("\n You Voted NTK");
              ntk++;
              break;
        case 4:
              printf("\n You Voted PKT");
              pkt++;
              break;
        case 5:
            printf("\n You Voted BKT");
            bkt++;
            break;
        }
}









int main()

{
    
    check();
    vote();
    
}
