// FAZ REQUISICAO A URL CONFIGURADA, SWITCH COM HTTP STATUS --------------------------------------------------------
void GetRequest(String url) {
  yield();
  if (reconnect()) {
    WiFiClient client;
    HTTPClient http;
    Serial.println(url);
    if (http.begin(client, url)) {
      Serial.println("http.begin ok");
    }
    delay(100);
    int httpCode = http.GET();
    Serial.print("HTTP STATUS: ");
    const String& payload = http.getString();
    Serial.println(httpCode); 
    Serial.println(payload);

    if (httpCode > 0) { 
      switch (httpCode) {
        yield();
        case 200:
            Serial.println("Requisicao concluída com sucesso!");
          break;

        case 201:
        Serial.println("Requisicao 201!");
        break;

        case 203:
        Serial.println("Requisicao GET id1!");
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