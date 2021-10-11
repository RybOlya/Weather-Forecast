#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include "classes.h"

const unsigned int N = 7;

bool comparator(const Weather& lhs, const Weather& rhs) {
	return lhs.day < rhs.day;
}
int findIndex(const std::vector<Weather>& arr, int low, int high, int d) {
	for (auto i = 0; i < arr.size()-1; ++i) {
		if(d == arr[arr.size() - 1].day)
			return arr.size() - 1;
		if (arr[i].day == d)
		{
			if ( arr[i+1].day == d)
			{
				return i+1;
			}
				return i;
		}
	}
	return -1;
}
int main()
{
	int i = 0;
	WeatherCalendar we;
	std::vector<Weather> infolist; //vector used to store Weather class objects
	Weather info;
	Weather ob;
	std::array <int, N> day = { 12, 13, 2, 5, 12, 23, 5 };
	std::array <std::string, N> city = { "Lviv","Amsterdam","London","Lisabon","Frankfurt","Dublin" , "Madrid"};
	std::array <std::string, N> country = { "Ukraine","Netherlands","UK","Portugal","Germany","Ireland" ,"Spain"};
	std::array <float, N> temp = { 13, 5, 11, 28, 21, 19, 31 };
	std::array <int, N> humid = { 70, 60, 90, 10, 50, 70,  20};
	std::array <int, N> wind = { 32, 13, 4, 12, 11, 8 , 30};
	std::array <std::string, N> type;

	for (int i = 0; i < N; i++) /*putting objects with day city... and windspeed into vector*/
	{
		info.day = day[i];
		info.city = city[i];
		info.country = country[i];
		info.temp = temp[i];
		info.humid = humid[i];
		info.windSpeed = wind[i];
		infolist.push_back(info);
	}
	int s = infolist.size();
	for (const Weather& n : infolist)
	{
		std::cout << n.day << " " << n.city << " " << n.country << " " << n.temp << " " << n.humid << " " << n.windSpeed << " " << std::endl;
	}
	std::sort(infolist.begin(), infolist.end(), &comparator);
	for (; i < s; i++)
	{

		if (infolist[i].temp > 16 && infolist[i].humid < 20)
			type[i] = enum_to_string(SUNNY);
		else if (infolist[i].temp > 16 && infolist[i].windSpeed > 10 && infolist[i].humid > 40)
			type[i] = enum_to_string(CLOUDY);
		else if (infolist[i].humid > 85)
			type[i] = enum_to_string(RAINY);
		else if (infolist[i].temp < 10 && infolist[i].humid >= 60)
			type[i] = enum_to_string(FOGGY);
		else if (infolist[i].windSpeed > 20)
			type[i] = enum_to_string(WINDY);
		else
			type[i] = enum_to_string(CLOUDY);
	}
	std::cout << "\n Sorted records: \n";
	for (const Weather& n : infolist)
	{
		std::cout << n.day << " " << n.city << " " << n.country << " " << n.temp << " " << n.humid << " " << n.windSpeed << " " << std::endl;
	}
	int d;
	std::cout << "\n Enter day: ";
	std::cin >> d;

	int pos = findIndex(infolist, 0 , N,d);
		if (pos != -1)
		{
			std::cout << " Max weather on " << d << " day is " << we.FindMaxtempature(d, pos, infolist)<< std::endl;
			 ob.IsLvivWeather(d, infolist[pos].humid, type[pos]);
		}
		else
			std::cout << " Not enough data!" << std::endl;
	return 0;
}
