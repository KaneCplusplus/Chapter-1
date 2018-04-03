//04/03/18
//Exchange Rate
//Autho Kane Greenawalt

#include<iostream>
using std::cin;

int main()
{
	double HowMuchMoney;



	std::cout << "Please enter the amount of U.S Dollars you are exchanging" << std::endl;
	std:cin >> HowMuchMoney;
	double MexicanMoney = HowMuchMoney * 12.8863;
	double JapanMoney = HowMuchMoney * 82.34;
	double BritMoney = HowMuchMoney / .6318;
	std::cout << "\n" << MexicanMoney << " Pesos" << std::endl;
	std::cout << "\n" << JapanMoney << " Yen" << std::endl;
	std::cout << "\n" << BritMoney << " Pounds" << std::endl;
	
	
	
	system("Pause");
	return 0;


}