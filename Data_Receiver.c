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
  char consoleoutput[count][50];
  readDataFromConsole(consoleoutput);
  return 0;
}
  

