// xfstest.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <Windows.h>
#include <iostream>
#include <XFSAPI.H>
#include <XFSADMIN.H>
#include <XFSCONF.H>


#define TEXT(x) const_cast<LPSTR>(x)

int main()
{
    std::cout << "Hello World!\n";

    HRESULT result;
    WFSVERSION xfs_version;
    WFSVERSION sp_version;

    result = WFSStartUp(MAKELONG(0X0003, 0X0003), &xfs_version);

    std::cout << "Result: " << result << "\n";
    std::cout << "Description: " << xfs_version.szDescription << "\n";
    std::cout << "SystemStatus: " << xfs_version.szSystemStatus << "\n";
    std::cout << "HighVersion: " << std::hex << xfs_version.wHighVersion << "\n";
    std::cout << "LowVersion: " << std::hex << xfs_version.wLowVersion << "\n";
    std::cout << "Version: " << xfs_version.wVersion << "\n";

    HSERVICE service;



    result = WFSOpen(
        TEXT("Sensores"),
        WFS_DEFAULT_HAPP,
        TEXT("BRXFSTEST"),
        0,
        5000,
        MAKELONG(0X0003, 0X0303),
        &xfs_version,
        &sp_version,
        &service
    );

    std::cout << "Result: " << std::dec << result << "\n";

    WFSCleanUp();
}


// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
