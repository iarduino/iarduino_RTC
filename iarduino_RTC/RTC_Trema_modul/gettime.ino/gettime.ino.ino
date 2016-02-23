// Бибилиотека разработана для RTC модуля http://iarduino.ru/shop/Expansion-payments/chasy-realnogo-vremeni-rtc-trema-modul.html
// Пример считывания текущего времени с RTC модуля (DS1307) и вывод в "Последовательный порт" :


#include <iarduino_RTC.h>
RTC    time;
void setup() {
    delay(300);
    Serial.begin(9600);
    time.begin(RTC_DS1307);
}
void loop(){
    if(millis()%1000==0){ // если прошла 1 секунда
      Serial.println(time.gettime("d-m-Y, H:i:s, D")); // выводим время
      delay(1); // приостанавливаем на 1 мс, чтоб не выводить время несколько раз за 1мс
    }
}

