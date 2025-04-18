/**
 * @file main.cpp
 * @brief Entry point for the OpenStreetMap Route Planner application.
 *
 * This file contains the main function, which serves as the entry point
 * for the application. It initializes the necessary components and starts
 * the program execution.
 *
 * @author [Your Name]
 * @date [Date]
 * @version 1.0
 */

#include "board.h" // Include the Board class header
#include <iostream>

/**
 * @brief Main function of the application.
 *
 * This function initializes the Board class and demonstrates its functionality.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  std::cout << "Starting OpenStreetMap Route Planner..." << std::endl;

  // Example usage of the Board class
  std::string path = "path/to/board/file.txt";
  Board board(path);

  board.boardPrint();

  return 0;
}