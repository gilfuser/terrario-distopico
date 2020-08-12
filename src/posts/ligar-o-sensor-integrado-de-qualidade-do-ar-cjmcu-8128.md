---
layout: layouts/post.njk
title: "Ligar o sensor integrado de qualidade do ar: CJMCU-8128"
metaTitle: CJMCU-8128
metaDesc: "sensor integrado de qualidade do ar: CJMCU-8128"
date: 2020-08-10T02:57:13.296Z
tags:
  - sensor
  - CJMCU-8128
  - microcontroller
  - qualidade do ar
  - CO²
  - umidade
  - temperatura
  - pressão
---
Comecei pelo ar, já que ainda tenho que aumentar a minha quantidade de micro-organismos eficientes antes de começar o processo todo.
Então liguei o CJMCU-8128. que aparentemente sao três sensores integrados: CO², temperatura, umidade e pressão. Eles se comunicam através do i²c.
Curiosamente o i²c scanner, que serve apenas para checar se as conexões estão corretas, diz que há outros sensores também.
No final, o barômetro não foi encontrado no sketch que inclui sua biblioteca.

Vejam o que diz um e outro sketches:

```css
/*
Scanning...
Device found at address 0x40  (PCA9685,Si7021,MS8607)
Device found at address 0x5A  (MPR121)
Device found at address 0x76  (MS5607,MS5611,MS5637,BMP280)

setup: hardware    version: 12

setup: bootloader  version: 1000

setup: application version: 1100

BMP280 test

Could not find a valid BMP280 sensor, check wiring!
*/
```

Tarefa para amanhã

---

Funciona!

levei um dia a mais em relacao ao que imaginava porquê me propus a usar o Platformio + VSCode como IDE e não a IDE do Arduino por suas limitacoes, e além disso é um código que ainda será bem expandido e portanto tem que ser bem organizado desde o início.

Mais detalhes em breve.
Veja o código, que beleza! [Aqui](https://github.com/gilfuser/musica-em-decomposicao/tree/master/codigo/cjmcu-8128_qualidade-do-ar/src)