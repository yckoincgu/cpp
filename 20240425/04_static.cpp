#include <iostream>
 
void func(void);
 
static int count = 10; /* 全域 */
 
int main()
{
    while(count--)
    {
       func();
    }
    return 0;
}

void func( void )
{
    static int i = 5; // 局部
    i++;
    std::cout << "局部 i = " << i ;
    std::cout << " , 全域 count = " << count << std::endl;
}
