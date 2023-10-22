#include <stdio.h>
#include <locale.h>


 int main(){
   setlocale(LC_ALL, "Russian");

   int V = 10, U = 3, T1 = 7, T2 = 10;
   printf("Скорость лодки = %d\n", V);
   printf("Скорость течения = %d\n", U);
   printf("Время движения по озеру = %d\n", T1);
   printf("Время движения по реке = %d\n", T2);
   printf("Расстояние, пройденное лодкой = %d\n", V*T1 + (V-U)*T2);

    return 0;
 }