#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    while (true) {
        // Get current time
        time_t currentTime = time(nullptr);
        struct tm* localTime = localtime(&currentTime);

        // Display current time
        cout << "Current Time: ";
        cout << (localTime->tm_hour < 10 ? "0" : "") << localTime->tm_hour << ":";
        cout << (localTime->tm_min < 10 ? "0" : "") << localTime->tm_min << ":";
        cout << (localTime->tm_sec < 10 ? "0" : "") << localTime->tm_sec << "\r";
        cout.flush();

        // Wait for 1 second before updating
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
