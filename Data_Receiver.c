#include "Data_Receiver.h"

void readDataFromConsole(char consoleoutput[count][50])
{
  char data[count];
  char *output;
  output = fgets(data,count,stdin);
  for (int index=0;output!=NULL;index++)
  {
    output = fgets(data,count,stdin);
    strcpy(consoleoutput[index],data);
  }
}

int main()
{
  char consoleoutput[count][50];
  readDataFromConsole(consoleoutput);
  return 0;
}
  

