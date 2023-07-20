#ifndef _MPU6050_H_
#define _MPU6050_H_

#include<Wire.h>

extern long accelX, accelY, accelZ;      // 定义为全局变量，可直接在函数内部使用
extern float gForceX, gForceY, gForceZ;
 
extern long gyroX, gyroY, gyroZ;
extern float rotX, rotY, rotZ;

void setupMPU();
void recordAccelRegisters();
void processAccelData();
void recordGyroRegisters();
void processGyroData();
void printData();

#endif