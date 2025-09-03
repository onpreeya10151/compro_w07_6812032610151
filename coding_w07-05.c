#include <stdio.h>              
int main() {                                      //Main function
    int age;                                     //รั่บค่าตัวแปร age เป็นจำนวนเต็ม
    int VIP_level;                               //รับค่าตัวแปร VIP_level เป็นจำนวนเต็ม
    float purchase_amount;                        //รับค่าตัวแปร purchase_amount เป็นจำนวนทศนิยม

    printf("Enter age: ");                             //แสงข้อความ Enter age: รับค่าอายุ
    scanf("%d", &age);                                  //เก็บค่าที่รับมาในตัวแปร age
    printf("Enter your VIP level (1-5): ");              //แสดงข้อความ Enter your VIP level (1-5): รับค่าระดับ VIP
    scanf("%d", &VIP_level);                             //รับค่าที่รับมาในตัวแปร VIP_level
    printf("Enter your purchase amount: \n");             //แสดงข้อความ Enter your purchase amount: รับค่าจำนวนเงินที่ซื้อ
    scanf("%f", &purchase_amount);                        //รับค่าที่รับมาในตัวแปร purchase_amount เป็นทศนิยม
    printf("--- Customer Info ---\n");                                    //แสดงข้อความ --- Customer Info ---
    printf("Age: %d | VIP level: %d | Amount: %.2f\n", age, VIP_level, purchase_amount);          //แสดงข้อความ Age: | VIP level: | Amount:

     // ตรวจสอบเงื่อนไขการได้รับส่วนลด

    if ((age >= 60) || ((VIP_level == 3) || (VIP_level == 4))) {                      //ถ้าอายุ 60 ปีขึ้นไป หรือ VIP level เท่ากับ 3 หรือ 4
        printf("Discount received: 20%%!\n");                                         //แสดงข้อความ Discount received 20%

    } 
    else if (((age >= 30) && (age <= 40)) && (purchase_amount > 2000)) {               //ถ้าอายุระหว่าง 30-40 ปี และ จำนวนเงินที่ซื้อ มากกว่า 2000
        printf("Discount received: 15%%!\n");                                          //แสดงข้อความ Discount received 15%
        
    } 
    else if (((age >= 18) && (age <= 25)) && (purchase_amount > 1000)) {              //ถ้าอายุระหว่าง 18-25 ปี และ จำนวนเงินที่ซื้อ มากกว่า 1000
        printf("Discount received: 10%%!\n");                                         //แสดงข้อความ Discount received 10%
    } 
    else if ((VIP_level == 5) || (purchase_amount > 50000)) {                         //ถ้า VIP level เท่ากับ 5 หรือ จำนวนเงินที่ซื้อ มากกว่า 50000
        printf("Discount received: 25%%!\n");                                         //แสดงข้อความ Discount received 25%
    } 
    else {                                                                    //ถ้าไม่เข้าเงื่อนไขข้างบน
        printf("No Discount applied.\n");                                    //แสงข้อความ No Discount applied.

    printf("Thank you for shopping with us!\n");                          //แสดงข้อความ Thank you for shopping with us!
    }
    printf("Thank you for shopping with us!\n");                          //แสดงข้อความ Thank you for shopping with us!
    return 0;                                    //ทำงานสำเร็จ
}