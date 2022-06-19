//#include <Arduino.h>
//
///**
// * 建立基本网络服务器 显示 引脚 D3 状态
// */
//#include <ESP8266WiFi.h>
//#include <ESP8266WiFiMulti.h>
//#include <ESP8266WebServer.h>
//
////按钮引脚 D3
//#define buttonPin D3
//
//ESP8266WiFiMulti wifiMulti;
////建立ESP8266WebServer对象  端口号: 80
//ESP8266WebServer esp8266_server(80);
//
////存储 引脚状态
//bool pinState = false;
//
//void handleRoot() {
//    //引脚状态
//    String displayPinState;
//    if (pinState == HIGH) {
//        //按键引脚 D3 为 高电平
//        displayPinState = "BUTTON STATE : HIGH";
//    } else {
//        // 按键引脚 D3 为 低电平
//        displayPinState = "BUTTON STATE : LOW";
//    }
//    // 向浏览器发送按键状态信息
//    esp8266_server.send(200, "text/plain", displayPinState);
//}
//
//void handleNotFound() {
//    esp8266_server.send(404, "text/plain", "404: Not Found");
//}
//
//void setup() {
//    //启用串口通讯
//    Serial.begin(9600);
//    //将 按键引脚D3 设置为 输入上拉模式
//    pinMode(buttonPin, INPUT_PULLUP);
//    //使用时 需要连接的WiFi
//    wifiMulti.addAP("public void main () {}", "zhangjiaxue");
//    wifiMulti.addAP("EU-education", "eu456987");
//    //连接 WiFi
//    int i = 0;
//    while (wifiMulti.run() != WL_CONNECTED) {
//        delay(1000);
//        Serial.print(i++);
//        Serial.print(".");
//    }
//    Serial.print("wifi 连接成功 \n");
//    Serial.print("WiFi名称:" + String(WiFi.SSID()));
//    Serial.print("IP地址: " + WiFi.localIP().toString());
//
//    //启动网络服务
//    Serial.println("启动网络服务");
////--------"启动网络服务功能"程序部分开始-------- //
//    esp8266_server.begin();
//    //设置服务器根目录即'/'的函数
//    esp8266_server.on("/", handleRoot);
//    //设置处理404情况的函数
//    esp8266_server.onNotFound(handleNotFound);
////--------"启动网络服务功能"程序部分结束--------
//    Serial.print("HTTP esp8266_server started\n");
//
//}
//
//void loop() {
//    //处理 Http 服务器访问
//    esp8266_server.handleClient();
//    //获取 引脚 D3 状态
//    pinState = digitalRead(buttonPin);
//}
