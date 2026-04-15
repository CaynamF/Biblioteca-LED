# Biblioteca LED

Biblioteca simples para controle não bloqueante de LED com Arduino e ESP32.

A classe `Led` permite:

- Ligar o LED continuamente;
- Ligar por um tempo determinado;
- Apagar;
- Alternar estado;
- Piscar continuamente;
- Piscar uma quantidade definida de vezes;

O funcionamento é não bloqueante, usando `millis()`.
Por isso, o método `update` deve ser chamado repetidademente dentro do `loop`.

---

## Estrutura da biblioteca

```text
LED/
├── library.json
├── README.md
├── LICENSE
├── src/
│   ├── LED.h
│   └── LED.cpp
└── examples/