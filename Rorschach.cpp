#include "Rorschach.h"
#include "Number_Base.h"
#include "Zero.h"
#include "One.h"
#include "Two.h"
#include "Three.h"
#include "Four.h"
#include "Five.h"
#include "Six.h"
#include "Seven.h"
#include "Eight.h"
#include "Nine.h"

void Rorschach::drawWatchFace() {
  display.fillScreen(GxEPD_WHITE);

  Number_Base* numberBase = new Number_Base(&display);

  std::vector<NumberData> hoursLeft = {zeroHourLeft, oneHourLeft, twoHourLeft};
  std::vector<NumberData> hoursRight = {zeroHourRight, oneHourRight, twoHourRight, threeHourRight, fourHourRight, fiveHourRight, sixHourRight, sevenHourRight, eightHourRight, nineHourRight};
  std::vector<NumberData> hoursRightLong = {zeroHourRightLong, oneHourRight, twoHourRightLong, threeHourRightLong, fourHourRightLong, fiveHourRightLong, sixHourRightLong, sevenHourRightLong, eightHourRightLong, nineHourRightLong};
  std::vector<NumberData> minutesLeft = {zeroMinuteLeft, oneMinuteLeft, twoMinuteLeft, threeMinuteLeft, fourMinuteLeft, fiveMinuteLeft};
  std::vector<NumberData> minutesLeftLong = {zeroMinuteLeftLong, oneMinuteLeft, twoMinuteLeftLong, threeMinuteLeftLong, fourMinuteLeftLong, fiveMinuteLeftLong};
  std::vector<NumberData> minutesRight = {zeroMinuteRight, oneMinuteRight, twoMinuteRight, threeMinuteRight, fourMinuteRight, fiveMinuteRight, sixMinuteRight, sevenMinuteRight, eightMinuteRight, nineMinuteRight};

  int hourLeft = currentTime.Hour / 10;
  numberBase->drawNumber(hoursLeft[hourLeft], true);
  int hourRight = currentTime.Hour % 10;
  numberBase->drawNumber(hourLeft == 1 ? hoursRightLong[hourRight] : hoursRight[hourRight], true);

  int minuteLeft = currentTime.Minute / 10;
  int minuteRight = currentTime.Minute % 10;
  if (minuteLeft != 2) {
    numberBase->drawNumber(minuteRight == 1 ? minutesLeftLong[minuteLeft] : minutesLeft[minuteLeft], false);
  } else {
    if (minuteRight == 4 || minuteRight == 7) {
      numberBase->drawNumber(twoMinuteLeftBis, false);
    } else {
      numberBase->drawNumber(minuteRight == 1 ? twoMinuteLeftLong : twoMinuteLeft, false);
    }
  }

  numberBase->drawNumber(minutesRight[minuteRight], false);
}



// Debug Grid
void Rorschach::drawMiddle() {
  display.drawLine(0, 100, 200, 100, GxEPD_BLACK);
  display.drawLine(100, 0, 100, 200, GxEPD_BLACK);
}

void Rorschach::drawGrid() {
  int y = 10;
  int x = 10;
  for (int i = 0; i < 20; i++) {
    display.drawLine(x, 0, x, HEIGHT, GxEPD_BLACK);
    x += 10;
  }

  for (int i = 0; i < 20; i++) {
    display.drawLine(0, y, WIDTH, y, GxEPD_BLACK);
    y += 10;
  }
}
