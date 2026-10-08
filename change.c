#include <stdio.h>
//stdio 是“standard input/output”（标准输入输出）的缩写。你的代码里用到了 printf（打印)
//这个功能都住在这个头文件里。不写这一行，编译器就不认识它们。

int main()
//main 是程序的“大门”。不管代码有多长，电脑永远从这里开始执行。
//int 表示这个函数执行完会返回一个整数。
//后面的 { 是函数内容的开始。
{
    int price = 0;
    //告诉电脑：“我要一个叫 x 的盒子，专门用来装整数，先给它放个 0 进去。” 
    //这个 price 就是用来存你输入金额的。

    //scanf("%d", &price);  
    //%d：表示“我要接收一个整数”。
    //&price：& 是“取地址”符号。意思是“把接收到的数字，直接存进 price 这个盒子的地址里”
    printf("请输入金额（元）：");
    //printf 是“print formatted”（格式化打印）。它把引号里的中文原样输出到黑窗里，提醒用户该输数字了。
    price=23;
    int change = 100 - price;
    printf("找您%d元。\n", change);

    return 0;
}