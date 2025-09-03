#include <stdio.h>
int main() {
    int Level ;                                                              // ประกาศตัวแปร Level เป็นจำนวนเต็ม
    printf("Enter membership level(1-4): ");                                 // รับค่าระดับสมาชิก
    scanf("%d", &Level);                                                    // เก็บค่าที่รับมาในตัวแปร Level       
    switch (Level) {
        case 1:                                                             // ถ้าระดับสมาชิกเท่ากับ 1
            printf("Silver Member :You get 5%% discount\n");                // แสดงผล Silver Member :You get 5% discount 
            break;                                                           // ออกจากเงื่อนไข                            
        case 2:                                                             // ถ้าระดับสมาชิกเท่ากับ 2
            printf("Gold Member :You get 10%% discount+Reward points\n");   // แสดงผล Gold Member :You get 10% discount+Reward points 
            break;                                                          // ออกจากเงื่อนไข 
        case 3:                                                             // ถ้าระดับสมาชิกเท่ากับ 3
            printf("Platinum Member :You get 15%% discount + Reward points + Birthday gift\n"); // แสดงผล Platinum Member :You get 15% discount + Reward points + Birthday gift
            break;                                                           // ออกจากเงื่อนไข
        case 4:                                                              // ถ้าระดับสมาชิกเท่ากับ 4
            printf("Diamond Member : You get all prerogative + VIP events\n");// แสดงผล Diamond Member : You get all prerogative + VIP events
            break;                                                          // ออกจากเงื่อนไข                                               
        default:                                                            // ถ้าระดับสมาชิกไม่เท่ากับ 1,2,3,4  หรือค่าอื่นๆ             
         printf("Invalid membership level\n");                              // แสดงผล Invalid membership level
    }

    return 0;
}
/*ทำไมถึงใช้ swith-case
    อ่านง่ายและเป็นระเบียบ: โค้ดที่ใช้ switch-case สำหรับการตรวจสอบเงื่อนไขที่ค่าคงที่ (เช่น ระดับสมาชิก 1, 2, 3, 4) จะดูสะอาดตา
    ประสิทธิภาพ: ในบางภาษาและบางคอมไพเลอร์ switch-case อาจมีประสิทธิภาพในการทำงานที่เร็ว
    ตรงตามวัตถุประสงค์: โครงสร้าง switch-case ถูกออกแบบมาเพื่อจัดการกับสถานการณ์ที่ต้องตัดสินใจจากค่าคงที่เพียงค่าเดียว ซึ่งในกรณีนี้คือ "ระดับสมาชิก" ที่มีค่าเป็น 1, 2, 3, หรือ 4 พอดี
ดังนั้น ในกรณีนี้ การใช้ switch-case จะทำให้โค้ดของคุณดูดีขึ้นและมีประสิทธิภาพมากกว่าเล็กน้อยครับ*/