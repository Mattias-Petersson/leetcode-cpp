#include "measureTime.h"
#include <cmath>
#include <vector>
#include <chrono>
#include <iostream>
#include <set>
#include <unordered_set>
#include <algorithm>

using namespace std;
vector<int> make_data(int upper_bound)
{
    int t = pow(10, 6);
    vector<int> data(t);
    for (int i = 0; i < t; i++)
    {
        data[i] = rand() % upper_bound;
    }
    return data;
}

void print_data(string explanation, const chrono::time_point<chrono::high_resolution_clock> &start)
{
    auto end = chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - start);
    cout << explanation << end.count() << " milliseconds.\n";
}

void measure_time(int upper_bound)
{
    vector<int> sort_vector{make_data(upper_bound)};
    vector<int> set_vector{make_data(upper_bound)};
    vector<int> unordered_set_vector{make_data(upper_bound)};

    auto start = chrono::high_resolution_clock::now();
    sort(sort_vector.begin(), sort_vector.end());
    sort_vector.erase(unique(sort_vector.begin(), sort_vector.end()), sort_vector.end());
    print_data("Sort a vector, erase duplicates took ", start);

    start = chrono::high_resolution_clock::now();
    set<int> set_vec{set_vector.begin(), set_vector.end()};
    vector<int> new_vec{set_vec.begin(), set_vec.end()};
    print_data("Make a map, back to vector took ", start);

    start = chrono::high_resolution_clock::now();
    unordered_set<int> unordered_set_vec{unordered_set_vector.begin(), unordered_set_vector.end()};
    vector<int> new_unordered_vec{unordered_set_vec.begin(), unordered_set_vec.end()};
    sort(new_unordered_vec.begin(), new_unordered_vec.end());
    print_data("Unordered map, back to vector, then sorting it took ", start);
}