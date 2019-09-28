// Name: Arturo Silva
// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>

int main(){
  std::string location;
  int days;
  double hotel;
  double meal;
  double total;

  std::stringstream sshotel, ssmeal, sstotal;

  std::cout << "Welcome to the Business Trip Tracker!\n\nWhat is the business trip location? ";
  getline(std::cin, location); //INPUT string with spaces
  std::cout << "How many days will the trip take? ";
  std::cin >> days; //INPUT
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel; //INPUT
  std::cout << "What is the total meal expense? $" ;
  std::cin >> meal; //INPUT
  std::cout << '\n';

  total = hotel + meal; // Calculates the total cost

  sshotel << std::setprecision(2) << std::fixed << '$' << hotel;
  ssmeal << std::setprecision(2) << std::fixed << '$' << meal;
  sstotal << std::setprecision(2) << std::fixed << '$' << total;

  std::cout << std::setw(10) << "Location" << std::setw(10) << "Days" << std::setw(10) << "Hotel" << std::setw(10) << "Meal" << std::setw(10) << "Total\n";
  std::cout << std::setw(10) << location << std::setw(10) << days << std::setw(10) << sshotel.str() << std::setw(10) << ssmeal.str() << std::setw(10) << sstotal.str() << '\n'; // Outputs in the desired format

  return 0;
}
