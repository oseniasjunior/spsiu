// dllmain.cpp : Define o ponto de entrada para o aplicativo DLL.
#include "pch.h"
#include <XFSSPI.H>
#include <XFSSIU.H>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

HRESULT extern WINAPI WFPCancelAsyncRequest(HSERVICE hService, REQUESTID RequestID) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPCancelAsyncRequest OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPClose(HSERVICE hService, HWND hWnd, REQUESTID ReqID) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPClose OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPDeregister(HSERVICE hService, DWORD dwEventClass, HWND hWndReg, HWND hWnd, REQUESTID ReqID) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPDeregister OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPExecute(HSERVICE hService, DWORD dwCommand, LPVOID lpCmdData, DWORD dwTimeOut, HWND hWnd, REQUESTID ReqID) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPExecute OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPGetInfo(HSERVICE hService, DWORD dwCategory, LPVOID lpQueryDetails, DWORD dwTimeOut, HWND hWnd, REQUESTID ReqID) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPGetInfo OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPLock(HSERVICE hService, DWORD dwTimeOut, HWND hWnd, REQUESTID ReqID) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPLock OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPOpen(HSERVICE hService, LPSTR lpszLogicalName, HAPP hApp, LPSTR lpszAppID, DWORD dwTraceLevel, DWORD dwTimeOut, HWND hWnd, REQUESTID ReqID, HPROVIDER hProvider, DWORD dwSPIVersionsRequired, LPWFSVERSION lpSPIVersion, DWORD dwSrvcVersionsRequired, LPWFSVERSION lpSrvcVersion) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPOpen OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPRegister(HSERVICE hService, DWORD dwEventClass, HWND hWndReg, HWND hWnd, REQUESTID ReqID) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPRegister OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPSetTraceLevel(HSERVICE hService, DWORD dwTraceLevel) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPSetTraceLevel OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPUnloadService() {
    WFMOutputTraceData(const_cast<LPSTR>("WFPUnloadService OK"));
    return WFS_ERR_INTERNAL_ERROR;
}

HRESULT extern WINAPI WFPUnlock(HSERVICE hService, HWND hWnd, REQUESTID) {
    WFMOutputTraceData(const_cast<LPSTR>("WFPUnlock OK"));
    return WFS_ERR_INTERNAL_ERROR;
}
