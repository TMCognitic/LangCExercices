#include "exo01.h"

int main(int argc, char *argv[])
{
    int tmp = SECONDS_BY_MINUTES * MINUTES_BY_HOURS * HOURS_BY_DAY;
    #ifdef EXO01_H
    PrintSecondsByDay(tmp);
    #endif
    return 0;
}
