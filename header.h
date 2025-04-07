#include <msp430.h>

#define START_STOP
#define LAP_RESET
#define MODE
#define BUTTON_PRESS
#define BUTTON_RELEASE

#define RED_LED 0
#define GREEN_LED 0

#define SECOND 1000
#define MINUTE 60000
#define HOUR 3600000
#define DAY 86400000

static const char *days[7] = {"Mo", "Tu", "We", "Th", "Fr", "Sa", "Su"};
static const int *monthdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
