// FUNCAO A SER APLICADA NO ARQUIVO PRINCIPAL

bool reconnect() {
  int count = 0;
  while ((WiFiMulti.run() != WL_CONNECTED) && count < 60) {
    WiFi.mode(WIFI_STA);
    WiFiMulti.addAP(SSID, PASSWD);
    WiFiMulti.addAP("segundarede", "senhasegunda rede");
    delay(100);
    count++;
  }
  if (count >= 60) {
    Serial.println(">>>>60");
    Serial.println("Problema ao conectar!");
    return 0;
  } else {
    Serial.println("Conectado!");
    return 1;
  }
}

void blink(int tempo = 500){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(tempo);
  digitalWrite(LED_BUILTIN, LOW);
  delay(tempo);
}

