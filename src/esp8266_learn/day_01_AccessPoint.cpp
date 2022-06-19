//#include <Arduino.h>
///**
// *  NodeMCU 接入点模式
// */
//#include <ESP8266WiFi.h>
//
////创建 wifi ,  wifi 名称为 xue
//const char *ssid = "xue";
////创建 wifi ,  wifi 密码为 12345678
//const char *password = "12345678";
//
//void setup() {
//    //启用串口通讯
//    Serial.begin(9600);
//    //启动NodeMCU的AP模式
//    WiFi.softAP(ssid, password);
//    //监听串口
//    Serial.println("Access Point Mode :");
//    //输出 wifi的名称
//    Serial.println("Wifi Name : " + String(ssid));
//    //输出 wifi的密码
//    Serial.println("Wifi PassWord : " + String(password));
//    //NodeMCU的IP地址
//    Serial.println("IP address: " + WiFi.softAPIP().toString());
//}
//
//void loop() {
//}