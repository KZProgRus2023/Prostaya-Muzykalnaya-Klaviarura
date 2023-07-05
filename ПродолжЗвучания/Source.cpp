#include <iostream>

void tone(int freq, int time)
{
    const int TIMERMODE = 182;
    const long FREQSCALE = 119000L;
    const long TIMESCALE = 1230L;
    const int T_MODEPORT = 67;
    const int FREQPORT = 66;
    const int BEEPPORT = 97;
    const int ON = 97;

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
