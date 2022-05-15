//#include <Arduino.h>
///**
// * NodeMCU无线终端模式连接WiFi
// **/
//
//#include <ESP8266WiFi.h>
//
////需要连接的WiFi名称
//const char *ssid = "public void main () {}";
////需要连接的WiFi密码
//const char *password = "zhangjiaxue";
//
//void setup() {
//    //启用串口通讯
//    Serial.begin(9600);
////连接WiFi
//    WiFi.begin(ssid, password);
//    Serial.println(String(ssid) + " WiFi 连接中...");
//    int i = 0;
//    //循环判断 WiFi连接状态
//    while (WiFi.status() != WL_CONNECTED) {
//        //延迟 1 s
//        delay(1000);
//        i++;
//        Serial.print(i + "s");
//    }
//    Serial.println("WiFi 连接成功");
//    Serial.println("IP地址: " + WiFi.localIP().toString());
//}
//
//void loop() {
//}