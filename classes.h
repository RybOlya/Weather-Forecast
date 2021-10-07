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
};
//void isLvivWeather(int humidity,enum type)
//	{
//
//	}


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
	int FindMaxtempature(int d,int pos, std::vector<Weather>& duplicate)
{
	int max;
	//Weather maximum = *max_element(duplicate.begin(), duplicate.end());
	//std::cout << maximum;
	if (duplicate[0].temp < duplicate[pos].temp)
	{
		duplicate[0].temp = duplicate[pos].temp;
		max = duplicate[0].temp;

	}
	else
		max = duplicate[pos].temp;
		int s = duplicate.size();
		for (const auto& duplicateElement : duplicate)
		{
			//std::cout << "Max weather is " << /*std::to_string(duplicateElement) <<*/ duplicate[0].temp << std::endl;
		}
		return max;
	//}
}
	//void findMaxtemprature(int d, vector<Weather>& infolist)
	//{

	//	for (int i = 0; i < 6; i++)
	//	{

	//		std::cout << day << " ";

	//	}

	////cout << " " << k << endl;
	//}
};
