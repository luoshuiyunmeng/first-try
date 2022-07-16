#include<stdio.h>
int main()
{
    int input = 0;
    printf("看动漫吗？(1/0)");
    scanf("%d", &input);
    if (input == 0)
    printf("没问题");
    if (input == 1)
       printf("看过时光代理人吗？(1/0)");
       scanf("%d", &input);
       if (input == 1)
          printf("好耶");
       else
          printf("没问题") ;  

    return 0;
}