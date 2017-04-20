#include<conio.h>
#include<stdio.h>
#include<string.h>
char chuyendoi(char s1[100])
{
            int i;
            for(i=0; i< strlen(s1); i++)
            {
                        if(i %2==0)
                        {
                                    if(s1[i] > 95 && s1[i] < 122)
                                    {
                                                s1[i] -= 32;
                                    }
                        }
                        else
                        {
                                    if(s1[i] >65 && s1[i] < 92)
                                    {
                                                s1[i] += 32;
                                    }
                        }
            }
            puts(s1);
}
int main()
{
            char s1[100];
            printf("\n Nhap chuoi: ");
            gets(s1);
            chuyendoi(s1);
}
