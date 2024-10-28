#include <iostream>

int guess(int n); // Forward declaration to get rid of all red squigglys.
int guessNumber(int n)
{
    return guessNumberRecursive(1, n);
}
int guessNumberRecursive(int low, int high)
{
    int middle = low + (high - low) / 2;
    int pick = guess(middle);

    if (pick == 0)
    {
        return middle;
    }
    else if (pick < 0)
    {
        return guessNumberRecursive(low, middle - 1);
    }
    else
    {
        return guessNumberRecursive(middle + 1, high);
    }
}
