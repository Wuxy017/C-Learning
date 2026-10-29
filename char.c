#include <stdio.h>
int main(){

    //定义char数据类型的变量
    //char 字符 取值范围ASCII码表中所有的内容内容 window1字节
  char c1='a';
  printf("%c\n",c1);

  char c2='1';
  printf("%c\n",c2);

  char c3='A';
  printf("%c\n",c3);

  char c4='.';
  printf("%c\n",c4);

  //利用sizeof测量占用多少字节

  printf("%zu\n",sizeof(char));
  
  return 0;
}