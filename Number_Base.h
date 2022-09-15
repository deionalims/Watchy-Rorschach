#ifndef NUMBER_BASE_H
#define NUMBER_BASE_H

#include <Adafruit_GFX.h>
#include <vector>

#define HEIGHT 200
#define WIDTH 200
#define STROKE_WIDTH 16
#define STROKE_RADIUS 8
#define BLACK_COLOR 0x0000

typedef struct {
  int v1;   // value 1
  int v2;   // value 2
  int c;    // constant
  int w;    // width
  int h;    // height
  boolean isVertical;
  boolean isRectangle;
} NumberStruct;

typedef std::vector<NumberStruct> NumberData;

class Number_Base {
  public:
    Number_Base(Adafruit_GFX* display) {
      this->display = display;
    }

  void drawNumber(NumberData numberData, boolean isHour);

  private:
    Adafruit_GFX* display;
    void drawVStroke(int y1, int y2, int x);
    void drawHStroke(int x1, int x2, int y);
    void drawRect(int x, int y, int w, int h);
};


#endif
