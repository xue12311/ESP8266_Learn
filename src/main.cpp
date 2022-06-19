#include <Arduino.h>
#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();
void setup()
{
    // 初始化
    tft.init();
    //清理屏幕  设置屏幕背景色
    tft.fillScreen(TFT_BLACK);
    // //绘制 空心矩形
    // tft.drawRect(10, 10, 50, 50, TFT_WHITE);
    // //绘制 实心矩形
    // tft.fillRect(10, 60, 50, 100, TFT_BLUE);
    // //绘制 空心圆角矩形
    // tft.drawRoundRect(10, 110, 50, 110, 10, TFT_GREEN);
}

void loop()
{
}