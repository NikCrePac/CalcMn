#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <stdbool.h>

void input_arr(int * ms)
{
    for(short i = 0; i < 5; i++)
    {
        scanf("%d", &ms[i]);
    }
}

void union_of_arr(int * ms1, int * ms2, int * union_arr)
{
    int t = 5;
    for(short i = 0; i < 5; i++)
    {
        union_arr[i] = ms1[i];
    }
    for(short i = 0; i < 5; i++)
    {
        union_arr[t] = ms2[i];
        t++;
    }
}

void output_arr(int * ms, short a)
{
    printf("[");
    for(short i = 0; i < a; i++)
    {
        printf("%d,", ms[i]);
    }
    printf("%d]", ms[a]);
}

void check_arr(int * ms, char bukva, int * cdp)
{
    bool x = false;
    for(short i = 0; i < 5; i++)
    {
        if(ms[i] == *cdp)
        {
            x = true;
            printf("Число %d принадлежит множеству %c[%d]\n", *cdp, bukva, i);
        }
    }
    if(x == false)
    {
        printf("Число %d не принадлежит множеству %c\n", *cdp, bukva);
    }
}

void intersection_arr (char sim1, char sim2, int * ms1, int * ms2, int * b)
{
    for(short a = 0; a < 5; a++)
    {
        if(ms1[a] == ms2[*b])
        {
            printf("Массивы пересекаются в %c[%d]=%d %c[%d]=%d\n", sim1, a, ms1[a], sim2, *b, ms2[*b]);
        }
    }
}

int mygetch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}
