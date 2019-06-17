

#include "pch.h"
#include <iostream>
#include <ctime>
#pragma warning(disable : 4996)



int main()
{
	time_t date, ttime;
	tm *dateStruct;
	int hours, minutes, secs, m_secs;

	std::cout << "Hours: ";			std::cin >> hours;
	std::cout << "Minutes: ";		std::cin >> minutes;
	std::cout << "Secs: ";			std::cin >> secs;
	std::cout << "Mili secs: ";		std::cin >> m_secs;


	time(&ttime);
	dateStruct = localtime(&ttime);
	dateStruct->tm_hour = hours;
	dateStruct->tm_min = minutes;
	dateStruct->tm_sec = secs;	
	date = mktime(dateStruct) + m_secs;

	std::cout << date;
}

