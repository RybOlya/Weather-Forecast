#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <array>
#include <vector>
#include "classes.h"
#include <map>
#include <utility>
const unsigned int N = 6;

bool comparator(const Weather& lhs, const Weather& rhs) {
	return lhs.day < rhs.day;
}
// pass it to sort:

int main()
{
	//WeatherCalendar we;
	std::array <int, N> day = { 12, 13, 2, 5, 12, 23 };
	//const auto wcity = numbers = { "Lviv","Amsterdam","London","Lisabon","Frankfurt","Dublin" };
	std::array <std::string, N> city = { "Lviv","Amsterdam","London","Lisabon","Frankfurt","Dublin" };
	std::array <std::string, N> country = { "Ukraine","Netherlands","UK","Portugal","Germany","Ireland" };
	std::array <float, N> temp = { 13, 5, 11, 28, 21, 19 };
	std::array <int, N> humid = { 70, 60, 90, 40, 50, 70 };
	std::array <int, N> wind = { 18, 13, 4, 12, 11, 8 };
	std::vector<Weather> infolist; //vector used to store Weather class objects
	Weather info;
	int s = sizeof(day) / sizeof(day[0]);
	for (int i = 0; i < s; i++) /*putting objects with day city... and windspeed into vector*/
	{
		info.day = day[i];
		info.city = city[i];
		info.country = country[i];
		info.temp = temp[i];
		info.humid = humid[i];
		info.windSpeed = wind[i];
		infolist.push_back(info);
	}

	for (int i = 0; i < s; i++)
	{				
		std::cout << " " << infolist[i].day << " " << infolist[i].city << " " << infolist[i].country << " " << infolist[i].temp << " " << infolist[i].humid << " " << infolist[i].windSpeed << std::endl;

	}

	std::sort(infolist.begin(), infolist.end(), &comparator);
	for (int i = 0; i < s; i++)
	{
		std::cout << "\n " << infolist[i].day << " " << infolist[i].city << " " << infolist[i].country << " " << infolist[i].temp << " " << infolist[i].humid << " " << infolist[i].windSpeed << std::endl;

	}
	std::cout << "\n " << info.day;
	//we.findMaxTemprature(info.day);
	return 0;
}