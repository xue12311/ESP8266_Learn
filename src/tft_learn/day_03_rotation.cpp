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
//     tft.setTextColor(TFT_BLUE);
// }

// void loop()
// {
//     //设置屏幕旋转 0度 （默认角度）
//     tft.setRotation(0);
//     //设置起始坐标(18, 147)
//     tft.setCursor(18, 147);
//     //清理屏幕  设置屏幕背景色
//     tft.fillScreen(TFT_BLACK);
//     tft.println("Rotate : 0 degree");
    
//     //休眠 1 s
//     delay(1000);

//     //设置屏幕旋转 90度
//     tft.setRotation(1);
//     //设置起始坐标(55, 107)
//     tft.setCursor(55, 107);
//     //清理屏幕  设置屏幕背景色
//     tft.fillScreen(TFT_BLACK);
//     tft.println("Rotate : 90 degree");

//     //休眠 1 s
//     delay(1000);

//     //设置屏幕旋转 180度
//     tft.setRotation(2);
//     //设置起始坐标(10, 147)
//     tft.setCursor(10, 147);
//     //清理屏幕  设置屏幕背景色
//     tft.fillScreen(TFT_BLACK);
//     tft.println("Rotate : 180 degree");

//     //休眠 1 s
//     delay(1000);

//     //设置屏幕旋转 270度
//     tft.setRotation(3);
//     //设置起始坐标(45, 107)
//     tft.setCursor(45, 107);
//     //清理屏幕  设置屏幕背景色
//     tft.fillScreen(TFT_BLACK);
//     tft.println("Rotate : 270 degree");

//     //休眠 1 s
//     delay(1000);
// }