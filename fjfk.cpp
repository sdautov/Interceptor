#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>

typedef std::tm* (*gmtime_func)(const std::time_t*);

void callGmtimeFromDll(const std::string& dllName) {
    HMODULE hModule = LoadLibraryA(dllName.c_str());
    if (!hModule) {
        std::cerr << "error loadng " << dllName << std::endl;
        return;
    }
    gmtime_func gmtimeFromDll = (gmtime_func)GetProcAddress(hModule, "gmtime");
    if (!gmtimeFromDll) {
        std::cerr << "error gmtime" << dllName << std::endl;
        FreeLibrary(hModule);
        return;
    }
    std::time_t now = std::time(nullptr);
    std::tm* gmt = gmtimeFromDll(&now);
    if (gmt) {
        std::cout << "Результат gmtime из " << dllName << ": "
                  << (gmt->tm_year + 1900) << "-"
                  << (gmt->tm_mon + 1) << "-"
                  << gmt->tm_mday << " "
                  << gmt->tm_hour << ":"
                  << gmt->tm_min << ":"
                  << gmt->tm_sec << std::endl;
    } else {
        std::cerr << "Error for: " << dllName << std::endl;
    }
    FreeLibrary(hModule);
}

int main() {
    callGmtimeFromDll("msvcr100.dll");
    callGmtimeFromDll("msvcr90.dll");
    callGmtimeFromDll("msvcr71.dll");
    return 0;
}
