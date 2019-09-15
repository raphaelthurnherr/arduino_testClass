#ifndef testClass_h
#define testClass_h
    
#include <Arduino.h>
    
class Morse
{
public:
Morse(int pin);
void dot();
void dash();
private:
int _pin;
};
    
#endif
