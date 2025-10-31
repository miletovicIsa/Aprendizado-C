# 🏦 Sistema Bancário em C  

![Static Badge](https://img.shields.io/badge/Linguagem-C-blue)
![Static Badge](https://img.shields.io/badge/Status-Em%20Desenvolvimento-yellow)
![Static Badge](https://img.shields.io/badge/Sistema-Bancário-green)
![Static Badge](https://img.shields.io/badge/Plataforma-Windows-lightgrey)

Um sistema bancário simples, desenvolvido em **C**, que simula o funcionamento básico de um banco: cadastro, login, depósito, transferência, extrato e atualização de dados.  
O projeto foi construído com foco em **estruturas de dados (structs)**, **validação de entrada** e **organização de menus**.

---

## 📋 Sumário

1. [🧾 Descrição do Projeto](#-descrição-do-projeto)
2. [⚙️ Funcionalidades](#️-funcionalidades)
3. [🧩 Estrutura do Código](#-estrutura-do-código)
4. [🖥️ Como Compilar e Executar](#️-como-compilar-e-executar)
5. [🔄 Fluxo do Sistema](#-fluxo-do-sistema)
6. [🚀 Melhorias Futuras](#-melhorias-futuras)
7. [👨‍💻 Créditos](#-créditos)

---

## 🧾 Descrição do Projeto

O **Sistema Bancário em C** é uma aplicação de console que permite simular operações bancárias reais.  
Utilizando **structs** e **funções modulares**, o programa armazena informações de clientes e oferece um menu interativo para gerenciar as contas.

💡 **Objetivo:** Demonstrar o uso prático de estruturas de dados, validação, controle de fluxo e funções em linguagem C.

---

## ⚙️ Funcionalidades

| 🔢 Código | 🧠 Função | 📝 Descrição |
|-----------|-----------|--------------|
| 1 | **Cadastro de Cliente** | Cria uma nova conta com nome, CPF, senha, saldo e agência. |
| 2 | **Login** | Acesso à conta bancária com CPF e senha. |
| 3 | **Depósito** | Adiciona valor ao saldo do cliente. |
| 4 | **Transferência PIX** | Subtrai um valor do saldo e simula uma transferência. |
| 5 | **Extrato** | Exibe o saldo e as movimentações básicas. |
| 6 | **Atualizar Dados** | Permite alterar senha e agência. |
| 7 | **Listar Clientes** | Mostra tabela com todos os clientes cadastrados. |

---

## 🧩 Estrutura do Código

### 📁 Estrutura de Arquivos


### 🧱 Estruturas Principais

```c
typedef struct {
    char nome[100][255];
    char sobrenome[40];
    char cpf[12];
    char senha[255];
    float saldo_bancario;
    int agencia;
} Informacao;

typedef struct {
    char nome[100][255];
    char sobrenome[40];
    char cpf[12];
    char senha[255];
    float saldo_bancario;
    int agencia;
} Dado;

```

---

## 👨‍💻 Créditos

Desenvolvido por:
💻 Isabela Marques Miletovic

Linguagem: C (C99)
Ambiente: Windows / MinGW
Data: 2024

