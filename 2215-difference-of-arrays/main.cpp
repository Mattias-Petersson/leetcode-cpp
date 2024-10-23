#include "Solution.h"
#include "measureTime.h"

/**
 * Method to compare the time to remove duplicates and return a vector
 * The result on my compiler is that it is faster to make an unordered
 * map, then make it into a vector, and lastly sort it.
 */
void time_comparison()
{
    cout << "[0, 10]: \n";
    measure_time(10);
    cout << "\n";

    cout << "[0, 100]: \n";
    measure_time(100);
    cout << "\n";

    cout << "[0, 1000] Elements: \n";
    measure_time(1000);
    cout << "\n";
}

int main()
{
    Solution s;
    time_comparison();
}