#ifndef ZERO_H
#define ZERO_H

NumberData zeroHourLeft = {
  {20, 90, 110, 0, 0, true, false},
  {20, 90, 140, 0, 0, true, false},
  {110, 140, 20, 0, 0, false, false},
  {110, 140, 90, 0, 0, false, false}
};

NumberData zeroHourRight = {
  {30, 90, 160, 0, 0, true, false},
  {30, 90, 190, 0, 0, true, false},
  {160, 190, 30, 0, 0, false, false},
  {160, 190, 90, 0, 0, false, false}
};

NumberData zeroHourRightLong = {
  {30, 90, 130, 0, 0, true, false},
  {30, 90, 160, 0, 0, true, false},
  {130, 160, 30, 0, 0, false, false},
  {130, 160, 90, 0, 0, false, false}
};


NumberData zeroMinuteLeft = {
  {110, 170, 10, 0, 0, true, false},
  {110, 170, 40, 0, 0, true, false},
  {10, 40, 110, 0, 0, false, false},
  {10, 40, 170, 0, 0, false, false}
};

NumberData zeroMinuteLeftLong = {
  {110, 170, 40, 0, 0, true, false},
  {110, 170, 70, 0, 0, true, false},
  {40, 70, 110, 0, 0, false, false},
  {40, 70, 170, 0, 0, false, false}
};

NumberData zeroMinuteRight = {
  {110, 180, 60, 0, 0, true, false},
  {110, 180, 90, 0, 0, true, false},
  {60, 90, 110, 0, 0, false, false},
  {60, 90, 180, 0, 0, false, false}
};

#endif
