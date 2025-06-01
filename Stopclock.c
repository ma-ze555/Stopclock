#include<conio.h>
#include <windows.h>
int main () 
{
int h, m, s;
int start;
system("cls");
printf("press 1 to start clock otherwise press 0: ");
scanf("%d", &start);
if(start==0)
{
    printf("we don't want to start clock");
    return 0;

}

else
{
    printf("start");
    while(1)
    {
    for(h=0;h<24;h++)
    {
        for(m=0;m<60;m++)
        {
            for(s=0;s<60;s++)
            {
                if(s==10){
                    printf("\nStop watch");
                    return 0;
                }

                system("cls");
                printf("%d:%d:%d", h, m, s);
                Sleep(1000); 	
            }
            s=0;
        }
        m=0;
    }
    h=0;
    }
}
return 0;
}