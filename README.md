# Música em Decomposição

**Música em deComposição** trata-se da música feita pelo lixo. Escutemos a música viva da decomposição, em grande parte similar à que acontece em nossos corpos, que compartilham com ela os mesmos processos e micro-organismos.
A instalação gera uma composição tocada pelos micro-organismos a partir dos nossos restos, sobras e excessos. Assim, ela nos diz também sobre o que invisibilizamos e silenciamos. Existe, na instalação, um constante pêndulo entre visível-invisível, micro-macro, audível-inaudível, em outras palavras, entre aquilo que acontece nas micro-escalas e o que se produz e reproduz socialmente.

<img src="src/images/trashmusic.jpg?auto=format&q=60" width="800" />


Música em deComposição é um terrário distópico. Um sistema aberto, um simulacro de um meio-ambiente sem oxigênio, alimentado pelo lixo orgânico humano, que contém ciclos próprios de ordem e caos e geram complexidade sem interferência humana durante o processo. É a "jam" de uma banda que toca a música da natureza que raramente é lembrada. Quase inconveniente. Mas viva e transformadora.

---

## Detalhes Técnicos

O trabalho pode ser pensado tecnicamente como um sistema de quatro partes. Explicito a seguir as partes, as características técnicas de cada uma.

### A Decomposição dos Restos

Utilizamos uma técnica de compostagem chamada Bokashi. Trata-se da decomposição por via de fermentação anaeróbica de restos de alimentos quaisquer, inclusive carnes, ossos e alimentos cozidos e temperados. O processo é acelerado pela inclusão de micro-organismos específicos, sendo o principal deles o lactobacilo. É bastante simples em termos de aparatos físicos. Utiliza-se em geral dois baldes, um dentro do outro, gerando um espaço para onde, através de furos no balde superior, escorre o líquido proveniente do material orgânico em decomposição. O final do processo resulta em composto de excelente qualidade, tido por muitos como o melhor que há. Esse processo não gera odores de putrefação.
Para efeito expositivo, me interessa que se possa observar diretamente o processo da decomposição do material. Assim, ao invés de baldes, utilizaremos um cilindro de acrílico transparente com uma tampa, um "fundo falso com furos" e uma torneirinha.
Os restos de comida recolhidos e adicionados na composteira serão meus e de colaboradores, até que cheguemos na quantidade necessária. Como abrir a tampa é indesejável, já que a fermentação deve acontecer sem a presença de oxigênio,  a ideia é começar o processo com as quantidades de restos adequadas para criar uma condição melhor para o sistema.

### Sentir a Decomposição

Essa parte compreende a utilização de sensores e a digitalização da informação captada por eles.
Sensores serão instalados na composteira, em locais estratégicos dentro do material orgânico, no corpo do cilindro e na água da XXXXX de modo a captar ao vivo as alterações causadas pelo processo de fermentação no ambiente interno e no material em decomposição: calor, pressão, pH, gás carbônico, oxigênio e umidade. Também captaremos, através de microfones de contato, micro-sons produzidos pelas bolhas de gás exaladas e pelos movimentos internos do material devido a mudanças de densidade e umidade. Ainda haverá um microfone na água da válvula que permite a saída de CO² e impede a entrada do O², gerando um fluxo de bolhas.
Os sensores estão conectados a um microcontrolador que converte os dados analógicos em digitais, os organiza e formata para sua utilização na etapa a seguir.

### Transformar dados em Música
Um computador de placa única está conectado ao microcontrolador e recebe um fluxo de dados deste. Estes dados são utilizados como parâmetros em sintetizadores digitais especialmente desenvolvidos para esse trabalho. O som é gerado através de uma placa de áudio de alta-definição acoplada ao computador de placa única que por sua vez, através de saídas de áudio estéreo e os respectivos cabos, se conecta às caixas de som pré-amplificadas.

### Transmissão Micro-orgânica
O computador de placa única deverá estar conectado a internet, através de conexão WiFi ou cabo de rede e transmitir o áudio via streaming para uma página dentro da estrutura online do evento (a combinar) assim como os dados em tempo real através de "websockets".

---

## Equipamentos e programas

### Composteira Bokashi

