//DelgatosTacos
//03/28/18
//Author Kane Greenwalt
#include<iostream>
#include<string>
using std::cin;
int main()
{
	int NumberOfItem;
	double tacos = 1.00;
	double burritos = 1.00;
	double tostadas = 1.50;
	double enchiladas = 2.99;
	double drink = 2.00;
	double supremeBurrito = 5.50;
	double potatollas = 1.99;
	double chickenTendies = 2.88;
	double straws = 10.99;
	double cows = .99;
	
	double tacosOrdered = 1.00;
	double burritosOrdered = 1.00;
	double tostadasOrdered = 1.50;
	double enchiladasOrdered = 2.99;
	double drinkOrdered = 2.00;
	double supremeBurritoOrdered = 5.50;
	double potatollasOrdered = 1.99;
	double chickenTendiesOrdered = 2.88;
	double strawsOrdered = 10.99;
	double cowsOrdered = .99;


	std::cout << "                     ________________________________" << std::endl;
	std::cout << "                     |           Delgatos           |" << std::endl;
	std::cout << "                     |            tacos             |" << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << "*                                                          *" << std::endl;
	std::cout << "*                                                            *" << std::endl;
	std::cout << "*                    _______________________________          *" << std::endl;
	std::cout << "*                    |                              |          *" << std::endl;
	std::cout << "*                    |                              |          *" << std::endl;
	std::cout << "*                    |                              |           **********************" << std::endl;
	std::cout << "*                    |______________________________|                              ***" << std::endl;
	std::cout << "*                                                                                 * =*" << std::endl;
	std::cout << "*                                                                                 ****" << std::endl;
	std::cout << "*                                                                                     *" << std::endl;
	std::cout << "*                                                                                     *" << std::endl;
	std::cout << "*                                                                                     *" << std::endl;
	std::cout << "*   ********                                                          ********        *" << std::endl;
	std::cout << "*****      ***********************************************************      **********" << std::endl;
	std::cout << "    * 0000 *                                                         * 0000 *         " << std::endl;
	
	std::cout << "How many tacos do want?" << std::endl;
	std::cin >> tacosOrdered;
	std::cout << "How many burritos do you want?" << std::endl;
	std::cin >> burritosOrdered;
	std::cout << "how many tostadas" << std::endl; 
	std::cin >> tostadasOrdered;
	std::cout << "How many god damn enchiladas?" << std::endl;
	std::cin >> enchiladasOrdered;
	std::cout << "How many drink" << std::endl;
	std::cin >> drinkOrdered;
	std::cout << "How many super burritos" << std::endl;
	std::cin >> supremeBurritoOrdered;
	std::cout << "How many potatollas" << std::endl;
	std::cin >> potatollasOrdered;
	std::cout << "how many chicken Tendies" << std::endl;
	std::cin >> chickenTendiesOrdered;
	std::cout << "How many staws" << std::endl;
	std::cin >> strawsOrdered;
	std::cout << "How many cows you want" << std::endl;
	std::cin >> cowsOrdered;

	int totalCost = (tacos * tacosOrdered) + (burritos * burritosOrdered) + (tostadas * tostadasOrdered) + (enchiladas * enchiladasOrdered) + (supremeBurrito * supremeBurritoOrdered) +
		(drink * drinkOrdered) + (potatollas * potatollasOrdered) + (chickenTendies * chickenTendiesOrdered) + (straws * strawsOrdered) + (cows * cowsOrdered);

	std::cout << "Your total is " << totalCost << std::endl;




	


	system("Pause");
	return 0;
}