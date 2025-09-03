#include <stdio.h>
int main()
{
    int level;                                          // ประกาศตัวแปร level เป็นจำนวนเต็ม  
    printf("Enter level (1-4): ");                      // รับค่าระดับสมาชิก
    scanf("%d", &level);                                // เก็บค่าที่รับมาในตัวแปร level   

    if (level <= 0) {                                   // ถ้าระดับสมาชิกน้อยกว่าหรือเท่ากับ 0
    printf("The level below 1 is not allowed\n");       // แสดงผล The level below 1 is not allowed
}
    else if (level > 4) {                                // ถ้าระดับสมาชิกมากกว่่า 4 
    printf("The level above 4 is not allowed\n");        // แสดงผล The level above 4 is not allowed
}
    else {
        switch (level)                                  //  ถ้าระดับสมาชิกเท่ากับ 1,2,3,4 ใช้ switch-case
        {
        case 1: printf("Beginner\n"); break;            // ถ้าระดับสมาชิกเท่ากับ 1 ให้แสดงผล Beginner
        case 2: printf("Intermediate\n"); break;        // ถ้าระดับสมาชิกเท่ากับ 2 ให้แสดงผล Intermediate
        case 3: printf("Advanced\n"); break;            // ถ้าระดับสมาชิกเท่ากับ 3 ให้แสดงผล Advanced
        case 4: printf("Expert\n"); break;              // ถ้าระดับสมาชิกเท่ากับ 4 ให้แสดงผล Expert
    }
}
return 0;                                       
}
/*โค้ดนี้ถูกออกแบบมา โดยใช้ if-else if สำหรับการคัดกรองเงื่อนไขที่ไม่ถูกต้อง (ค่าที่อยู่นอก 1,2,3,4) ก่อน 
    และใช้ switch-case สำหรับการจัดการเงื่อนไขที่ถูกต้องอย่างเป็นระบบและอ่านง่าย และแสดงผลตาม*/