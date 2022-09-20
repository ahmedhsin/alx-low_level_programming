#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: blablalba
 * Return: void
 */

int _atoi(char *s)
{
    int re = 0;
    int i;
    int state = 0;
    int cd = 1;
    int start = 0;
    int pp = 0;
    int ss = 0;
    int sp;

    for (i = 0;s[i] != '\0'; i++)
    {
        if(s[i] >= '0' && s[i] <= '9') {
            if(!ss){
                ss = 1;
                start = i;
            }
        }
        if(ss){
            if(s[i] >= '0' && s[i] <= '9') pp++;
            else
                break;
        }
    }
    sp = pp;
    sp -= 1;
    while(sp--){
        cd *= 10;
    }
    if(start > 0){
        if(s[start-1] == '-') state = 1;
    }
    for (i = start; i < start + pp; i++)
    {
        re = re  + cd * (s[i]-'0');
        cd /= 10;
    }
    if (state)
        return (re * -1);
    else
        return (re);
}
