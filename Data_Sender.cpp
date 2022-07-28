#include <stdio.h>
#include <math.h>
#include "Data_Sender.hpp"

void readSenderDataFromFile(float *Temperature, float *StateOfCharge,char *inputFileName)
{
  float TemperatureData;
  float StateOfChargeData;
  
  FILE *SensorDataFile = fopen(inputFileName,"r");
  if (SensorDataFile != NULL)
  {
    for(int FileIndex = 0; fscanf(SensorDataFile,"%f %f\n", &TemperatureData, &StateOfChargeData)!=EOF; FileIndex++)
    {
      Temperature[FileIndex] = TemperatureData;
      StateOfCharge[FileIndex] = StateOfChargeData;
    }
  }
  fclose(SensorDataFile);
}

void sendDataOnConsole(float *Temperature, float *StateOfCharge)
{
  //printf("Temperature  StateOfCharge\n");
  for(int ReadingIndex=0; ReadingIndex < 50; ReadingIndex++)
  {
    printf("%.2f\t %.2f\n",Temperature[ReadingIndex],StateOfCharge[ReadingIndex]);
  }
}
