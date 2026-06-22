#include <chrono>
#include <thread>

using std::this_thread::sleep_for;
using std::chrono::seconds;

void StopForOneSecond ()
{
    sleep_for(seconds(1));
}