bool PRIME(int num)
{
    if (num == 2 || num == 3)
    {
        return true;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
