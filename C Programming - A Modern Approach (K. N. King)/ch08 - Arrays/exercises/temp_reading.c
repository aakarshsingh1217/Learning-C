#define DAYS 30
#define HOURS 24

int temp_reading(int temp_readings[DAYS][HOURS])
{
    int sum = 0;

    for (int i = 0; i < DAYS; i++)
    {
        for (int j = 0; j < HOURS; j++)
        {
            sum += temp_readings[i][j];
        }
    }
    
    return (double)sum / (DAYS * HOURS);
}