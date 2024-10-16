#ifndef MAP_FORM_HPP
#define MAP_FORM_HPP

#include <vector>

std::vector<std::vector<char>> map = {
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', 'S', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+' },
  { '|', '.', '|', '.', ' ', '.', ' ', '.', '|', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+' },
  { '|', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+' },
  { '|', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' },
  { '|', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', '|' },
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' }
};

#endif