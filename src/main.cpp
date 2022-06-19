#include <Arduino.h>
#include <TFT_eSPI.h>
#include <China_TFT.h>


TFT_eSPI tft = TFT_eSPI();


void setup()
{
    // 初始化
    tft.init();
    tft.setRotation(0);
    tft.fillScreen(TFT_BLACK);
    tft.setSwapBytes(true);
    //文字
    tft.drawBitmap(10, 10, str_1,16, 16, TFT_WHITE);
}
void loop()
{
}