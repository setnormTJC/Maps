// Maps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<map> 

#include<queue> 

void demoTheOrderedNatureOfStdMap()
{
	std::map<std::string, int> wordsMappedToTheirLengths; //std::map inherits from tree!

	wordsMappedToTheirLengths.insert({ "asdfasdZ", 8 });
	wordsMappedToTheirLengths.emplace("abc123", 6); //NOTE the lack of {}!

	wordsMappedToTheirLengths.insert({ "beta", 4 });
	wordsMappedToTheirLengths.insert({ "alpha", 5 });

	wordsMappedToTheirLengths.insert({ "charlie", 7 });

	//NOT the way to print a map!
	//for (int i = 0; i < wordsMappedToTheirLengths.size(); ++i)
	//	std::cout << wordsMappedToTheirLengths[i] << "\n";

	//THIS is the way!
	for (const auto& currentPair : wordsMappedToTheirLengths)
		std::cout << currentPair.first << ", " << currentPair.second << "\n";

}

void demoSomeCoordinateMapThings()
{
	std::map<std::pair<float, float>, std::string> coordinatesToLocationNames =
	{
		{{-95.0f, +32.0f}, "Tyler, TX" },
		{{0.0f, 0.0f}, "NULL island"}
	};


	std::cout << coordinatesToLocationNames.count({ -95.0f, +32.0f }) << "\n";

	std::cout << coordinatesToLocationNames.count({ -9.0f, +3.0f }) << "\n";

	//std::cout << coordinatesToLocationNames.at({ -95.0f, +32.0f }) << "\n";
	//std::cout << coordinatesToLocationNames.at({ 0.0f, 0.0f }) << "\n";

	//std::pair<float, float> pairToSearchMapFor = { 123.f, 456.f };

	std::pair<float, float> pairToSearchMapFor = { 0.0f, 0.0f };


	if (coordinatesToLocationNames.find(pairToSearchMapFor) !=
		coordinatesToLocationNames.end())
	{
		std::cout << "The KEY supplied MAPS to the value: " <<
			coordinatesToLocationNames.at(pairToSearchMapFor) << "\n";
	}

	else
	{
		std::cout << pairToSearchMapFor.first << ", " 
			<< pairToSearchMapFor.second
			<< "was not found\n";
	}
}


int main()
{

	std::priority_queue<std::string> namesOfPeopleInLine; //pq uses a "heap"! (a special type of tree)

	//call the functions above, if desired


}
