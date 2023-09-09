#include <stdio.h>
#include <DS1302.h>

namespace {

const int kCePin   = 5;  // RST
const int kIoPin   = 6;  // DAT
const int kSclkPin = 7;  // CLK

DS1302 rtc(kCePin, kIoPin, kSclkPin);

String dayAsString(const Time::Day day) {
  switch (day) {
    case Time::kSunday: return "Sunday";
    case Time::kMonday: return "Monday";
    case Time::kTuesday: return "Tuesday";
    case Time::kWednesday: return "Wednesday";
    case Time::kThursday: return "Thursday";
    case Time::kFriday: return "Friday";
    case Time::kSaturday: return "Saturday";
  }
  return "(unknown day)";
}

void printTime() {
  // Obtain the current time from the module
  Time t = rtc.time();

  const String day = dayAsString(t.day);

  // Format time data
  char buf[50];
  snprintf(buf, sizeof(buf), "%s %04d-%02d-%02d %02d:%02d:%02d",
           day.c_str(),
           t.yr, t.mon, t.date,
           t.hr, t.min, t.sec);
  Serial.println(buf);
}
} 

void setup() {
  Serial.begin(9600);
   rtc.writeProtect(false);
   rtc.halt(false);
   // Set the initial time to Friday, September 8th, 2023, 00:00:00
   Time t(2023, 9, 8, 0, 0, 0, Time::kFriday);
   rtc.time(t);
}

void loop() {
  printTime();
  delay(1000);
}
