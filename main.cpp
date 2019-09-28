// Name: Arturo Silva
// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
#include <cstring>


int main(){
  std::string location;
  int days;
  double hotel;
  double meal;
  double total;

  std::setprecision(2); // set precision after decimal

  std::cout << "Welcome to the Business Trip Tracker!\n\nWhat is the business trip location? ";
  getline(std::cin, location); //INPUT
  std::cout << "How many days will the trip take? ";
  std::cin >> days; //INPUT
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel; //INPUT
  std::cout << "What is the total meal expense? $" ;
  std::cin >> meal; //INPUT
  std::cout << '\n';

  total = hotel + meal; // Calculates the total cost

  std::cout << std::setw(10) << "Location" << std::setw(10) << "Days" << std::setw(10) << "Hotel" << std::setw(10) << "Meal" << std::setw(10) << "Total\n";
  std::cout << std::setw(10) << location << std::setw(10) << days << std::setw(10) << hotel << std::setw(10) << "$" + std::to_string(meal) << std::setw(10) << "$" + std::to_string(total) << '\n'; // Outputs in the desired format

  return 0;
}
