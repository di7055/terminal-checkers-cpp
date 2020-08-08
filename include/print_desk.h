#ifndef PRINT_DESK_H
#define PRINT_DESK_H
#include <iostream>
#include "data.h"
#include "constants.h"
#include "color_scheme.h"

void print_number_column(int &y);

void print_letter_line();

std::string int_to_figures(Coordinate &matrix, Figure &cell);

void print_line(const std::string &line);

void print_horizontal_line();

void cycle_in_swap_desk(int &y, Coordinate &matrix, Figure &cell);

void swap_desk();

void print_desk();
#endif