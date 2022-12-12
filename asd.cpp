/************************************************ 
 * @Author: Movix
 * @Date: 2021-08-17 01:19:53
 * @LastEditTime: 2021-08-17 02:07:31
 * @Github: https://github.com/Moviw
 * @FilePath: /reverse engineering/asd.c
 * @Description: 使用按位与运算将小写转为大写
 ************************************************/
#include <stdio.h>
#include <string.h>
char *change(char *a)
{
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = 0b11011111 & a[i];
    }
    return a;
}
int main()
{
    char a[] = "asdAKDaaadhad2'"; //a:0110 0001
    // char asd = 0b11011111 & a;     //A:0100 0001
    char *b = change(a);
    printf("%s", b); //用1101 1111就能将所有小写字母变为大写,且大写字母不改变
}