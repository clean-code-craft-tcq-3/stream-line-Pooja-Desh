#define CATCH_CONFIG_MAIN
#include "test/catch.hpp"
#include "Data_Receiver.h"
#include "Data_Sender.hpp"

TEST_CASE("Tests to check whether sensor data is read from console") 
{
  float Temperature_value[readings_count] = {0};
  float SOC_value[readings_count] = {0};
  float observedMaxValue, observedMinValue, observedSMAValue, expectedMaxValue, expectedMinValue, expectedSMAValue;
  receiveAndProcessSensorData(&Temperature_value[0],&SOC_value[0]);
  float expectedoutput[2][2] = {{10,1}, {20.2,2}};
  for(int i=0;i<2;i++)
  {
    REQUIRE(Temperature_value[i] == expectedoutput[i][0]);
    REQUIRE(SOC_value[i] == expectedoutput[i][1]);
  }
  //To check Max, Min and SMA values of Temperature
  expectedMaxValue = 92;
  expectedMinValue = -15;
  expectedSMAValue = 18.3;
  observedMaxValue = getMaxValue(&Temperature_value[0]);
  observedMinValue = getMinValue(&Temperature_value[0]);
  observedSMAValue = calculateSimpleMovingAverage(&Temperature_value[0]);
  REQUIRE(observedMaxValue == expectedMaxValue);
  REQUIRE(observedMinValue == expectedMinValue);
  REQUIRE(observedSMAValue == expectedSMAValue);
  
  //To check Max, Min and SMA values of SOC
  expectedMaxValue = 115;
  expectedMinValue = 3;
  expectedSMAValue = 50;
  observedMaxValue = getMaxValue(&SOC_value[0]);
  observedMinValue = getMinValue(&SOC_value[0]);
  observedSMAValue = calculateSimpleMovingAverage(&SOC_value[0]);
  REQUIRE(observedMaxValue == expectedMaxValue);
  REQUIRE(observedMinValue == expectedMinValue);
  REQUIRE(observedSMAValue == expectedSMAValue);

}
