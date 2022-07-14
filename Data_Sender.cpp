#include <stdio.h>
#include "Data_Sender.hpp"

void readSenderDataFromFile(float *Temperature, int *StateOfCharge,char *inputFileName)
{
  float TemperatureData;
  int StateOfChargeData;
  
  FILE *SensorDataFile = fopen(inputFileName,"r");
  if (SensorDataFile != NULL)
  {
    for(int FileIndex = 0; fscanf(SensorDataFile,"%lf %d\n", &TemperatureData, &StateOfChargeData)!=EOF; FileIndex++)
    {
      Temperature[FileIndex] = TemperatureData;
      StateOfCharge[FileIndex] = StateOfChargeData;
    }
  }
  fclose(SensorDataFile);
}

void sendDataOnConsole(float *Temperature, int *StateOfCharge)
{
  printf("Temperature  StateOfCharge\n");
  for(int ReadingIndex=0; ReadingIndex < 50; ReadingIndex++)
  {
    printf("%lf\t %d\n",Temperature[ReadingIndex],StateOfCharge[ReadingIndex]);
  }
}
