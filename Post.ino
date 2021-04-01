// FAZ REQUISICAO NA URL CONFIGURADA, SWITCH COM HTTP STATUS 
void PostRequest(String url) {
  yield();
  if (reconnect()) {
    WiFiClient client;
    HTTPClient http;
    Serial.println(url);
    if (http.begin(client, url)) {
      Serial.println("http.begin ok");
    }
    delay(100);
    // http.addHeader("Content-Type", "application/json");
    // int httpCode = http.POST("{\"var1\": 2}");
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");
    int httpCode = http.POST("var1=2");
    
    Serial.println(httpCode);
    if (httpCode > 0) { 
        const String& payload = http.getString();
        Serial.println(httpCode); 
        Serial.println(payload);
      switch (httpCode) {
        yield();
        case 200:
            Serial.println("Requisicao concluída com sucesso!");
          break;

        case 201:
        Serial.println("Requisicao id2 POST!");
        break;

        case 404:
        Serial.println("Site nao encontrado!");
        break;

        default:
          break;
      }
    }
    else {
      Serial.println("FAIL REQUEST");
    }
    http.end();
  } else {
    Serial.println("FALHA NA CONEXAO");
  }
}