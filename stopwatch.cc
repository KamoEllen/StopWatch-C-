#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
    // Start the stopwatch
    time_t start_time = time(NULL);

    // Wait for user input to stop the stopwatch
    cout << "Press ENTER to stop the stopwatch..." << endl;
    cin.ignore();

    // Stop the stopwatch
    time_t stop_time = time(NULL);

    // Calculate the elapsed time in milliseconds
    double elapsed_time = difftime(stop_time, start_time) * 1000;

    // Print the elapsed time
    cout << "Elapsed time: " << elapsed_time << " milliseconds" << endl;

    return 0;
}
