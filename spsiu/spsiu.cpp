// spsiu.cpp : Define as funções exportadas para a DLL.
//

#include "pch.h"
#include "framework.h"
#include "spsiu.h"


// Isto é um exemplo de uma variável exportada
SPSIU_API int nspsiu=0;

// Isto é um exemplo de uma função exportada.
SPSIU_API int fnspsiu(void)
{
    return 0;
}

// Este é o construtor de uma classe que foi exportada.
Cspsiu::Cspsiu()
{
    return;
}
