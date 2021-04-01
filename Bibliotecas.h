// Bibliotecas necessarias no projeto

#include <SPI.h>
#include "Wire.h"
#include "string.h"
#include <Ticker.h>
#include <WiFiUdp.h>
#include <Arduino.h>
#include <NTPClient.h>
#include <ArduinoOTA.h>
#include <WiFiClient.h>
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <SoftwareSerial.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClientSecureBearSSL.h>

#define SSID "Nome da sua rede"
#define PASSWD "Senha da sua rede" 
ESP8266WiFiMulti WiFiMulti;
