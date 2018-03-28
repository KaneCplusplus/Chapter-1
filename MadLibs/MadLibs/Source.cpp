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

	int aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser=3;
	int cTheResultOfaMinusB = aFirstNumberChosenByUser - bSecondNumberChosenByUser;
	
	std::cout << "Enter any color of your choice" << std::endl;
	std::cin >> color;
	std::cout << "Enter a word that ends in est" << std::endl;
	std::cin >> wordEst;
	std::cout << "Enter a plural body part" << std::endl;
	std::cin >> bodyPartPlural;
	std::cout << "Enter an animal" << std::endl;
	std::cin >> animal;
	std::cout << "Enter a noun" << std::endl;
	std::cin >> noun;
	std::cout << "Enter a plural noun" << std::endl;
	std::cin >> pluralNoun;
	std::cout << "Enter a number" << std::endl;
	std:cin >> aFirstNumberChosenByUser;
	std::cout << "Enter another number" << std::endl;
	std::cin >> bSecondNumberChosenByUser;



	std::cout << "The " << color << " Dragon is the " << wordEst << "Dragon of all. it has " << cTheResultOfaMinusB<<std::endl;
	std::cout << "The dragon has " << bodyPartPlural << ", and a " << animal << " shaped like a " << noun << ". It loves to eat " << pluralNoun <<
		", although it will feast on nearly anything. " << std::endl;

	system("Pause");
	return 0;




}