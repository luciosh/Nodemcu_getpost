/* Nodemcu - Get e Post
* AUTOR: Sergio Lucio - ABR
* DESCRICAO PROJETO: Metodo de requisicao GET e POST com ESP8266 - NODEMCU
* VERSAO: 1.0
* DATA VERSAO: 30/03/21
*/

#include "Bibliotecas.h"

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("INICIANDO...");

  while(!reconnect()){
    Serial.println("Conectando...");
    delay(3000);
  }
}

void loop() {

  PostRequest("http://url_que_vc_pretende_acessar/PostNode.php");
  delay(5000);
  GetRequest("http://url_que_vc_pretende_acessar/GetNode.php?var1=1");
  delay(5000);
}
