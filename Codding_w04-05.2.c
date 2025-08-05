#include <stdio.h>

void countCall(){
      int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main(){
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;

}
/// ตัวแปร counter ไม่ถูกประกาศเป็น static จึงทำให้ค่าืcu