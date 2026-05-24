# PetOS IoT Smart Collar

Protótipo IoT desenvolvido para o Challenge PetOS, simulando uma coleira inteligente para monitoramento preventivo da saúde do pet.

## Problema

Tutores geralmente só percebem alterações na saúde do pet quando os sintomas já estão evidentes. Isso dificulta o cuidado preventivo e reduz a previsibilidade no acompanhamento da saúde animal.

## Solução

O protótipo utiliza um ESP32 com sensores para monitorar temperatura, umidade e movimento do pet em tempo real. Quando algum dado sai do padrão esperado, o sistema gera alertas no dashboard serial, além de acionar LED vermelho e buzzer.

## Tecnologias Utilizadas

- ESP32
- Sensor DHT22
- Sensor PIR
- LEDs
- Buzzer
- Wokwi
- Arduino/C++

## Componentes

- DHT22: coleta temperatura e umidade
- PIR: detecta movimento do pet
- LED verde: condição normal
- LED vermelho: alerta
- Buzzer: alerta sonoro

## Funcionamento

O ESP32 lê os dados dos sensores e exibe as informações no Serial Monitor, utilizado como dashboard inicial da prova de conceito.

Condições normais:
- Temperatura até 35°C
- Umidade entre 30% e 75%
- Movimento detectado

Condições de alerta:
- Temperatura acima de 35°C
- Umidade abaixo de 30% ou acima de 75%
- Ausência de movimento

## Relação com o PetOS

A solução complementa o PetOS ao permitir monitoramento contínuo do pet. Em uma versão futura, os dados coletados pela coleira inteligente poderiam ser enviados ao aplicativo, gerando alertas para o tutor e histórico para clínicas veterinárias.

## Como Executar

1. Acesse o projeto no Wokwi
2. Inicie a simulação
3. Abra o Serial Monitor
4. Altere os valores do DHT22 e do PIR
5. Observe os alertas e indicadores visuais

## Demonstração

Adicionar aqui o link do vídeo no YouTube em modo não listado.

## Autores

Turma: 2TDSPO

Aluno	RM
Gustavo Gomes Martins	555999
Pedro dos Anjos	563832
Matheus de Mattos Vecchi	561716
Nicholas Albuquerque Buzo	561082
Nicholas Camillo Canadas de Paula	561262