#include<stdio.h>
#include<string.h>//strlen函数需要调用的头文件
int game()
{
    int i=0,j=0,m=0;
    printf("请输入你要猜的数字：\n");
    srand((unsigned)time(NULL));//按时间产生一个随机值
    j=rand()%100;//产生的值在1~100之间
    for(m=1;m<10000;m++)
        {
        scanf("%d",&i);//
        if(i>100)
            printf("请重新输入0~100之间的数!\n");
       else if(i>j)
       printf("太大了！\n");
       else if(i<j)
       printf("太小了！\n");
       else if("j==i")
       {
        printf("恭喜你，猜对了！\n");
        break;
       }
        }
        main()
        ;
    return 0;
}
int main()
{
    int arr[20];
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("             猜数字游戏              \n");
    printf("-------------------------------------\n");
    printf("*************************************\n");
    printf("*************************************\n");
    printf("*************************************\n");
    printf("*  1.开始游戏     *   2.退出游戏    *\n");
    printf("*************************************\n");
    printf("*************************************\n");
    printf("*************************************\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    scanf("%s",arr);
    if(strcmp(arr,"1")==0)
    {
         game();//条件满足时进入，用户定义的game（）函数
    }
    else if(strcmp("2",arr)==0)//比较输入的字符串和字符串“2”是否相等，相等则执行
    {
        printf("拜拜，欢迎下次再来玩！！");
    }
    return 0;

}
