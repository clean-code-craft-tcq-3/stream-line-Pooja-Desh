#include <stdio.h>
#include "Data_Sender.hpp"

void readSenderDataFromFile(float *Temperature, int *StateOfCharge,char *inputFileName)
{
  FILE *SensorDataFile = fopen(inputFile,"r");
  if (SensorDataFile != NULL)
  {for(int FileIndex = 0; fscanf(SensorDataFile,"%f %d\n",Temperature[FileIndex],StateOfCharge[FileIndex]); FileIndex++)}
  fclose(SensorDataFile);
}

void sendDataOnConsole(float *Temperature, int *StateOfCharge)
{
  printf("Temperature  StateOfCharge\n");
  for(int ReadingIndex=0; ReadingIndex < 50; ReadingIndex++)
  {
    printf("%f\t %d\n",Temperature[ReadingIndex],StateOfCharge[ReadingIndex]);
  }
}
