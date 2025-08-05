#include <stdio.h>

int main(){
   char nameInital = 'P'; // char ใช้กำหนดตัวอักษร
   int age = 18; // int ใช้กำหนดเลขอายุ
   float weight = 70.0; // float ใช้กำหนดน้ำหนัก
   char gender [] = "female"; // char ใช้กำหนดเพศ
   printf("nameInitial : %c\n", nameInital); // %c ใช้ประกาศตัวแปรที่เป็นตัวอักษรเดียว
   printf("Age: %d\n", age); // %d ใช้ประกาศตัวแปรเลขจำนวนเต็ม
   printf("weight: %.1f kg\n", weight); // %.1f ใช้ประกาศตัวแปรเลขทศนิยม
   printf("Gender: %s\n", gender); // %s ใช้ประกาศตัวแปรข้อความ

   return 0;
}