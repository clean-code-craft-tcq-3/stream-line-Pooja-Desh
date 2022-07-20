#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "Data_Sender.hpp"

TEST_CASE("Check if data is read from the file")
{
float Temperature[50] = {0};
int SOC[50] = {0};
float expectedOutput[3][2] = {{10,1},{20.2,2},{34,3}};
FILE* fptr = fopen("./SensorData.txt","r");
readSenderDataFromFile(Temperature, SOC, "./SensorData.txt");
fclose(fptr);
  
for(int i = 0; i < 3; i++)
  {
    REQUIRE(Temperature[i] == expectedOutput[i][0]);
    REQUIRE(SOC[i] == expectedOutput[i][1]);
   }
  void readSenderDataFromFile(Temperature, StateOfCharge,"./SensorData.txt");
  void sendDataOnConsole(Temperature, StateOfCharge);
}

