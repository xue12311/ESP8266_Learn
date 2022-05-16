//#include <Arduino.h>
//
///**
// * 建立基本网络服务器
// */
//#include <ESP8266WiFi.h>
//#include <ESP8266WiFiMulti.h>
//#include <ESP8266WebServer.h>
//
//ESP8266WiFiMulti wifiMulti;
////建立ESP8266WebServer对象  端口号: 80
//ESP8266WebServer esp8266_server(80);
//
//
////处理网站根目录“/”的访问请求
//void handleRoot() {
//    esp8266_server.send(200, "text/plain", "Hello form ESP8266");
//}
//// 设置处理404情况
//void handleNotFound(){
//    esp8266_server.send(404, "text/plain", "404: Not Found");
//}
//
//void setup() {
//    //启用串口通讯
//    Serial.begin(9600);
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
//    esp8266_server.on("/",handleRoot);
//    esp8266_server.onNotFound(handleNotFound);
////--------"启动网络服务功能"程序部分结束--------
//    Serial.print("HTTP esp8266_server started\n");
//
//}
//
//void loop() {
//    // 处理http服务器访问
//    esp8266_server.handleClient();
//}
