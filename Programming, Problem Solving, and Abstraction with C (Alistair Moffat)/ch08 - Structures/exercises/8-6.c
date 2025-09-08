#define MAX_NOTES_LEN 40
#define LAP_COUNT 100
#define NAME_LEN 50
#define MAX_CARS 30

typedef struct
{
    double lap_time;
    char notes[MAX_NOTES_LEN + 1];
} lap_t;

typedef struct
{
    lap_t laps[LAP_COUNT];
    char driver_name[NAME_LEN + 1];
    int serial_num;
    int laps_completed;
    double tot_race_time;
    int overall_position;
} car_t;