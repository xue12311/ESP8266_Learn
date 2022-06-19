//#include <Arduino.h>
///**
// * NodeMCU无线终端模式连接WiFi
// **/
//#include <ESP8266WiFi.h>
//#include <ESP8266WiFiMulti.h>
//
//ESP8266WiFiMulti mWiFiMulti;
//
//void setup() {
//    //启用串口通讯
//    Serial.begin(9600);
//    //使用时 需要连接的WiFi
//    mWiFiMulti.addAP("public void main () {}", "zhangjiaxue");
//    mWiFiMulti.addAP("EU-education", "eu456987");
//    Serial.println("WiFi 连接中...");
//    int i = 0;
//    //连接信号最强的那一个WiFi信号
//    while (mWiFiMulti.run() != WL_CONNECTED) {
//        delay(1000);
//        Serial.print(".");
//    }
//    //WiFi连接成功
//    Serial.println("WiFi 连接成功\n");
//    Serial.println("当前连接 WiFi名称 ：" + String(WiFi.SSID()));
//    Serial.println("当前连接 WiFi密码 ：" + String(WiFi.psk()));
//    Serial.println("当前连接 WiFi信号强度 ：" + String(WiFi.RSSI()));
//    Serial.println("当前连接 WiFi IP地址 ：" + WiFi.localIP().toString());
//}
//
//void loop() {
//}