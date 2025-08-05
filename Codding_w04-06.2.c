#include <stdio.h>

const int GLOBAL_RATE = 20;

void Calculate(){
    const int LOCAL_BONUS = 80;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main(){
    Calculate();
    const int LOCAL_BONUS = 80;
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
    return 0;
}
// เกิดอะไรขึ้นถ้าเราเขียนGLOBAL_RATE=20; หรือ LOCAL_BONUS=80; คำตอบ คำของทั้งสองจะเปลี่ยนไปในทางที่มากขึ้นแต่ไม่มีข้อผิดพลาดในการรันโค้ด
//ค่าคงที่GLOBALและLOCALต่างกันตรงที่ GOBAL จะสามารถเข้าถึงได้ทุกฟังก์ชันในโปรแกรม แต่LOCALจะสามารถเข้าถึงได้เฉพาะในฟังชันก์ calculate เท่านั้น