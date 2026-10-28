#include <stdio.h>

int main(){
    //1.定义float,double,long double数据类型的变量
    //float单精度小数（精确度小数点后6位）window占4个字节（38位)

    float a=3.14F;
    printf("%f\n",a);//%f 默认输出 6 位小数,这是 printf 默认

    float b=3.14F;//c中小数默认是double,但是%f 默认输出 6 位小数，如果赋值给float类型，后面要加上后缀F

    printf("%f\n",b);

    float c=3.14F;
    printf("%.2f\n",c);//如果想要保留2位

    //double 双精度小数（精确到小数点后15位）window占8个字节（308位)
    double d=3.78;
    printf("%lf\n",d);

    double e=3.78;
    printf("%.2lf\n",e);//如果想要保留2位

    //long double 高精度小数（精确到小数点后18-19位）window占8个字节 其他（12or16)

    long double f = 3.141592653L;
    printf("%.2Lf\n",f);//这是windows系统环境编译的问题，不太支持long double






    //2.利用sizeof测量每一种数据类型占用多少字节

    printf("%zu\n",sizeof(float));//把数据类型写下
    printf("%zu\n",sizeof(a));//也把变量名写下

    printf("%zu\n",sizeof(double));//把数据类型写下
    printf("%zu\n",sizeof(d));//也把变量名写下

    printf("%zu\n",sizeof(long double));//把数据类型写下
    printf("%zu\n",sizeof(f));//也把变量名写下

    return 0;
}