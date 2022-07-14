#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Data_Sender.h"

TEST_CASE("Check if data is read from the file")
{
float Temperature[TotalNoOfReadings] = {0};
int SOC[TotalNoOfReadings] = {0};
float expectedOutput[3][2] = {{10.2,1},{32.4,2},{25.1,3}};
FILE* fptr = fopen("./SensorData.txt","r");
readDataFromFile(Temperature, SOC, "./SensorData.txt");

for(int i = 0; i < 3; i++)
  {
    REQUIRE(Temperature[i] == expectedOutput[i][0]);
    REQUIRE(SOC[i] == expectedOutput[i][1]);
   }
}
fclose(fptr);
