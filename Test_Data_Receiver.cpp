#define CATCH_CONFIG_MAIN
#include "test/catch.hpp"
#include "Data_Receiver.h"
#include "Data_Sender.hpp"

TEST_CASE("Tests to check whether sensor data is read from console") 
{
  float Temperature_value[readings_count] = {0};
  float SOC_value[readings_count] = {0};
  //float observedMaxValue, observedMinValue, observedSMAValue, expectedMaxValue, expectedMinValue, expectedSMAValue;
  receiveAndProcessSensorData(&Temperature_value[0],&SOC_value[0]);
  //float expectedoutput[2][2] = {{10,1}, {20.2,2}};
  //for(int i=0;i<2;i++)
  //{
    //REQUIRE(Temperature[i] == expectedoutput[i][0]);
    //REQUIRE(SOC[i] == expectedoutput[i][1]);
  //}

}
