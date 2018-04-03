//04/03/18
//Exchange Rate
//Autho Kane Greenawalt

#include<iostream>
using std::cin;

int main()
{
	int HowMuchMoney;



	std::cout << "Please enter the amount of U.S Dollars you are exchanging" << std::endl;
	std:cin >> HowMuchMoney;
	int MexicanMoney = HowMuchMoney * 12.8863;
	int JapanMoney = HowMuchMoney * 82.34;
	int BritMoney = HowMuchMoney / .6318;
	std::cout << "\n" << MexicanMoney << " Pesos" << std::endl;
	std::cout << "\n" << JapanMoney << " Yen" << std::endl;
	std::cout << "\n" << BritMoney << " Pounds" << std::endl;
	
	
	
	system("Pause");
	return 0;


}