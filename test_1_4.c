#include<stdio.h>

int main()//循环语句
{
    int i = 0;
    while(i<13)
    {
        printf("观看第%d集\n", i);
        i++;
    }
    if(i==1)
    printf("看番剧\n");
    if(i==13)
    printf("获得快乐\n");


    return 0;
}