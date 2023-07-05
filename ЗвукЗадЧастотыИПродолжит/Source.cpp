#include <iostream>

void tone(int freq, int time) 
{
    int hibyt, lobyt, port;
    long i, count, divisor;
    divisor = FREQSCALE / freq;
    lobyt = divisor % 256;
    hibyt = divisor / 256;
    count = TIMESCALE * time;
    outp(T_MODEPORT, TIMERMODE);
    outp(FREQPORT, lobyt);
    outp(FREQPORT, hibyt);
    port = inp(BEEPPORT);
    outp(BEEPPORT, ON);
    for (i = 0; i < count; i++)
        ;
    outp(BEEPPORT, port);
}