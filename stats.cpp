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

/*float min (const std::vector<float>& input,int count)
{
  float min = input[0];
    for (int i=1;i<count;i++)
    {
        if(input[i]<min)
        {
            min= input[i];
        }
    }
    return min;
}


float max (const std::vector<float>& input,int count)
{
  float max =input[0];
    for (int i=1;i<count;i++)
    {
        if(input[i]>max)
        {
            max = input[i];
        }
    }
    return max;
}*/


Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& input) {
    
    struct Stats computedValues;
    int count = input.size();
    if (count==0)
    {
      computedValues.average = std::numeric_limits<float>::quiet_NaN();
      computedValues.min = std::numeric_limits<float>::quiet_NaN();
      computedValues.max = std::numeric_limits<float>::quiet_NaN();
      return computedValues;
    }
  else
  {
        computedValues.average=avg(input,count);
        computedValues.min= *min_element(input.begin(),input.end());
        computedValues.max= *max_element(input.begin(),input.end());
        return computedValues;
  }
    
}

