#include "Data_Receiver.h"
#include "Data_Sender.hpp"

void readDataFromConsole(float* Temperature, int* SOC)
{
  for(int index = 0; index < readings_count; index++)
  {
    scanf("%f ,%f ",&Temperature[index],&SOC[index]);
  }
}

float getMaxValue(float *sensorparameter)
{
  float maxvalue = sensorparameter[0];
  for(int index = 0; index < readings_count; index++)
  {
    if(sensorparameter[index] > maxvalue)
    {
      maxvalue = sensorparameter[index];
    }
  }
  return maxvalue;
}

float getMinValue(float *sensorparameter)
{
  float minvalue = sensorparameter[0]; 
  for(int index = 0; index < readings_count; index++)
  {
    if(sensorparameter[index] < minvalue)
    {
      minvalue = sensorparameter[index];
    }
  }
  return minvalue;
}

float calculateSimpleMovingAverage(float *sensorparameter)
{
  float SMA = 0.0;
  float total = 0.0;
  for(int index = (readings_count-5); index < readings_count; index++)
  {
    total += sensorparameter[index];
  }
  SMA = total/5; 
  return SMA;
}

void printReceivedDataToConsole(float *sensorparameter, float maxvalue, float minvalue, float SMA)
{
  printf("Data received from sender\n");
  for(int index = 0; index < readings_count; index++)
  {
    printf("%f\n",sensorparameter[readings_count]);
  }
  printf("Maximum value: %f, Minimum value: %f, SimpleMovingAverage: %f\n",maxvalue,minvalue,SMA);  
}

void receiveAndProcessSensorData(float* Temperature, int* SOC)
{
  readDataFromConsole(Temperature,SOC);
  printReceivedDataToConsole(Temperature,getMaxValue(Temperature),getMinValue(Temperature),calculateSimpleMovingAverage(Temperature));
  printReceivedDataToConsole(SOC,getMaxValue(SOC),getMinValue(SOC),calculateSimpleMovingAverage(SOC));
}



  

