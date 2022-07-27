#include "Data_Receiver.h"

void readDataFromConsole(float* Temperature, float* SOC)
{
  for(int index = 0; index < readings_count; index++)
  {
    scanf("%f ,%f ",&Temperature[index],&SOC[index]);
  }
}

float getMaxValue(float *sensordata)
{
  float maxvalue = sensordata[0];
  for(int index = 0; index < readings_count; index++)
  {
    if(sensordata[index] > maxvalue)
    {
      maxvalue = sensordata[index];
    }
  }
  return maxvalue;
}

float getMinValue(float *sensordata)
{
  float minvalue = sensordata[0]; 
  for(int index = 0; index < readings_count; index++)
  {
    if(sensordata[index] < minvalue)
    {
      minvalue = sensordata[index];
    }
  }
  return minvalue;
}

  

int main()
{
  float Temperature[readings_count] = {0};
  float SOC[readings_count] = {0};
  readDataFromConsole(&Temperature[0],&SOC[0]);
  return 0;
}
  

