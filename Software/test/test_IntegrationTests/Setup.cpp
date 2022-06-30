#include <Arduino.h>
#include <gmock/gmock.h>

void setup()
{
    Serial.begin(115200);
    delay(1000);

    ::testing::InitGoogleMock();   
    if (RUN_ALL_TESTS());
}

void loop() {}
