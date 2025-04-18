/**
 * @file board.h
 * @brief Header file for the Board class/module.
 *
 * This file contains the declarations for the Board class/module,
 * which is responsible for [briefly describe the purpose of the Board
 * class/module].
 *
 * @author [Your Name]
 * @date [Date]
 * @version 1.0
 */

#ifndef BOARD_H
#define BOARD_H

// Include necessary headers
#include <iostream>
#include <string>
#include <vector>

enum class state { kEmpty = 0, kObstacle = 1 };

/**
 * @class Board
 * @brief Represents [briefly describe the purpose of the class].
 *
 * Detailed description of the Board class and its responsibilities.
 */
class Board {
public:
  /**
   * @brief Default constructor for the Board class.
   */
  Board();
  Board(std::string path) : _path(path) {
    // Constructor implementation
    boardPrint();
  };

  /**
   * @brief Destructor for the Board class.
   */
  ~Board();
  void boardRead(void);
  void boardPrint(void);

private:
  // Private members
  std::string _path;                      // Path to the board file
  std::vector<std::vector<state>> _board; // 2D vector representing the board
};

#endif // BOARD_H