- 1 cilindro acrílico transparente: Ø 0,5 m x 1,0 m
- 3 discos acrílicos transparentes: Ø 0,5 m
  - tampa, fundo e fundo falso perfurado
- 1 círculo acrílico Ø 0, 49 m
  - para pressão do material orgânico
- 1 torneirinha (do tipo de filtro de barro)
  - para drenar o líquido resultante do processo
- 1 Air Lock
  - mangueira transparente e beaker
- 1 kg - EM (micro-organismos eficientes) + farelo
  - iniciador e acelerador do processo de fermentação
- 100 l (aprox.) Restos de comida

### Sensores

- Sensor integrado qualidade do ar (Ccs811 Hdc1080 Bmp280)
  - integra dados de
    - concentração de CO²
    - temperatura e pressão
    - umidade do ar
- Módulo Sensor + Ph Eletrodo Sonda Bnc- phmetro
  - mede o pH do material orgânico e/ou do líquido resultante
- Sensor De Umidade Do Solo Capacitivo - 0378
- Sensor De Temperatura Wzp Pt100

### Captação de Som

- 2 discos piezo revestidos
  - 1 no interior do material orgânico - capta micro-sons do desprendimento de gazes e movimento no material
  - 1 no interior do air-lock, dentro da água - capta o som das bolhas produzidas pela saída do CO²

### Microcontrolador

- Teensy 3.2
  - Os sensores são conectados através de cabos aos pinos (GPIOs) do microcontrolador

### Computador de placa única

- Raspberry Pi 3
  - o microcontrolador se conecta a Raspberry Pi (RasPi) através de cabo USB

### Placa de som

- PiSound
  - conectada à RasPi, gera e possui as saídas de áudio

### Equipamento de áudio (alugado):

- 2 Falantes pré-amplificados Genelec 8030
  - Cabos P10-P10 ou P10-XLR
  - Pedestais
- Sub-woofer Mackie Ativo - DLM12S
  - cabo XLR-XLR

### Conectividade

- Roteador Intelbras ACtion 1200 conectado a internet

---

## Programas

### ArduinoIDE ou MS Visual Studio Code

- programação do microcontrolador

### SuperCollider

- Programação da música e geração do som

### JackTrip

- streaming do som

### NodeJS + websockets

- streaming dos dados via OSC (Open Sound Control)

---

## Blog

