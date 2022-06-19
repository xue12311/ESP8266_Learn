#include <Arduino.h>
#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();
void setup()
{
    // 初始化
    tft.init();
    //设置屏幕背景色
    tft.fillScreen(TFT_BLACK);

}

void loop()
{
}