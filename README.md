# 🐾 PetOS IoT Smart Collar

> Protótipo IoT desenvolvido para o **Challenge PetOS** — uma coleira inteligente para monitoramento preventivo da saúde do pet.

![Arduino](https://img.shields.io/badge/Arduino-C%2B%2B-00979D?style=flat&logo=arduino&logoColor=white)
![ESP32](https://img.shields.io/badge/Hardware-ESP32-E7352C?style=flat)
![Wokwi](https://img.shields.io/badge/Simulador-Wokwi-7B2FBE?style=flat)
![Turma](https://img.shields.io/badge/Turma-2TDSPO-blue?style=flat)

---

## 🐶 Problema

Tutores geralmente só percebem alterações na saúde do pet quando os sintomas já estão evidentes. Isso dificulta o cuidado preventivo e reduz a previsibilidade no acompanhamento da saúde animal.

## 💡 Solução

O protótipo utiliza um **ESP32** com sensores para monitorar temperatura, umidade e movimento do pet em tempo real. Quando algum dado sai do padrão esperado, o sistema:

- Exibe alertas no **Serial Monitor** (dashboard da prova de conceito)
- Aciona o **LED vermelho** como indicador visual
- Dispara o **buzzer** como alerta sonoro

---

## 🛠️ Tecnologias Utilizadas

| Tecnologia | Descrição |
|---|---|
| ESP32 | Microcontrolador principal |
| DHT22 | Sensor de temperatura e umidade |
| PIR | Sensor de movimento |
| LEDs | Indicadores visuais (verde / vermelho) |
| Buzzer | Alerta sonoro |
| Wokwi | Simulador online do circuito |
| Arduino / C++ | Linguagem de programação |

---

## ⚙️ Componentes e Pinagem

| Componente | Pino (ESP32) | Função |
|---|---|---|
| DHT22 | GPIO 15 | Temperatura e umidade |
| PIR | GPIO 13 | Detecção de movimento |
| LED Verde | GPIO 26 | Condição normal |
| LED Vermelho | GPIO 27 | Alerta |
| Buzzer | GPIO 25 | Alerta sonoro |

---

## 📊 Funcionamento

O ESP32 lê continuamente os dados dos sensores e exibe as informações no Serial Monitor.

### ✅ Condições Normais

| Parâmetro | Faixa Ideal |
|---|---|
| Temperatura | ≤ 35 °C |
| Umidade | 30% – 75% |
| Movimento | Detectado |

### 🚨 Condições de Alerta

| Parâmetro | Condição de Alerta |
|---|---|
| Temperatura | > 35 °C |
| Umidade | < 30% ou > 75% |
| Movimento | Ausente (possível inatividade) |

> Em caso de alerta: LED vermelho acende, buzzer dispara e a mensagem **"Atenção necessária"** é exibida no Serial Monitor.

---

## 🔗 Relação com o PetOS

A solução complementa o ecossistema PetOS ao possibilitar monitoramento contínuo do pet. Em versões futuras, os dados coletados pela coleira poderiam ser enviados ao aplicativo, gerando:

- 📲 Alertas em tempo real para o tutor
- 📋 Histórico de saúde para clínicas veterinárias

---

## ▶️ Como Executar

1. Acesse o projeto no [Wokwi](https://wokwi.com/projects/464910060149291009)
2. Inicie a simulação
3. Abra o **Serial Monitor**
4. Altere os valores do **DHT22** e do **PIR** para simular cenários
5. Observe os alertas e indicadores visuais

---

## 🎥 Demonstração

[![Assista à demonstração no YouTube](https://img.youtube.com/vi/VcSdm9VW4HA/0.jpg)](https://youtu.be/VcSdm9VW4HA)

---

## 👥 Autores

**Turma:** 2TDSPO

| Aluno | RM |
|---|---|
| Gustavo Gomes Martins | 555999 |
| Pedro dos Anjos | 563832 |
| Matheus de Mattos Vecchi | 561716 |
| Nicholas Albuquerque Buzo | 561082 |
| Nicholas Camillo Canadas de Paula | 561262 |