Baseado no incrível, simples e muito fácil [Hylia](https://github.com/hankchizljaw/hylia)

Hospedado aqui mesmo [neste repositório](https://github.com/gilfuser/musica-em-decomposicao)

Novidades e a documentação do processo são postados lá (ir)regularmente. Dê uma olhada em:

**[musica-em-decomposicao.ml](https://musica-em-decomposicao.ml)**

<!--

## Terminal commands

### Serve the site locally

```bash
npm start
```

### Build a production version of the site

```bash
npm run production
```

### Compile Sass

```bash
npm run sass:process
```

### Re-generate design tokens for Sass

```bash
npm run sass:tokens
```

## Getting started with the CMS

Before you can use the CMS, you need to do some config in Netlify. Luckily they provide a [very handy guide to get started](https://www.netlify.com/docs/identity/).

In short, though:

- Once you’ve set up the site on Netlify, go to “Settings” > “Identity” and enable Identity
- Scroll down to the “Git Gateway” area, click “Enable Git Gateway” and follow the steps
- Click the “Identity” tab at the top
- Once you’ve enabled identity, click “Invite Users”
- Check the invite link in your inbox and click the link in the email that’s sent to you
- Set a password in the popup box
- Go to `/admin` on your site and login
- You’re in and ready to edit your content!

## Design Tokens and Styleguide

### Design Tokens

Although Hylia has a pretty simple design, you can configure the core design tokens that control the colours, size ratio and fonts.

---

**Note**: _Credit must be given to the hard work [Jina Anne](https://twitter.com/jina) did in order for the concept of design tokens to even exist. You should watch [this video](https://www.youtube.com/watch?v=wDBEc3dJJV8), then [read this article](https://the-pastry-box-project.net/jina-bolton/2015-march-28) and then sign up for [this course](https://aycl.uie.com/virtual_seminars/design_tokens_scaling_design_with_a_single_source_of_truth) to expand your knowledge._

---

To change the design tokens in the CMS, find the “Globals” in the sidebar then in the presented options, select “Theme Settings”.

To change the design tokens directly, edit [`_src/data/tokens.json`](https://github.com/hankchizljaw/hylia/blob/master/src/_data/tokens.json).

The tokens are converted into maps that the Sass uses to compile the front-end CSS, so make sure that you maintain the correct structure of `tokens.json`.

### Styleguide 

Your version of Hylia ships with a Styleguide by default. You can see a demo of the Styleguide at <https://hylia.website/styleguide/>.

You can edit the Styleguide by opening [`src/styleguide.njk`](https://github.com/hankchizljaw/hylia/blob/master/src/styleguide.njk). If you don’t want the Styleguide, delete that file and the page will vanish.

## Sass

Hylia is based on the [WIP v2 version of Stalfos](https://github.com/hankchizljaw/stalfos/tree/feature/v2), which currently has no documentation (I know, I’m bad). Here is some very basic documentation for elements of the new framework that you will encounter on this project.

### Configuration

The whole Sass system is powered by central config file, which lives here: [`_src/scss/_config.scss`](https://github.com/hankchizljaw/hylia/blob/master/src/scss/_config.scss).

Before Sass is compiled, a `_tokens.scss` file is generated from the [design tokens config](https://github.com/hankchizljaw/hylia/blob/master/src/_data/tokens.json) which is required.

Key elements:

- `$stalfos-size-scale`: A token driven size scale which by default, is a “Major Third” scale
- `$stalfos-colors`: A token driven map of colours
- `$stalfos-util-prefix`: All pre-built, framework utilities will have this prefix. Example: the wrapper utility is '.sf-wrapper' because the default prefix is 'sf-'
- `$metrics`: Various misc metrics to use around the site
- `$stalfos-config`: This powers everything from utility class generation to breakpoints to enabling/disabling pre-built components/utilities

### How to create a new utility class with the generator

The utility class generator lets you generate whatever you want, with no opinions on class name or properties affected.

To add a new class, add another item to the exists `$stalfos-config` map. This example adds a utility for floating elements.

```scss
'float':('items':('left':'left','right': 'right'
  ),
  'output': 'responsive',
  'property': 'float'
);
```

The `output` is set to `responsive` which means every breakpoint will generate a prefixed class for itself. If you only wanted elements to float left in the `md` breakpoint, you’d now be able to add a class of `md:float-left` to your HTML elements.

If you only want standard utility classes generating, set the `output` to `standard`.

### Functions

#### `get-color($key)`

Function tries to match the passed `$key` with the `$stalfos-colors` map. Returns null if it can’t find a match.

#### `get-config-value($key, $group)`

Returns back a 1 dimensional (key value pair) config value if available.

#### `get-size($ratio-key)`

Function tries to match the passed `$ratio-key` with the `$stalfos-size-scale`. Returns null if it can’t find a match.

### Mixins

#### `apply-utility($key, $value-key)`

Grabs the property and value of one of the `$stalfos-config utilities` that the generator will generate a class for.

#### `media-query($key)`

Pass in the key of one of your breakpoints set in `$stalfos-config['breakpoints']` and this mixin will generate the `@media` query with your configured value.

## CMS

Hylia has [Netlify CMS](https://www.netlifycms.org/) pre-configured as standard. You can customise the configuration by editing [`src/admin/config.yml`](https://github.com/hankchizljaw/hylia/blob/master/src/admin/config.yml).

### Content that you can edit

The basic CMS setup allows you to edit the following:

- **Home page**: Edit the content on your homepage
- **Posts**: Create and edit blog posts
- **Generic pages**: Create generic pages that use a similar layout to posts
- **Global site data**: Various bits of global site data such as your url, title, posts per page and author details
- **Navigation**: Edit your primary navigation items
- **Theme**: Edit the design tokens that power the site’s theme

## Get involved

This project is _super_ early and feedback is very much welcome. In order to keep things running smooth, please consult the [contribution guide and code of conduct](https://github.com/hankchizljaw/hylia/blob/master/contributing.md).

The stuff that I need the most help with is:

- Documentation
- [Webmentions](https://www.w3.org/TR/webmention/)
- Performance

[deploy-to-netlify]: https://app.netlify.com/start/deploy?repository=https://github.com/hankchizljaw/hylia&stack=cms
