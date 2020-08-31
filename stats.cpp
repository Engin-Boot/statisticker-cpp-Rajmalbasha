#include<bits/stdc++.h>
#include "stats.h"

float avg (const std::vector<float>& input,int count)
{
  float sum =0;
    for (int i=0;i<count;i++)
    {
        sum+=input[i];
    }
    return sum/count;
}

float min (const std::vector<float>& input,int count)
{
  float min = input[0];
    for (int i=1;i<count;i++)
    {
        if(count[i]<min)
        {
            min= count[i];
        }
    }
    return min;
}


float avg (const std::vector<float>& input,int count)
{
  float max =input[0];
    for (int i=1;i<count;i++)
    {
        if(count[i]>max)
        {
            max = count[i];
        }
    }
    return max;
}


Stats Statistics::ComputeStatistics(const std::vector<float>& input) {
    
    Stats computedValues;
    int count = input.size();
    if (count>0)
    {
    computedValues.avg=float avg(input,count);
        computedValues.min=float min(input,count);
        computedValues.max=float max (input,count);
        return computedValues;
    }
    
}

