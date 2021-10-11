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
	void IsLvivWeather(int d, int humidity,std::string typ)
	{
		if ( typ == "RAINY" && humidity > 80)
			std::cout << " The typical day in Lviv\n";
		else
			std::cout << " You are lucky, man\n";
	}
};

enum vibe { SUNNY, CLOUDY, RAINY, FOGGY, WINDY };
std::string enum_to_string(vibe type)
{
	switch (type) {
	case SUNNY:
		return"SUNNY";
	case CLOUDY:
		return "CLOUDY";
	case RAINY:
		return "RAINY";
	case FOGGY:
		return "FOGGY";
	case WINDY:
		return "WINDY";
	default:
		return "Invalid weather";
	}

}
class WeatherCalendar : public Weather
{
public:
	int FindMaxtempature(int d, int pos, std::vector<Weather>& duplicate)
	{
		int max;
		if (duplicate[0].temp < duplicate[pos].temp)
		{
			duplicate[0].temp = duplicate[pos].temp;
			max = duplicate[0].temp;
		}
		else
			max = duplicate[pos].temp;
		return max;
	}
};
