#include <stdio.h>

int main() {
    
    printf("a=%6.3f%%\n", 0.617); // ใช้ %6.3f ให้มีทศนิยม 3 หลักและเว้นให้ตรงตำแหน่ง

    
    printf("b=%4d%%\n", 25); // %5d คือชิดขวาในช่อง 5 ตัวอักษร

    
    printf("c =%6.3f%%\n", 19.000); // %6.3f = ช่องกว้าง 6 แสดงทศนิยม 3 ตำแหน่ง

    
    printf("d  =%-2d%%\n", 9); // ช่องกว้าง 6 ตัวเลขอยู่ขวา

    
    printf("e=%7.3f%%\n", 124.555); // ช่องกว้าง 8 ตัวอักษร

    
    printf("f=%5.3f%%\n", 0.001); // ช่องกว้าง 6 แสดงทศนิยม 3 หลัก

    return 0;
}