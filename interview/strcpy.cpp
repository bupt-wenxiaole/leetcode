#include <iostream>
using namespace std;
#include <assert.h>

char *strcpy_(char *dst,const char *src)
{
    assert(dst!=NULL && src!=NULL);
    
    char *dst_tmp=dst;
    while((*dst++ = *src++)!='\0')
    *dst = '\0';               //这句必须要，否则无法判定字符串结束条件。  编译器告警，运行会出现不同的结果
    return dst_tmp;
    
}


int main(int argc, char const *argv[])
{
    char a[10];
    const char *b="abcde";
    strcpy_(a,b);
    cout<<a<<endl;
    return 0;
}