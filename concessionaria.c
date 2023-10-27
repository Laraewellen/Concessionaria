#include <stdio.h>
#include <locale.h>

char nome[100], tel[20], end[100], modelo, cor[20], pag[20], acess, quant[10], menup;

int senha_correta = 0; 

void menu() {
    printf("Digite a opção desejada: \n 1- Cadastro \n 2- Compra \n 3- Acessorio \n 4- Pagamento \n 5- Sair: \n");
    scanf(" %c", &menup);

    switch (menup) {
        case '1':
            cadastro();
            break;
        case '2':
            carro();
            break;
        case '3':
            acessorio();
            break;
        case '4':
            pagamento();
            break;
        case '5':
            sair();
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}

void cadastro() {
    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o telefone: ");
    scanf("%s", tel);

    printf("Digite o endereço: ");
    scanf("%s", end);
}

void carro() {
    printf("Escolha o modelo do carro desejado: \n");

    printf("Digite: \n 1- Hyundai HB20S \n 2- Renault Kwid \n 3- Fiat Mobi: \n");
    scanf(" %c", &modelo);

    printf("Digite a cor do carro: ");
    scanf("%s", cor);

    switch (modelo) {
        case '1':
            printf("Modelo escolhido: Hyundai HB20S.\n");
            printf("Cor escolhida: %s\n", cor);
            break;
        case '2':
            printf("Modelo escolhido: Renault Kwid.\n");
            printf("Cor escolhida: %s\n", cor);
            break;
        case '3':
            printf("Modelo escolhido: Fiat Mobi.\n");
            printf("Cor escolhida: %s\n", cor);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}

void acessorio() {
    printf("Escolha seu acessório: \n");

    printf("Digite: \n 1- Suporte para o celular \n 2- Faróis de LED \n 3- Direção elétrica \n");
    scanf(" %c", &acess);

    printf("Digite a quantidade: ");
    scanf("%s", quant);

    switch (acess) {
        case '1':
            printf("Acessório escolhido: Suporte para o celular.\n");
            printf("Quantidade: %s\n", quant);
            break;
        case '2':
            printf("Acessório escolhido: Faróis de LED.\n");
            printf("Quantidade: %s\n", quant);
            break;
        case '3':
            printf("Acessório escolhido: Direção elétrica.\n");
            printf("Quantidade: %s\n", quant);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}

void pagamento() {
    printf("Digite a forma de pagamento: ");
    scanf("%s", pag);
}

void sair() {
    printf("Programa encerrado\n");
}

int main() {
     setlocale(LC_ALL, "");
    int senha;

    printf("Bem-vindo à AutoEstilo encomenda.\n");

    printf("\nPara começar, digite a senha: ");
    scanf("%d", &senha);

    if (senha == 123) {
        senha_correta = 1; 
    } else {
        printf("Senha incorreta!\n");
        return 0; 
    }

    while (1) {
        menu();
        if (menup == '5') {
            break;
        }
    }

    return 0;
}
