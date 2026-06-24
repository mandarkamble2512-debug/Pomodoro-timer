#include <chrono>
#include <thread>

using std::this_thread::sleep_for;
using std::chrono::seconds;

void StopForOneSecond ()
{
    sleep_for(seconds(1));
}

void ResetClock (float& ClockHandRoataion)
{
    if (ClockHandRoataion > 360 || ClockHandRoataion == 360)
    {
        ClockHandRoataion = 0;
    }
}

void WorkRotation (float& ClockHandRoataion, const float& DeltaAngleChangeInTwentyFiveMinuts)
{
    StopForOneSecond();
    ClockHandRoataion = ClockHandRoataion + DeltaAngleChangeInTwentyFiveMinuts;
    ResetClock(ClockHandRoataion);
}