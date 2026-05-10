/*
    we have 24 bit adc 
    but we need to read only 10 bits.
    how to calculate. 
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 1024 // 500kg
#define MIN 0  //0kg

#define ONEKG 2.048
int main()
{
  //  int adc_count_24bit = rand()%16777216;
    int adc_count_24bit = 16777216;
    int adc_count_10bit = adc_count_24bit>>14;

    int stepCount_RunTime = 1+rand()%1024;

    float kg =0;
    printf("24 bit = %d\n",adc_count_24bit);
    printf("10 bit = %d\n",adc_count_10bit);

    printf("stepCount_RunTime = %d\n",stepCount_RunTime);

    kg=(float)(stepCount_RunTime/ONEKG);
    printf("kg = %f\n",kg);



}