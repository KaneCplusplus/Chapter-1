//Personal MadLibs
//03/28/18
//Author Kane Greenwalt

#include <iostream>
#include <string>
using std::cin;
int main()
{
	std::string SomethingUserLikes;
	std::string NameThatUserHates;
	std::string SomethingUsedInChurch;
	std::string PlaceChosenByUser;

	int NumberChosenByUser;
	int SecondNumberChosen;
	


	std::cout << "Hello stranger! Welcome to my MadLibs. To get started what is something you like?" << std::endl;
	std::cin >> SomethingUserLikes;
	std::cout << "Perfect, now what is a name that you hate? That name that when you hear it it just makes you mad." << std::endl;
	std::cin >> NameThatUserHates;
	std::cout << "Good. Almost done. What is something that you would use in a church?" << std::endl;
	std::cin >> SomethingUsedInChurch;
	std::cout << "Alright. Last question. What is a place that you have always wanted to go." << std::endl;
	std::cin >> PlaceChosenByUser;
	std::cout << "But real fast can you give me a number?" << std::endl;
	std::cin >> NumberChosenByUser;
	std::cout << "Just one more number." << std::endl;
	std::cin >> SecondNumberChosen;
	int ResultOfFirstTimesSecond = NumberChosenByUser * SecondNumberChosen;
	std::cout << "There once was a boy name Tim. Tim was a strange boy and liked " << SomethingUserLikes << ". Tim's best friend who was " << NameThatUserHates <<
		"which he was kind of an idiot. There was one time that " << NameThatUserHates << " Destroyed a " << SomethingUsedInChurch << ". Don't ask how you'll get arrested." << std::endl;
	std::cout << "Tim and " << NameThatUserHates << " both live in " << PlaceChosenByUser << ". Tim lived to be " << ResultOfFirstTimesSecond << std::endl;
	system("Pause");
	return 0;
}