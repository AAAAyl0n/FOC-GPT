#include "display.h"
#include "mpu6050.h"
#include <Wire.h>
#include <WiFi.h>

#define SDA_PIN 38
#define SCL_PIN 39
#define BUTTON_PIN 47

const char* ssid     = "GCXL21609";
const char* password = "password";

WiFiServer server(8081);

float var = 0.0;
int page = 0;

void setup() {
  Serial.begin(115200);
  display_init();
  
  WiFi.begin(ssid, password);//连接WiFi
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    tft.setCursor(0, 0);tft.fillScreen(TFT_BLACK);
    Serial.println("Connecting to WiFi...");
    tft.print("Connecting to WiFi...\n");
  }
  Serial.println(WiFi.localIP());  // Print the IP address

  tft.setCursor(0, 0);
  tft.fillScreen(TFT_BLACK);
  tft.print("Connected to WiFi!\n");
  tft.print(WiFi.localIP());
  Serial.println("Connected to WiFi");

  // Start the server
  server.begin();
  tft.setTextSize(2);

  /*
  Wire.begin(SDA_PIN, SCL_PIN); //IIC库重新映射管脚
  setupMPU(); //设置MPU6050
  */
}

void loop() {
  static bool buttonState = HIGH;
  buttonState = digitalRead(BUTTON_PIN);

  WiFiClient client = server.available();

  if (client) {
    // An incoming message will be available to read
    while (client.available()) {
      String message = client.readStringUntil('\n');
      tft.fillScreen(TFT_BLACK);  // Clear the screen
      tft.setCursor(0, 0);
      tft.print(message);
      Serial.println(message);  // Also print to serial monitor for debugging
    }
    // Close the connection
    client.stop();
    Serial.println("Client disconnected.");
  }


  if (buttonState == LOW) {
    
    delay(50);
  }
  
  /*  
  //  读取MPU6050数据
  recordAccelRegisters();
  recordGyroRegisters();
  printData();  
  */
  
  //delay(100); 
}

