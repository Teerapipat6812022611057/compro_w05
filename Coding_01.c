#include <stdio.h>

int main() {
    char name = 'K'; //ตัวอักษรตัวแรกองชื่อ
    int age = 18; //อายุ
    double weight = 75.5; //น้ำหนัก

    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}
