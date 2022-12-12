/************************************************ 
 * @Author: Movix
 * @Date: 2021-08-17 03:16:48
 * @LastEditTime: 2021-08-17 03:17:59
 * @Github: https://github.com/Moviw
 * @FilePath: /reverse engineering/001.cpp
 * @Description: 
 ************************************************/
#include <Windows.h>
int aaa = 1;
int main()
{
    MessageBox(0, NULL, NULL, MB_OK);
    aaa = 0x00778899;
    return 0;
}