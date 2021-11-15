#pragma once
#include <stdio.h>
#include <stdlib.h>

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
    for(short i = 0; i < 5; i++)
    {
        if(ms[i] == *cdp)
        {
            printf("Число %d принадлежит множеству %c[%d]\n", *cdp, bukva, ms[i]);
        }
        else
        {
            printf("Число %d не принадлежит множеству %c[%d]\n", *cdp, bukva, ms[i]);
        }
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
