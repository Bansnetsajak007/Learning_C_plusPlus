/* wap to define a class with data member hour minuetes and seconds add two time and display 

*/

#include <iostream>
#include <iomanip>

class Time {
private:
   int hour;
   int minutes;
   int seconds;

public:
   Time() {}  //default constructor
   Time(int h, int m, int s) : hour(h), minutes(m), seconds(s) {}

   friend Time add_time(const Time& t1, const Time& t2);

   //friend function which overloads << operator
   friend std::ostream& operator<<(std::ostream& os, const Time& t) {
       os << std::setfill('0') << std::setw(2) << t.hour << ":"
          << std::setw(2) << t.minutes << ":"
          << std::setw(2) << t.seconds;
       return os;
   }
};


//friend function to add two times
Time add_time(const Time& t1, const Time& t2) {
   int total_seconds = t1.seconds + t2.seconds;
   int carry_minutes = total_seconds / 60;
   int total_minutes = t1.minutes + t2.minutes + carry_minutes;
   int carry_hour = total_minutes / 60;
   int total_hours = t1.hour + t2.hour + carry_hour;

   // Handle overflow for hours
   total_hours %= 24;

   return Time(total_hours, total_minutes % 60, total_seconds % 60);
}

int main() {
   Time obj;
   Time time1(10, 30, 45);
   Time time2(5, 15, 20);

   Time total_time = add_time(time1, time2);

   std::cout << "Time 1: " << time1 << std::endl;
   std::cout << "Time 2: " << time2 << std::endl;
   std::cout << "Total Time: " << total_time << std::endl;

   return 0;
}
