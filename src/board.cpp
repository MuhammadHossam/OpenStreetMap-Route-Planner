/**
 * @file board.cpp
 * @brief Implementation file for the Board class/module.
 *
 * This file contains the implementation of the Board class/module,
 * which is responsible for [briefly describe the purpose of the Board
 * class/module].
 *
 * @author [Your Name]
 * @date [Date]
 * @version 1.0
 */

#include "board.h"  // Include the corresponding header file
#include <fstream>  // For file handling
#include <iostream> // For console output
#include <sstream>  // For string stream

/**
 * @brief Constructor for the Board class.
 * @param path The path to the board file.
 */
Board::Board() {
  std::ifstream file(_path);
  if (!file.is_open()) {
    std::cerr << "Error: Could not open file " << _path << std::endl;
    return;
  }
  std::string line;
  while (std::getline(file, line)) {
    std::vector<state> row;
    std::stringstream ss(line);
    int cell;
    char c;
    while (ss >> cell >> c) {
      if (cell == 0) {
        row.push_back(state::kEmpty);
      } else if (cell == 1) {
        row.push_back(state::kObstacle);
      } else {
        std::cerr << "Error: Invalid cell value " << cell << std::endl;
        return;
      }
    }
    _board.push_back(row);
  }
}

/**
 * @brief Destructor for the Board class.
 */
Board::~Board() {
  // Destructor implementation (if needed)
}

void Board::boardRead(void) {}

/**
 * @brief Prints the board to the console.
 */
void Board::boardPrint(void) {
  // Implementation of boardPrint
  std::cout << "Printing board from path: " << _path << std::endl;
  // Add logic to print the board
}