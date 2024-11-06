#include <windows.h>
#include <easyhook.h>
#include <iostream>

#define METHOD_RVA 0x0019820

typedef int(__thiscall* PrivateMethodType)(void* thisPtr, int arg1, int arg2, const char* arg3);
PrivateMethodType OriginalMethod = nullptr;
int __fastcall HookedPrivateMethod(void* thisPtr, int unused, int arg1, int arg2, const char* arg3) {
    std::cout << "Hooked private method called with arguments: "
              << arg1 << ", " << arg2 << ", " << arg3 << std::endl;

    int result = OriginalMethod(thisPtr, arg1, arg2, arg3);

    std::cout << "Original method returned: " << result << std::endl;

    return result;
}

int main() {
    HMODULE hModule = GetModuleHandle("example.dll");

    if (hModule == NULL) {
        std::cerr << "Failed to get module handle for example.dll." << std::endl;
        return 1;
    }

    OriginalMethod = (PrivateMethodType)((DWORD_PTR)hModule + METHOD_RVA);

    HOOK_TRACE_INFO hHook = { NULL };

    if (LhInstallHook(
            (PVOID)OriginalMethod,                //
            HookedPrivateMethod,                  // 
            NULL,                                 // 
            &hHook)                               //
        != 0) 
    {
        std::cerr << "Failed to install hook with EasyHook." << std::endl;
        return 1;
    }

    ULONG ACLEntries[1] = { 0 };
    LhSetInclusiveACL(ACLEntries, 1, &hHook);

    std::cout << "Hook installed successfully." << std::endl;


    LhUninstallHook(&hHook);
    LhWaitForPendingRemovals();

    return 0;
}
