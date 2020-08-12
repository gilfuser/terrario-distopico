---
layout: layouts/post.njk
title: Detalhes técnicos
date: 2020-07-26T19:43:24.065Z
tags:
  - detalhes tecnicos
  - técnica
  - technical details
  - tecnico
---
### O trabalho pode ser pensado tecnicamente como um sistema de três partes. Explicito a seguir as partes, as características técnicas de cada uma.

---

1. **A Decomposição dos Restos**
Utilizamos uma técnica de compostagem chamada Bokashi. Trata-se da decomposição por via de fermentação anaeróbica de restos de alimentos quaisquer, inclusive carnes, ossos e alimentos cozidos e temperados. O processo é acelerado pela inclusão de micro-organismos específicos, sendo o principal deles o lactobacilo. É bastante simples em termos de aparatos físicos. Utiliza-se em geral dois baldes, um dentro do outro, gerando um espaço para onde, através de furos no balde superior, escorre o líquido proveniente do material orgânico em decomposição. O final do processo resulta em composto de excelente qualidade, tido por muitos como o melhor que há. Esse processo não gera odores de putrefação.
Para efeito expositivo, me interessa que se possa observar diretamente o processo da decomposição do material. Assim, ao invés de baldes, utilizaremos um cilindro de acrílico transparente com uma tampa, um "fundo falso com furos" e uma torneirinha.
Os restos de comida recolhidos e adicionados na composteira serão meus e de colaboradores, até que cheguemos na quantidade necessária. Como abrir a tampa é indesejável, já que a fermentação deve acontecer sem a presença de oxigênio,  a ideia é começar o processo com as quantidades de restos adequadas para criar uma condição melhor para o sistema.

---

2. **Sentir a Decomposição**
Essa parte compreende a utilização de sensores e a digitalização da informação captada por eles.
Sensores serão instalados na composteira, em locais estratégicos dentro do material orgânico, no corpo do cilindro e na água da XXXXX de modo a captar ao vivo as alterações causadas pelo processo de fermentação no ambiente interno e no material em decomposição: calor, pressão, pH, gás carbônico, oxigênio e umidade. Também captaremos, através de microfones de contato, micro-sons produzidos pelas bolhas de gás exaladas e pelos movimentos internos do material devido a mudanças de densidade e umidade. Ainda haverá um microfone na água da válvula que permite a saída de CO² e impede a entrada do O², gerando um fluxo de bolhas.
Os sensores estão conectados a um microcontrolador que converte os dados analógicos em digitais, os organiza e formata para sua utilização na etapa a segui

---

3. **Transformar dados em Música**
Um computador de placa única está conectado ao microcontrolador e recebe um fluxo de dados deste. Estes dados são utilizados como parâmetros em sintetizadores digitais especialmente desenvolvidos para esse trabalho. O som é gerado através de uma placa de áudio de alta-definição acoplada ao computador de placa única que por sua vez, através de saídas de áudio estéreo e os respectivos cabos, se conecta às caixas de som pré-amplificadas.

---

4. **Transmissão Micro-orgânica**
O computador de placa única deverá estar conectado a internet, através de conexão WiFi ou cabo de rede e transmitir o áudio via streaming para uma página dentro da estrutura online do evento (a combinar) assim como os dados em tempo real através de "websockets".
