#include <stdio.h>

struct Date{
  int day, month, year;
};

void nextDay(struct Date *date){
  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (days[date->month - 1] == date->day){
    date->day = 1;
    date->month += 1;
  }
  else{
    date->day++;
  }
  
  if (date->month > 12){
    date->month = 1;
    date->year++;
  }
  
}

void readDate(struct Date *date){
  printf("Enter date (dd mm yyyy): ");
  scanf("%d %d %d", &date->day, &date->month, &date->year);
}

void printDate(struct Date *date){
  printf("Date is: %d/%d/%02d\n", date->day, date->month, date->year);
}

int main(){

  struct Date date;

  readDate(&date);
  nextDay(&date);
  printDate(&date);
  
  
  return 0;
}
