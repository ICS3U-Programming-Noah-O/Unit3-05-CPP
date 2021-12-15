// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Dec. 11, 2021
// This program allows a user to enter an integer and
// see what month it corresponds to.

#include <iostream>
#include <string>


int main() {
  // get input from user and display intro message
  std::string userString;
  int userNumber;
  std::cout << " \n";
  std::cout << "What month is your number?\n";
  std::cout << " \n";
  std::cout << "Enter a number between 1 and 12: ";
  std::cin >> userString;

  // Make sure user does not input words
  try {
        userNumber = std::stoi(userString);
    } catch (std::invalid_argument) {
        std::cout << userString << " is not a valid integer\n";
        userNumber = 0;
  }

  // assign each month to a case and print
  switch (userNumber) {
    case 1:
    std::cout << userNumber << " is the month of Janurary";
    break;
    case 2:
    std::cout << userNumber << " is the month of February";
    break;
    case 3:
    std::cout << userNumber << " is the month of March";
    break;
    case 4:
    std::cout << userNumber << " is the month of April";
    break;
    case 5:
    std::cout << userNumber << " is the month of May";
    break;
    case 6:
    std::cout << userNumber << " is the month of June";
    break;
    case 7:
    std::cout << userNumber << " is the month of July";
    break;
    case 8:
    std::cout << userNumber << " is the month of August";
    break;
    case 9:
    std::cout << userNumber << " is the month of September";
    break;
    case 10:
    std::cout << userNumber << " is the month of October";
    break;
    case 11:
    std::cout << userNumber << " is the month of November";
    break;
    case 12:
    std::cout << userNumber << " is the month of December";
    break;
    default:
    std::cout << userString << " didn't match a case";
  }
}
