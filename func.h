#pragma once
#include <stdio.h>
#include <stdlib.h>

void input_mass(int * ms)
{
    for(short i = 0; i < 5; i++)
    {
        scanf("%d", &ms[i]);
    }
}

void output_mass(int * ms)
{
    printf("[");
    for(short i = 0; i < 4; i++)
    {
        printf("%d,", ms[i]);
    }
    printf("%d]", ms[4]);
}

void proverka_mass(int * ms, char bukva, int * cdp)
{
    for(short i = 0; i < 5; i++)
    {
        if(ms[i] == *cdp)
        {
            printf("Число %d пренадлежит множеству %c[%d]\n", *cdp, bukva, ms[i]);
        }
        else
        {
            printf("Число %d не пренадлежит множеству %c[%d]\n", *cdp, bukva, ms[i]);
        }
    }
}

void crossing_mass(char sim1, char sim2, int * ms1, int * ms2, int * b)
{
    for(short a = 0; a < 5; a++)
    {
        if(ms1[a] == ms2[*b])
        {
            printf("Массивы пересекаются в %c[%d]=%d %c[%d]=%d\n", sim1, a, ms1[a], sim2, *b, ms2[*b]);
        }
    }
}

//test
