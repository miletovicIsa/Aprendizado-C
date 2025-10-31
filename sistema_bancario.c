#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct {//nome qntd, caract
    char nome[100][255], sobrenome[40], cpf[12], senha[255]; //ou: struct Informação{};
    float saldo_bancario;
    int agencia;

} Informacao;

typedef struct {
    char nome[100][255], sobrenome[40], cpf[12], senha[255]; 
    float saldo_bancario;
    int agencia; 
    

} Dado;

    int i=0;
    int menu_principal, menu_secundario;
    int size;
    int resposta=0;
    Informacao cliente[100]; //array de struct
    Dado novo[1000]; //array de struct

    void limparBuffer();
    void entraInformacao();
    float deposito();
    void integridadeCpf();
    void entraDados();
    void menuPrincipal();
    void menuSecundario();
    void atualiza();

    void limparBuffer() {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {
            // Consumir caracteres até encontrar '\n' ou EOF (end of file)
        }
    }
    void integridadeCpf(){
        while (1){
                printf("CPF:");
                fgets(cliente[i].cpf, sizeof(cliente[i].cpf), stdin);
                
                size=strlen(cliente[i].cpf);
                
                if (size!=11) {
                    printf("Cpf invalido!\n");
                        
                }else{
                    break;
                    exit(1);
                }   
        }
    }
    void cadastraInformacao(){

        printf("Nome:");
        fgets(cliente[i].nome, sizeof(cliente[i].nome), stdin); 
        fflush(stdin);
        printf("Sobrenome: ");
        fgets(cliente[i].sobrenome, sizeof(cliente[i].sobrenome), stdin);
        cliente[i].sobrenome[strcspn(cliente[i].sobrenome, "\n" )]='\0';
        strcat(cliente[i].nome,  cliente[i].sobrenome);
        printf("%s\n", cliente[i].nome );

        printf("CPF:");
        fgets(cliente[i].cpf, sizeof(cliente[i].cpf), stdin);
        integridadeCpf();

        printf("Senha:");
        fgets(cliente[i].senha, sizeof(cliente[i].senha), stdin);
        cliente[i].senha[strcspn(cliente[i].senha, "\n" )]='\0';
            
        printf("Saldo bancario:");
        scanf("%.2f",&cliente[i].saldo_bancario);
        getchar();
        limparBuffer();

        printf("Agencia bancaria:");
        scanf("%d",&cliente[i].agencia);
        getchar();

        printf("CADASTRO REALIZADO...\nPara ENTRAR digite 1\n"
        "Para FINALIZAR, digite 2");
        scanf("%d",&resposta);
        getchar();

        if (resposta == 1){
            entraInformacao();

        }else if (resposta == 2) {
            exit (1);
        }else 
            printf("resposta inválida!");


    }
    
        void entraInformacao(){
            printf("Nome:");
            fgets(cliente[i].nome, sizeof(cliente[i].nome), stdin); 
            fflush(stdin);
            printf("Sobrenome: ");
            fgets(cliente[i].sobrenome, sizeof(cliente[i].sobrenome), stdin);
            cliente[i].sobrenome[strcspn(cliente[i].sobrenome, "\n" )]='\0';
            strcat(cliente[i].nome,  cliente[i].sobrenome);
            printf("%s\n", cliente[i].nome );

            printf("CPF:");
            fgets(cliente[i].cpf, sizeof(cliente[i].cpf), stdin);
            integridadeCpf();

            printf("Senha:");
            fgets(cliente[i].senha, sizeof(cliente[i].senha), stdin);
            cliente[i].senha[strcspn(cliente[i].senha, "\n" )]='\0';
            for (int j=0; j<100; j++){
                if (i==j) {
                    
            }
                menuSecundario();
        }

        void menuSecundario(){
        int op=0;
        float dep=0;
        float transferencia;
        float novo_saldo;
        float extrato=0;
        printf("Qual operacao deseja realizar?\n1.DEPOSITO\n2.TRANSFERENCIA EM PIX\n"
        "3.REALIZAR EXTRATO\n4.ATUALIZAR DADOS\n5.VOLTAR AO MENU PRINCIPAL\n6.EXIBIR PESSOAS CADASTRADAS");
        
        scanf("%d",&menu_secundario);
        switch (op) {

        case '1':
            deposito(novo_saldo = cliente[i].saldo_bancario + dep);
            break;
            printf("Deseja realizar mais alguma operacao?");
            scanf("%d", &resposta); 
            if (resposta == 1 ){
                
            }
        
        case '2':
            
            novo_saldo = cliente[i].saldo_bancario - transferencia;
            printf("Insira valor a ser transferido:");
            scanf("%f",&transferencia);
            printf("TRANSFERENCIA REALIZADA COM SUCESSO!");
            printf("Novo saldo bancario: %d",&novo_saldo);
            break;

        case '3':
           printf("Nome:");
            fgets(cliente[i].nome, sizeof(cliente[i].nome), stdin);
            limparBuffer();
                    
            printf("CPF:");
            fgets(cliente[i].cpf, sizeof(cliente[i].cpf), stdin);
            limparBuffer();
            size=strlen(cliente[i].cpf);
            if(size!=11){
                    printf("Cpf invalido!\nInsira CPF:");
                    fgets(cliente[i].cpf, sizeof(cliente[i].cpf), stdin);
                    cliente[i].cpf[strcspn(cliente[i].cpf, "\n" )]='\0';
            }
            printf("Insira valor a ser retirado:");
            scanf("%f",&extrato);
            if (extrato < cliente[i].saldo_bancario){
                printf("Nao foi possivel realizar operacao. Saldo bancario insuficiente.");

            }else novo_saldo= cliente[i].saldo_bancario - extrato;

        case '4':
            atualiza();
            break;

        case '5':
            menuPrincipal();
            break;

        case '6':
        
            printf("|  CLIENTE  |  CPF  |  SENHA  |  SALDO |  AGENCIA  |\n");

            for(i=0; i<=99; i++){
                    
                printf("|  %s        | %s   |  %s     | %f     |  %d       |\n",
                cliente[i].nome, cliente[i].cpf, cliente[i].senha, cliente[i].saldo_bancario,
                cliente[i].agencia );

            }
            break;
    }
}
    
    void menuPrincipal(){
        
        while (1){
            printf("BEM VINDO AO MENU PRINCIPAL!\n Para < CADASTRAR > digite 1\n"
            "Para <ENTRAR> digite 2.\nQual operacao deseja realizar?\n");
            scanf("%d", &resposta);
            if (resposta != 1 && resposta != 2){
                printf("Resposta invalida!");
                continue;
            }
            
            if (resposta == 1){
                cadastraInformacao();
            } else if (resposta ==2){
                entraInformacao();
            }
            break;
        }
            
}
        
    
    void atualiza(){
        //utilizar funcao scop
        printf("--ATUALIZAR INFORMAÇÕES--\n");
        printf("Para atualizar um dado, digite < 1 >\n Para manter, < 2 >");
        scanf("%d", &resposta);
        fflush;
            printf("SENHA: %c", cliente[i].senha);   
            printf("Atualizar? : "); 
            scanf("%d", &resposta);
        if (resposta == 1){
           printf("Atualize senha: ");
           fgets(novo[i].senha, sizeof(novo[i].senha), stdin); 
           strcpy(cliente[i].senha, novo[i].senha);
           printf("%c", cliente[i].senha );
           
        }else if(resposta == 2){
            printf("proximo...");
        }
        printf("AGENCIA: %c", cliente[i].agencia);
        printf("Atualizar? : "); 
        scanf("%d", &resposta);
        if (resposta == 1){
           printf("Atualize agencia: ");
           fgets(novo[i].agencia, sizeof(novo[i].agencia), stdin); 
           strcpy(cliente[i].agencia, novo[i].agencia);
           printf("%c", cliente[i].agencia );
           
        }else if(resposta == 2){
            printf("DADOS ATUALIZADOS.");
            
        }
        

        

    }

int main(){
    
    while (1) { 
        menuPrincipal();
        menuSecundario();
    }
}