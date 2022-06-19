// #include <Arduino.h>
// #include <TFT_eSPI.h>
// TFT_eSPI tft = TFT_eSPI();
// void setup()
// {
//     // 初始化
//     tft.init();
//     //清理屏幕  设置屏幕背景色
//     tft.fillScreen(TFT_BLACK);
//     //设置 4号字体 字体颜色为 蓝色
//     tft.setTextFont(4);
//     //设置起始坐标(15, 20)
//     tft.setCursor(15, 20);
//     // RGB颜色转GBR565
//     uint16_t yellow = tft.color565(255, 255, 0);
//     //设置颜色
//     tft.setTextColor(yellow);
//     // 在屏幕中间显示文字
//     tft.println("Hello World!");

//     //显示文字 Moonbeam (10,10)位置
//     tft.drawString("Moonbeam ", 20, 50);
//     //绘制字符串 （居左）
//     tft.drawString("Hello World!", 20, 70);
//     //绘制字符串 （居左）
//     tft.drawString("Hello World!", 20, 90, 4);
//     //绘制字符串 （居中）
//     tft.drawCentreString("Hello World!", 20, 110, 4);
//     //绘制字符串 （居右）
//     tft.drawRightString("Hello World!", 20, 130, 4);

//     //绘制字符
//     tft.drawChar('A', 20, 150);
//     //绘制浮点数
//     tft.drawFloat(1.23456, 5, 20, 170, 4);
//     //绘制数字
//     tft.drawNumber(9945, 20, 200, 4);
// }

// void loop()
// {
// }
