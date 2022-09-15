#include "Rorschach.h" //include the Watchy library
#include "settings.h" //same file as the one from 7_SEG example

Rorschach watchy(settings); //instantiate your watchface

void setup() {
  watchy.init(); //call init in setup
}

void loop() {
  // this should never run, Watchy deep sleeps after init();
}
