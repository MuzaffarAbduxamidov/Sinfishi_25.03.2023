//25.03.2023. Shanba
//Mavzu: for loop
//Increment -> Oshirish
//  1.Usul: Pre-Increment ++son
//   Hotiradagi qiymatni ya'ni o'zgaruvchini birinchi bittaga oshiradi, keyin foydalanish  uchun ruxsat beradi.
//  2.Usul: Post-Increment son++
//   Birinchi foydalanish uchun ruxsat beradi, keyin hotiradagi qiymatni ya'ni o'zgaruvchini bittaga oshiradi.
//Decrement -> Kamaytirish
//  1.Usul: Pre-Decrement --son
//   Birinchi kamaytiradi, keyin amal bajaradi.
//  2.Usul: Post-Decrement son--
//   Birinchi amal bajaradi, keyin bitta ayriladi.

//for(strat;stop;step)
//Misol:
//  for(int a=1; a<=5; a++){}

//for ni do while va while dan farqi:
//1. Star-stop-step kompotentlari hammasi bitta joyda bo'ladi.
//2. Forda cheksiz ishlashi uchun shart qabul qilmaydi
//3. For while va do whilega qaraganda 70/80% ko'p ishlatilinadi.

//for(;;){} -> forni cheksi aylantiradi.
//Har bitta forrni ichida ochilgan o'zgaruvchi lakal hisoblanadi, ya'ni faqat unga tegishli bo'ladi. Undan tashqari foydalanib bo'lmaydi.
//for ni ichidagi o'zgagruvchi ya'ni start har doim bir marta ishlatiladi.
//forni ichida va fordan tashqari bir xil o'zgaruvchilar ochsa bo'ladi. Ochilgan o'zgaruvchilarni bir xil nom bilan nomlasa ham bo'lasa.
//forni ichida ichma-ich for qilsa bo'ladi.
//Agar forni ichida start bermasa, ya'ni fordan tashqari oldinda ochilgan o'zgaruvchilardan foydalanmoqchi bo'linsa startga o'zgaruvchini berish shart emas.
//Misol:
// int a=90;
// int b=10;
// for(;a<=5;a++);
//forda o'zgaruvchi berilmada, chunki tepadagi intejer data typeda ochilgan a variableni oldi. Nimaga?Chunki bir aynan stop va stepga qaysi variableni olishi kerakligini ko'rsatib berdik.
//forni tarqoq holatda whilega o'xshab qilsa ham bo'ladi. Buning uchun stepni fordan chiqarib tashlanadi.
//forda harxil turdagi data type ochsa bo'ladi.
//forda bitta data typeda ochilgan variableda stop amalni bir marta  bajarsa bo'ladi.
//forda startida bir necha data typeda variable ochsa bo'ladi.
//forda stepida bir necha variableda ish bajarsa bo'ladi.
//Misol:
//for(int i=1,b=5; i<=b; i++, b--, hisoblagich++){
//   printf("aylanish -> %d || i = %d\tb = %d\n", i,i,b);
//}
//   printf("Hisoblagich -> %d\n", hisoblagich);











#include <stdio.h>

int main(){

   int n;
   printf("Son kiriting:");
   scanf("%d", &n);

   for(;n>=1;n--){
     printf("%d\n", n);
   }


}
