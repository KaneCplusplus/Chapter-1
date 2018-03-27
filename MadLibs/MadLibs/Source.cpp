//Madlibs
//03/27/18
//Author Kane Greenwalt

#include<iostream>
#include<string>
using std::cin;
int main()
{
	std::string color;
	std::string wordEst;
	std::string bodyPartPlural;
	std::string animal;
	std::string noun;
	std::string pluralNoun;

	int aFirstNumberChosenByUser = 5;
	std::cin >> aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser=3;
	int cTheResultOfaMinusB = aFirstNumberChosenByUser - bSecondNumberChosenByUser;

	std::cout << "The " << color << "Dragon is the " << wordEst << "Dragon of all. it has " << cTheResultOfaMinusB<<std::endl;
	std::cout << "The dragon has " << bodyPartPlural << "Right? Gross" << std::endl;

	system("Pause");
	return 0;




}