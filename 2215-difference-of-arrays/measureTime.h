#ifndef TEMP_H
#define TEMP_H
#include <vector>
#include <iostream>
#include <chrono>
using namespace std;
vector<int> make_data(int upper_bound);
void print_data(const std::string explanation, const std::chrono::time_point<std::chrono::high_resolution_clock> &start);
void measure_time(int upper_bound);

#endif