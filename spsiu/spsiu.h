// O bloco ifdef a seguir é a forma padrão de criar macros que tornam a exportação
// de uma DLL mais simples. Todos os arquivos nessa DLL são compilados com SPSIU_EXPORTS
// símbolo definido na linha de comando. Esse símbolo não deve ser definido em nenhum projeto
// que usa esta DLL. Desse modo, qualquer projeto cujos arquivos de origem incluem este arquivo veem
// Funções SPSIU_API como importadas de uma DLL, enquanto esta DLL vê símbolos
// definidos com esta macro conforme são exportados.
#ifdef SPSIU_EXPORTS
#define SPSIU_API __declspec(dllexport)
#else
#define SPSIU_API __declspec(dllimport)
#endif

// Esta classe é exportada da DLL
class SPSIU_API Cspsiu {
public:
	Cspsiu(void);
	// TODO: adicione seus métodos aqui.
};

extern SPSIU_API int nspsiu;

SPSIU_API int fnspsiu(void);
