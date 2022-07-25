#include "Data_Receiver.h"

void readDataFromConsole(char consoleoutput[count][10])
{
  char data[count];
  char *output;
  output = fgets(data,count,stdin);
  for (int index=0;output!=NULL;index++)
  {
    output = fgets(data,count,stdin);
    strcpy(consoleoutput[index],data);
    puts(consoleoutput[index]);
    printf("\n%d",index);
  }
}

int main()
{
  char consoleoutput[count][10];
  readDataFromConsole(consoleoutput);
  printf("\n testttt");
  return 0;
}
  

