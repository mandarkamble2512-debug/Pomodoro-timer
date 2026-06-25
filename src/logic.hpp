#include <chrono>
#include <thread>

using std::this_thread::sleep_for;
using std::chrono::seconds;

void StopForOneSecond ()
{
    sleep_for(seconds(1));
}

void ResetClock (float& ClockHandRoataion, int& NumberOfRotations)
{
    if (ClockHandRoataion > 360 || ClockHandRoataion == 360)
    {
        ClockHandRoataion = 0;
    }
    NumberOfRotations = NumberOfRotations + 1;
}

bool IsTheRotationBreak (int NumberOfRotations)
{
    if (NumberOfRotations % 2 == 0)
    {
        return true;
    }
    return false;
}