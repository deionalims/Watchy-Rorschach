#include "Number_Base.h"

void Number_Base::drawNumber(NumberData numberData, boolean isHour) {
  for (const auto& value : numberData) {
    if (value.isRectangle) {
      drawRect(value.v1, value.v2, value.w, value.h);
      if (isHour) {
        drawRect((WIDTH / 2) - (value.v1 - (WIDTH / 2)) - value.w, value.v2, value.w, value.h);
      } else {
        drawRect((WIDTH / 2) + ((WIDTH / 2) - value.v1 - value.w), value.v2, value.w, value.h);
      }
    } else {
      if (value.isVertical) {
        drawVStroke(value.v1, value.v2, value.c);
        if (isHour) {
          drawVStroke(value.v1, value.v2, (WIDTH / 2) - (value.c - (WIDTH / 2)));
        } else {
          drawVStroke(value.v1, value.v2, (WIDTH / 2) + ((WIDTH / 2) - value.c));
        }
      } else {
        drawHStroke(value.v1, value.v2, value.c);
        if (isHour) {
          drawHStroke((WIDTH / 2) - (value.v1 - (WIDTH / 2)) - (value.v2 - value.v1), (WIDTH / 2) - (value.v2 - (WIDTH / 2)) + (value.v2 - value.v1), value.c);
        } else {
          drawHStroke(WIDTH - value.v1 - (value.v2 - value.v1), WIDTH - value.v2 + (value.v2 - value.v1), value.c);
        }
      }
    }
  }
}

void Number_Base::drawHStroke(int x1, int x2, int y) {
  display->fillRoundRect(x1 - (STROKE_WIDTH / 2), y - (STROKE_WIDTH / 2), x2 - x1 + STROKE_WIDTH, STROKE_WIDTH, STROKE_RADIUS, BLACK_COLOR);
}

void Number_Base::drawVStroke(int y1, int y2, int x) {
  display->fillRoundRect(x - (STROKE_WIDTH / 2), y1 - (STROKE_WIDTH / 2), STROKE_WIDTH, y2 - y1 + STROKE_WIDTH, STROKE_RADIUS, BLACK_COLOR);
}

void Number_Base::drawRect(int x, int y, int w, int h) {
  display->fillRoundRect(x - (STROKE_WIDTH / 2), y - (STROKE_WIDTH / 2), w + 2 * (STROKE_WIDTH / 2), h + 2 * (STROKE_WIDTH / 2), STROKE_RADIUS, BLACK_COLOR);
}
