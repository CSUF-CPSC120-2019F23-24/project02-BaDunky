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

  std::cout << "Welcome to the Business Trip Tracker!\n\nWhat is the business trip location? ";
  std::cin >> location;
  std::cout << "How many days will the trip take? ";
  std::cin >> days;
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel;
  std::cout << "What is the total meal expense? $" ;
  std::cin >> meal;
  std::cout << '\n';

  total = hotel + meal;

  std::cout << std::setw(10) << "Location" << std::setw(10) << "Days" << std::setw(10) << "Hotel" << std::setw(10) << "Meal" << std::setw(10) << "Total\n";
  std::cout << std::setw(10) << location << std::setw(10) << days << std::setw(10) << hotel << std::setw(10) << meal << std::setw(10) << total << '\n';

  return 0;
}
