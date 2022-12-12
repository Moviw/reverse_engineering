#include <Windows.h>
int aaa = 1;
int main()
{
    MessageBox(0, NULL, NULL, MB_OK);
    aaa = 0x00778899;

    int b = aaa;
    return 0;
}