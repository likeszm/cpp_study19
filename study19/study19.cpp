/*
* 名称: 预处理测试
* 
* 收获: 
* 1、#if （defined A）&&（defined B）
* 2、#自动加双引号变字符串
* 3、##连接字符
* 4、C++提供了一些宏定义
*/
#include <iostream>

#define PI 3.1415926
#define MAX(a,b)  (a > b ? a : b)
#define STR(x) #x
#define CONCAT(a,b) a##b

#if 0
可以在这里写注释
#endif

void define_test(void);

int main()
{

    define_test();

    std::cout << "\n测试完成\n";
    return 0;
}

void define_test(void)
{
    std::cout << "PI = " << PI << std::endl;
    std::cout << "MAX(11,12) = " << MAX(11, 12) << std::endl;
    std::cout << STR(str_test) << std::endl;
    int xxyy = 1000;
    std::cout << "CONCAT(xx,yy) = " << CONCAT(xx, yy) << std::endl;

    std::cout << "__LINE__ = " << __LINE__ << std::endl;
    std::cout << "__FILE__ = " << __FILE__ << std::endl;
    std::cout << "__DATE__ = " << __DATE__ << std::endl;
    std::cout << "__TIME__ = " << __TIME__ << std::endl;

#define A
#define C

#if (defined A)&&(defined B)
    std::cout << "(defined A)&&(defined B)" << std::endl;
#endif // 

#if (defined A)||(defined B)
    std::cout << "(defined A)||(defined B)" << std::endl;
#endif // 

}

