enum class WorkState
{
    Work,
    Break,
    LongBreak
};

bool IsTheRotationBreak (int NumberOfRotations)
{
    if (NumberOfRotations % 2 == 0)
    {
        return true;
    }
    return false;
}