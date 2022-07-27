#include "test/catch.hpp"
#include "Data_Receiver.h"

TEST_CASE("Tests to check whether sensor data is read from console") 
{
  float Temperature[readings_count] = {0};
  float SOC[readings_count] = {0};
  receiveAndProcessSensorData(&Temperature[0],&SOC[0]);
}
