Nanoshield_LoadCell
===================

Esta é uma biblioteca Arduino para medir peso usando células de carga e o IC ADS1230 da Texas Instruments.

* Código fonte: https://github.com/circuitar/Nanoshield_LoadCell
* Documentação: http://nanoshield-loadcell.readthedocs.org/
* Placa de referência: `LoadCell Nanoshield`_ da Circuitar_

Os recursos da biblioteca incluem:

* Conversão para unidades de peso, com base na capacidade e sensibilidade da célula de carga
* Filtro de média móvel, com número configurável de amostras
* Definir ponto de peso zero (tara)
* Obtenha medidas em unidades de peso ou valor bruto de 20 bits
* Amostragem contínua usando temporizador de hardware (Timer 2)
* Calibração de deslocamento ADS1230

**Nota**: esta biblioteca usa Timer 2 no microcontrolador ATmega, ou Timer 5 em ATmega2560 e ATmega1280.
No ATmega168 e ATmega328 (ou seja, Arduino UNO ou similar), o uso desta biblioteca irá interferir com a função `tone()`.

Para instalar, basta clicar em **Download ZIP** e instalá-lo usando **Sketch > Include Library... > Add .ZIP Library** no Arduino IDE.

Os seguintes exemplos_ são fornecidos:

* ReadWeight_ mostra como fazer uma medição de peso simples usando uma célula de carga.
* LcdDigitalWeightScale_ uma balança de peso digital usando uma célula de carga e um display LCD.
* MultiWeight_ mostra como ler mais de um peso usando várias células de carga.
* ReadRawValue_ lê o valor inteiro bruto de 20 bits do IC ADS1230.
* ReadWeightNoAveraging_ lê o peso sem calcular a média (o padrão é calcular a média das últimas 10 amostras).
* ReadWeightLowGain_ usa ganho baixo para medir uma faixa de peso mais ampla.
* OffsetCalibration_ mostra como usar a calibração de deslocamento.

.. _`LoadCell Nanoshield`: https://www.circuitar.com/nanoshields/modules/loadcell/
.. _Circuitar: https://www.circuitar.com/
.. _examples: https://github.com/circuitar/Nanoshield_LoadCell/blob/master/examples/
.. _ReadWeight: https://github.com/circuitar/Nanoshield_LoadCell/blob/master/examples/ReadWeight/ReadWeight.ino
.. _LcdDigitalWeightScale: https://github.com/circuitar/Nanoshield_LoadCell/blob/master/examples/LcdDigitalWeightScale/LcdDigitalWeightScale.ino
.. _MultiWeight: https://github.com/circuitar/Nanoshield_LoadCell/blob/master/examples/MultiWeight/MultiWeight.ino
.. _ReadRawValue: https://github.com/circuitar/Nanoshield_LoadCell/blob/master/examples/ReadRawValue/ReadRawValue.ino
.. _ReadWeightNoAveraging: https://github.com/circuitar/Nanoshield_LoadCell/blob/master/examples/ReadWeightNoAveraging/ReadWeightNoAveraging.ino
.. _ReadWeightLowGain: https://github.com/circuitar/Nanoshield_LoadCell/blob/master/examples/ReadWeightLowGain/ReadWeightLowGain.ino
.. _OffsetCalibration: https://github.com/circuitar/Nanoshield_LoadCell/blob/master/examples/OffsetCalibration/OffsetCalibration.ino

----

Copyright (c) 2015 Circuitar
Todos os direitos reservados.

Este software é lançado sob uma licença MIT. Consulte o arquivo de LICENÇA em anexo para obter detalhes.
