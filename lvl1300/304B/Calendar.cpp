//B. Calendar 304B

#include <bits/stdc++.h>

#define regular_year_days 365
#define leap_years_days 366
#define DEBUG(x) std::cout << x << "\n";
/*
	task: to retrun the difference in days given 2 dates
	format given: dd:mm:yyyy
	
	isLeapYear(int year)->bool check if year is leap year
	sumWholeYears(int start, int end) -> int sum all the full year between
	int sumYearUp(int d, int m, int y) -> int sum all the days till d y
*/

bool isLeapYear(int year);
int sumYearUntil(int day, int month, int year);
int totalWholeYears(int ys, int yf);

int main(void)
{
	int year_start,month_start,day_start;
	scanf("%d:%d:%d",&year_start,&month_start,&day_start);
	printf("%d:%d:%d\n",year_start,month_start,day_start);
	int year_end,month_end,day_end;
	scanf("%d:%d:%d",&year_end,&month_end,&day_end);
	
	int sum_full_years = totalWholeYears(year_start,year_end);
	DEBUG(sum_full_years);
	sum_full_years += sumYearUntil(day_end,month_end,year_end);
	DEBUG(sum_full_years);
	sum_full_years -= sumYearUntil(day_start,month_start,year_start);
	DEBUG(sum_full_years);
}


int totalWholeYears(int ys, int yf)
{
	int s = 0;
	for(int i = ys; i < yf;i++){
		s+=(isLeapYear(i) ? leap_years_days : regular_year_days);
	}
	return s;
}

int sumYearUntil(int day, int month, int year)
{
	int total = 0;
	static std::vector<int> days_per_month = {31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i = 1;i < month;i++){
		total+=days_per_month[i-1];
	}
	total += day;
	if(month > 2 && isLeapYear(year)){
		total+=1;
	}
	return total;
}

bool isLeapYear(int year)
{
	if(year % 4 == 0)
	{
		if(year % 100 == 0 && year % 400 == 0)
		{
			return true;
		}
	}
	return false;
}