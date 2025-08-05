#include <stdio.h>

void countCall(){
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main(){
    printf("Starting function calls...\n");
    countCall();
    printf("After frist call:\n");
    countCall();
    return 0;
    
}
/// ตัวแปร counter ถูกประกาศเป็นstatic ทำให้ค่าตัวแปรไม่ถูกรีเซ็ตเป็น0 ทุกครั้งที่ถูกเรียก จึงเกิดผลลัพธ์ตามนี้