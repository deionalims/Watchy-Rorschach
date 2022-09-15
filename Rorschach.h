#ifndef RORSCHACH_H
#define RORSCHACH_H

#include <Watchy.h>

class Rorschach : public Watchy {
  using Watchy::Watchy;
  public:
    void drawWatchFace();

  private:
    void drawGrid();
    void drawMiddle();
  
};

#endif
