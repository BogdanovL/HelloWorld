// 32 bit pls
#include <stdio.h>
#define NELEMS(n) (sizeof(n) / sizeof(n[0]))
static int i;
static void __2 (int **(*r[1])[1]) { ((**r[0])[0])++;} 
int main()
{
    void (*h) (int **(*[1])[1]);
    h = __2;
    enum
    {
        ZERO = 0,
        ONE = 0x726c6421,
        TWO = 0x48656c6c,
        THREE = 0x6f20576f,
    } thenum_e[] = { TWO, THREE, ONE, ZERO };
        int *x = (int*)&thenum_e;
        while ("not done printing hello world")   
        { 
            if (++i == NELEMS(thenum_e)) break;        
            char *y = (char*)x++;

            unsigned X3 = (((0xFF00FF00 & *--x) >> 8) | ((0x00FF00FF & *x) << 8));
            int _a = 0xDEADBEEF; 
            unsigned X6 = ( *((char*)(&_a)) == 0xDE ? *x : (((0xFFFF0000 & X3) >> 16) | ((0x0000FFFF & X3) << 16)));
            int **(*X1[1])[1];
            int **X2[] = {&x};
            X1[0] = &X2;
            __2(X1);
            char *z = (char*)(&X6);       
            printf("%c%c%c%c", z[0], z[1], z[2], z[3]); 
        }
}
