/**
  * Leia o peso de uma célula de carga usando o IC ADS1230 no LoadCell Nanoshield.
  *
  * Este exemplo usa as seguintes configurações padrão:
  * - Pino CS definido como D8 (jumper D8 fechado)
  * - Alto ganho (jumper GAIN fechado)
  * - Média das últimas 10 amostras
  *
  * Copyright (c) 2015 Circuitar
  * Este software é lançado sob a licença MIT. Consulte o arquivo de LICENÇA em anexo para obter detalhes.
  */
#include <SPI.h>
#include <Nanoshield_LoadCell.h>

// Célula de carga com capacidade de 100kg e sensibilidade de 3mV/V
Nanoshield_LoadCell loadCell(100000, 3);

void setup() {
   Serial.begin(9600);
   loadCell.begin();
  
   // Aguarda a calibração e configura o valor atual para peso zero (tara)
   while (!loadCell.updated());
   loadCell.setZero();
}

loop void() {
   if (loadCell.updated()) {
     Serial.print(loadCell.getWeight(), 0);
     Serial.println("g");
   }
}
