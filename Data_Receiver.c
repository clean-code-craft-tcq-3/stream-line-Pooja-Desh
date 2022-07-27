#include "Data_Receiver.h"

void readDataFromConsole(float* Temperature, float* SOC)
{
  for(int index = 0; index < readings_count; index++)
  {
    scanf("%f ,%f ",&Temperature[index],&SOC[index]);
  }
}
  

int main()
{
  float Temperature[readings_count] = {0};
  float SOC[readings_count] = {0};
  readDataFromConsole(Temperature,SOC);
  return 0;
}
  

