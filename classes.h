#pragma once
class Weather
{
public:
	int day;
	std::string city;
	std::string country;
	float temp;
	int humid;
	int windSpeed;
	enum type { SUNNY, CLOUDY, RAINY, FOGGY, SNOWY };
	void getDay() {
		std::cin >> day;
		std::cin >> city;
		std::cin >> country;
		std::cin >> temp;
		std::cin >> humid;
		std::cin >> windSpeed;
		//return day
	}
	void display() {
		std::cout << day << " " << city << " " << country << " " << temp << " " << humid << " " << windSpeed << std::endl;
	}
};
//class WeatherCalendar : public Weather
//{
//public:
//	int findMaxTemprature(int day)
//	{
//		int d, k = 0, l = 0;
//		//cout << size;
//		std::cout << "\n Enter day: ";
//		std::cin >> d;
//		for (int i = 0; i < size; i++)
//		{
//			if (d != wday[i])
//			{
//				k++;
//
//				//cout << " Not enough data! ";
//				//findMaxTemprature(wday);
//			}
//			l += 2;
//			//cout << k;
//
//		}
//		if (k == size)
//		{
//			std::cout << " Not enough data! ";
//			findMaxTemprature();
//
//		}
//		else if (k > 1)
//		{
//			for (int i = 0; i < size; i++)
//			{
//
//				std::cout << wday[i] << " ";
//
//			}
//		}
//
//		//cout << " " << k << endl;
//		return 0;
//	}
//};