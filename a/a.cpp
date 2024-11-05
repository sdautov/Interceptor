#include <windows.h>
#include <detours.h>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <comdef.h>
#include <DbgHelp.h>

#include "pisogen_i.h"

// Public functions in pisogen.dll
typedef __time64_t(__cdecl* AliasTime_t)(__time64_t* Time);
typedef __time64_t(__cdecl* AliasTmFunc)();
typedef __time64_t(__stdcall* _AliasTmStdcallFunc)(int* day, int* month, int* year, int* hour, int* minute);
typedef int(__cdecl* pigenFunc)(int a1, char* Source, char* a3);
typedef int(__cdecl* pigenIDFGENFunc)(int a1, char* Source, char* a3);
typedef int(__stdcall* _pigenIDFGENStdcallFunc)(int a1, char* Source, char* a3);
typedef int(__cdecl* pigenISOGENFunc)(int a1, char* Source, char* a3);
typedef int(__stdcall* _pigenISOGENStdcallFunc)(int a1, char* Source, char* a3);
typedef int(__cdecl* pigenLoadIsogenFunc)();
typedef int(__stdcall* _pigenLoadIsogenStdcallFunc)();
typedef int(__cdecl* pigenSetIdfgenTimeoutFunc)(int timeout);
typedef int(__stdcall* _pigenSetIdfgenTimeoutStdcallFunc)(int timeout);
typedef int(__cdecl* pigenSetIsogenTimeoutFunc)(int timeout);
typedef int(__stdcall* _pigenSetIsogenTimeoutStdcallFunc)(int timeout);
typedef int(__stdcall* _pigenStdcallFunc)(int a1, char* Source, char* a3);
typedef int(__cdecl* pigenUnloadIsogenFunc)();
typedef int(__stdcall* _pigenUnloadIsogenStdcallFunc)();
typedef int(__cdecl* pisogenFunc)(int a1, char* Source, char* a3, char* a4);
typedef int(__stdcall* _pisogenStdcallFunc)(int a1, char* Source, char* a3, char* a4);

// IPersonalIsogen methods
typedef HRESULT(STDMETHODCALLTYPE* put_RootDirectoryPtr)(IPersonalIsogen* pThis, BSTR newVal);
typedef HRESULT(STDMETHODCALLTYPE* put_ProjectPtr)(IPersonalIsogen*, BSTR);
typedef HRESULT(STDMETHODCALLTYPE* put_StylePtr)(IPersonalIsogen*, BSTR);
typedef HRESULT(STDMETHODCALLTYPE* put_DimensionUnitsPtr)(IPersonalIsogen*, long);
typedef HRESULT(STDMETHODCALLTYPE* put_WeightUnitsPtr)(IPersonalIsogen*, long);
typedef HRESULT(STDMETHODCALLTYPE* put_DrawingFormatPtr)(IPersonalIsogen*, long);
typedef HRESULT(STDMETHODCALLTYPE* put_ViewpointPtr)(IPersonalIsogen*, long);
typedef HRESULT(STDMETHODCALLTYPE* put_TolerancePtr)(IPersonalIsogen*, long);
typedef HRESULT(STDMETHODCALLTYPE* put_MessageLevelPtr)(IPersonalIsogen*, long);
typedef HRESULT(STDMETHODCALLTYPE* put_DemoModePtr)(IPersonalIsogen*, long);
typedef HRESULT(STDMETHODCALLTYPE* ExecutePtr)(IPersonalIsogen*, long*);
typedef HRESULT(STDMETHODCALLTYPE* LoadIsogenPtr)(IPersonalIsogen*);
typedef HRESULT(STDMETHODCALLTYPE* UnloadIsogenPtr)(IPersonalIsogen*);
typedef HRESULT(STDMETHODCALLTYPE* get_OutputFilesPtr)(IPersonalIsogen*, IOutputFiles**);
typedef HRESULT(STDMETHODCALLTYPE* put_InputNamePtr)(IPersonalIsogen*, BSTR);
typedef HRESULT(STDMETHODCALLTYPE* GetHandshakeTimePtr)(IPersonalIsogen*, long*, long*, long*, long*, long*, long*);
typedef HRESULT(STDMETHODCALLTYPE* put_HandshakePtr)(IPersonalIsogen*, BSTR);
typedef HRESULT(STDMETHODCALLTYPE* get_ErrorTextPtr)(IPersonalIsogen*, BSTR*);
typedef HRESULT(STDMETHODCALLTYPE* put_KeepPODPtr)(IPersonalIsogen*, long);
typedef HRESULT(STDMETHODCALLTYPE* put_IsogenTimeoutPtr)(IPersonalIsogen*, long);
typedef HRESULT(STDMETHODCALLTYPE* get_VersionPtr)(IPersonalIsogen*, BSTR*);

typedef ULONG(STDMETHODCALLTYPE* ReleasePtr)(IUnknown*);

typedef HRESULT(WINAPI* CoCreateInstancePtr)(REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID* ppv);

typedef __time64_t(__cdecl* _time64Func)(__time64_t* destTime);
typedef __time32_t(__cdecl* _time32Func)(__time32_t* destTime);

typedef tm*(__cdecl* _gmtime32Func)(const __time32_t* sourceTime);
typedef tm*(__cdecl* _gmtime64Func)(const __time64_t* sourceTime);

HMODULE hModule = nullptr;

AliasTime_t AliasTimeTrue = nullptr;
AliasTmFunc AliasTmTrue = nullptr;
_AliasTmStdcallFunc _AliasTmStdcallTrue = nullptr;
pigenFunc pigenTrue = nullptr;
pigenIDFGENFunc pigenIDFGENTrue = nullptr;
_pigenIDFGENStdcallFunc _pigenIDFGENStdcallTrue = nullptr;
pigenISOGENFunc pigenISOGENTrue = nullptr;
_pigenISOGENStdcallFunc _pigenISOGENStdcallTrue = nullptr;
pigenLoadIsogenFunc pigenLoadIsogenTrue = nullptr;
_pigenLoadIsogenStdcallFunc _pigenLoadIsogenStdcallTrue = nullptr;
pigenSetIdfgenTimeoutFunc pigenSetIdfgenTimeoutTrue = nullptr;
_pigenSetIdfgenTimeoutStdcallFunc _pigenSetIdfgenTimeoutStdcallTrue = nullptr;
pigenSetIsogenTimeoutFunc pigenSetIsogenTimeoutTrue = nullptr;
_pigenSetIsogenTimeoutStdcallFunc _pigenSetIsogenTimeoutStdcallTrue = nullptr;
_pigenStdcallFunc _pigenStdcallTrue = nullptr;
pigenUnloadIsogenFunc pigenUnloadIsogenTrue = nullptr;
_pigenUnloadIsogenStdcallFunc _pigenUnloadIsogenStdcallTrue = nullptr;
pisogenFunc pisogenTrue = nullptr;
_pisogenStdcallFunc _pisogenStdcallTrue = nullptr;

put_RootDirectoryPtr originalPutRootDirectory = nullptr;
put_ProjectPtr originalPutProject = nullptr;
put_StylePtr originalPutStyle = nullptr;
put_DimensionUnitsPtr originalPutDimensionUnits = nullptr;
put_WeightUnitsPtr originalPutWeightUnits = nullptr;
put_DrawingFormatPtr originalPutDrawingFormat = nullptr;
put_ViewpointPtr originalPutViewpoint = nullptr;
put_TolerancePtr originalPutTolerance = nullptr;
put_MessageLevelPtr originalPutMessageLevel = nullptr;
put_DemoModePtr originalPutDemoMode = nullptr;
ExecutePtr originalExecute = nullptr;
LoadIsogenPtr originalLoadIsogen = nullptr;
UnloadIsogenPtr originalUnloadIsogen = nullptr;
get_OutputFilesPtr originalGetOutputFiles = nullptr;
put_InputNamePtr originalPutInputName = nullptr;
GetHandshakeTimePtr originalGetHandshakeTime = nullptr;
put_HandshakePtr originalPutHandshake = nullptr;
get_ErrorTextPtr originalGetErrorText = nullptr;
put_KeepPODPtr originalPutKeepPOD = nullptr;
put_IsogenTimeoutPtr originalPutIsogenTimeout = nullptr;
get_VersionPtr originalGetVersion = nullptr;

ReleasePtr originalRelease = nullptr;

CoCreateInstancePtr originalCoCreateInstance = nullptr;

_time64Func original_time64 = nullptr;
_time32Func original_time32 = nullptr;

_gmtime32Func original_gmtime32 = nullptr;
_gmtime64Func original_gmtime64 = nullptr;

void PrintStackTrace() {
	const int maxFrames = 10;
	void* stack[maxFrames];
	unsigned short frames;
	frames = CaptureStackBackTrace(0, maxFrames, stack, NULL);
	SYMBOL_INFO* symbol = (SYMBOL_INFO*)malloc(sizeof(SYMBOL_INFO) + 256);
	symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
	symbol->MaxNameLen = 255;
	HANDLE process = GetCurrentProcess();
	SymInitialize(process, NULL, TRUE);
	for (unsigned short i = 0; i < frames; i++) {
		SymFromAddr(process, (DWORD64)(stack[i]), 0, symbol);
		printf("    Stack frame %d: %s\n", i, symbol->Name);
	}
	free(symbol);
}

// Public functions wrappers
__time64_t __cdecl AliasTime(__time64_t* Time) {
    auto result = AliasTimeTrue(Time);
    std::cout << "AliasTime()" << '\n';
    return result;
}

__time64_t __cdecl AliasTm() {
    auto result = AliasTmTrue();
    std::cout << "AliasTm() result: " << result << '\n';
    return result;
}

__time64_t __stdcall _AliasTmStdcall(int* day, int* month, int* year, int* hour, int* minute) {
	*day = 18;
	*month = 10;
	*year = 124;
	*hour = 9;
	*minute = 2;
    //auto result = _AliasTmStdcallTrue(day, month, year, hour, minute);
	//*day = 18;
	//*month = 10;
	//*year = 124;
	//*hour = 9;
	//*minute = 2;
	__time64_t result = 41024945225081906;
    std::cout << "_AliasTmStdcall() with day: " << *day << ", month: " << *month << ", year: " << *year << ", hour: " << *hour << ", minute: " << *minute << ", result: " << result << '\n';
    return result;
}

int __cdecl pigen(int a1, char* Source, char* a3) {
    auto result = pigenTrue(a1, Source, a3);
    std::cout << "pigen() with a1: " << a1 << ", Source: " << Source << ", a3: " << a3 << ", result: " << result << '\n';
    return result;
}

int __cdecl pigenIDFGEN(int a1, char* Source, char* a3) {
    auto result = pigenIDFGENTrue(a1, Source, a3);
    std::cout << "pigenIDFGEN() with a1: " << a1 << ", Source: " << Source << ", a3: " << a3 << ", result: " << result << '\n';
    return result;
}

int __stdcall _pigenIDFGENStdcall(int a1, char* Source, char* a3) {
    auto result = _pigenIDFGENStdcallTrue(a1, Source, a3);
    std::cout << "_pigenIDFGENStdcall() with a1: " << a1 << ", Source: " << Source << ", a3: " << a3 << ", result: " << result << '\n';
    return result;
}

int __cdecl pigenISOGEN(int a1, char* Source, char* a3) {
    auto result = pigenISOGENTrue(a1, Source, a3);
    std::cout << "pigenISOGEN() with a1: " << a1 << ", Source: " << Source << ", a3: " << a3 << ", result: " << result << '\n';
    return result;
}

int __stdcall _pigenISOGENStdcall(int a1, char* Source, char* a3) {
    auto result = _pigenISOGENStdcallTrue(a1, Source, a3);
    std::cout << "_pigenISOGENStdcall() with a1: " << a1 << ", Source: " << Source << ", a3: " << a3 << ", result: " << result << '\n';
    return result;
}

int __cdecl pigenLoadIsogen() {
    auto result = pigenLoadIsogenTrue();
    std::cout << "pigenLoadIsogen() result: " << result << '\n';
    return result;
}

int __stdcall _pigenLoadIsogenStdcall() {
    auto result = _pigenLoadIsogenStdcallTrue();
    std::cout << "_pigenLoadIsogenStdcall() result: " << result << '\n';
    return result;
}

int __cdecl pigenSetIdfgenTimeout(int timeout) {
    auto result = pigenSetIdfgenTimeoutTrue(timeout);
    std::cout << "pigenSetIdfgenTimeout() with timeout: " << timeout << ", result: " << result << '\n';
    return result;
}

int __stdcall _pigenSetIdfgenTimeoutStdcall(int timeout) {
    auto result = _pigenSetIdfgenTimeoutStdcallTrue(timeout);
    std::cout << "_pigenSetIdfgenTimeoutStdcall() with timeout: " << timeout << ", result: " << result << '\n';
    return result;
}

int __cdecl pigenSetIsogenTimeout(int timeout) {
    auto result = pigenSetIsogenTimeoutTrue(timeout);
    std::cout << "pigenSetIsogenTimeout() with timeout: " << timeout << ", result: " << result << '\n';
    return result;
}

int __stdcall _pigenSetIsogenTimeoutStdcall(int timeout) {
    auto result = _pigenSetIsogenTimeoutStdcallTrue(timeout);
    std::cout << "_pigenSetIsogenTimeoutStdcall() with timeout: " << timeout << ", result: " << result << '\n';
    return result;
}

int __stdcall _pigenStdcall(int a1, char* Source, char* a3) {
    auto result = _pigenStdcallTrue(a1, Source, a3);
    std::cout << "_pigenStdcall() with a1: " << a1 << ", Source: " << Source << ", a3: " << a3 << ", result: " << result << '\n';
    return result;
}

int __cdecl pigenUnloadIsogen() {
    auto result = pigenUnloadIsogenTrue();
    std::cout << "pigenUnloadIsogen() result: " << result << '\n';
    return result;
}

int __stdcall _pigenUnloadIsogenStdcall() {
    auto result = _pigenUnloadIsogenStdcallTrue();
    std::cout << "_pigenUnloadIsogenStdcall() result: " << result << '\n';
    return result;
}

int __cdecl pisogen(int a1, char* Source, char* a3, char* a4) {
    auto result = pisogenTrue(a1, Source, a3, a4);
    std::cout << "pisogen() with a1: " << a1 << ", Source: " << Source << ", a3: " << a3 << ", a4: " << a4 << ", result: " << result << '\n';
    return result;
}

int __stdcall _pisogenStdcall(int a1, char* Source, char* a3, char* a4) {
    auto result = _pisogenStdcallTrue(a1, Source, a3, a4);
    std::cout << "_pisogenStdcall() with a1: " << a1 << ", Source: " << Source << ", a3: " << a3 << ", a4: " << a4 << ", result: " << result << '\n';
    return result;
}

// Methods wrappers
HRESULT STDMETHODCALLTYPE put_RootDirectory(IPersonalIsogen* pThis, BSTR rhs) {
    HRESULT result = originalPutRootDirectory(pThis, rhs);
	const std::string stdstr(_bstr_t(rhs, true));
    std::cout << "Called put_RootDirectory() with argument: " << stdstr << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_Project(IPersonalIsogen* pThis, BSTR rhs) {
    HRESULT result = originalPutProject(pThis, rhs);
	const std::string stdstr(_bstr_t(rhs, true));
    std::cout << "Called put_Project() with argument: " << stdstr << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_Style(IPersonalIsogen* pThis, BSTR rhs) {
    HRESULT result = originalPutStyle(pThis, rhs);
	const std::string stdstr(_bstr_t(rhs, true));
    std::cout << "Called put_Style() with argument: " << stdstr << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_DimensionUnits(IPersonalIsogen* pThis, long rhs) {
    HRESULT result = originalPutDimensionUnits(pThis, rhs);
    std::cout << "Called put_DimensionUnits() with argument: " << rhs << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_WeightUnits(IPersonalIsogen* pThis, long rhs) {
    HRESULT result = originalPutWeightUnits(pThis, rhs);
    std::cout << "Called put_WeightUnits() with argument: " << rhs << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_DrawingFormat(IPersonalIsogen* pThis, long rhs) {
    HRESULT result = originalPutDrawingFormat(pThis, rhs);
    std::cout << "Called put_DrawingFormat() with argument: " << rhs << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_Viewpoint(IPersonalIsogen* pThis, long rhs) {
    HRESULT result = originalPutViewpoint(pThis, rhs);
    std::cout << "Called put_Viewpoint() with argument: " << rhs << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_Tolerance(IPersonalIsogen* pThis, long rhs) {
    HRESULT result = originalPutTolerance(pThis, rhs);
    std::cout << "Called put_Tolerance() with argument: " << rhs << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_MessageLevel(IPersonalIsogen* pThis, long rhs) {
    HRESULT result = originalPutMessageLevel(pThis, rhs);
    std::cout << "Called put_MessageLevel() with argument: " << rhs << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_DemoMode(IPersonalIsogen* pThis, long rhs) {
    HRESULT result = originalPutDemoMode(pThis, rhs);
    std::cout << "Called put_DemoMode() with argument: " << rhs << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE Execute(IPersonalIsogen* pThis, long* pVal) {
    HRESULT result = originalExecute(pThis, pVal);
    std::cout << "Called Execute() with arguments: pVal = " << *pVal << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE LoadIsogen(IPersonalIsogen* pThis) {
    HRESULT result = originalLoadIsogen(pThis);
    std::cout << "Called LoadIsogen(), result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE UnloadIsogen(IPersonalIsogen* pThis) {
    HRESULT result = originalUnloadIsogen(pThis);
    std::cout << "Called UnloadIsogen(), result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE get_OutputFiles(IPersonalIsogen* pThis, IOutputFiles** ppVal) {
    HRESULT result = originalGetOutputFiles(pThis, ppVal);
    std::cout << "Called get_OutputFiles(), result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_InputName(IPersonalIsogen* pThis, BSTR rhs) {
    HRESULT result = originalPutInputName(pThis, rhs);
	const std::string stdstr(_bstr_t(rhs, true));
    std::cout << "Called put_InputName() with argument: " << stdstr << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE GetHandshakeTime(IPersonalIsogen* pThis, long* lDay, long* lMonth, long* lYear, long* lHour, long* lMinute, long* SecondsCount) {
	*lDay = 18;
	*lMonth = 10;
	*lYear = 124;
	*lHour = 9;
	*lMinute = 2;
	*SecondsCount = 1729242162;
    //HRESULT result = originalGetHandshakeTime(pThis, lDay, lMonth, lYear, lHour, lMinute, SecondsCount);
	//*lDay = 18;
	//*lMonth = 10;
	//*lYear = 124;
	//*lHour = 9;
	//*lMinute = 2;
	//*SecondsCount = 1729242162;
	HRESULT result = 0;
    std::cout << "Called GetHandshakeTime() with arguments: " << *lDay << "-" << *lMonth << "-" << *lYear << " " << *lHour << ":" << *lMinute << " (SecondsCount = " << *SecondsCount << "), result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_Handshake(IPersonalIsogen* pThis, BSTR rhs) {
	const std::wstring october18 = L"ADRGDUCXDCUAKCDHXIMEEHERTIGAJDHEPOGAQJKT";
	BSTR october18bstr = SysAllocString(october18.c_str());
    HRESULT result = originalPutHandshake(pThis, october18bstr);
	const std::string stdstr(_bstr_t(october18bstr, true));
    std::cout << "Called put_Handshake() with argument: " << stdstr << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE get_ErrorText(IPersonalIsogen* pThis, BSTR* pVal) {
    HRESULT result = originalGetErrorText(pThis, pVal);
	const std::string stdstr(_bstr_t(*pVal, true));
    std::cout << "Called get_ErrorText(), with argument: " << stdstr << " result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_KeepPOD(IPersonalIsogen* pThis, long rhs) {
    HRESULT result = originalPutKeepPOD(pThis, rhs);
    std::cout << "Called put_KeepPOD() with argument: " << rhs << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE put_IsogenTimeout(IPersonalIsogen* pThis, long rhs) {
    HRESULT result = originalPutIsogenTimeout(pThis, rhs);
    std::cout << "Called put_IsogenTimeout() with argument: " << rhs << ", result: " << result << '\n';
    return result;
}

HRESULT STDMETHODCALLTYPE get_Version(IPersonalIsogen* pThis, BSTR* pVal) {
    HRESULT result = originalGetVersion(pThis, pVal);
	const std::string stdstr(_bstr_t(*pVal, true));
    std::cout << "Called get_Version(), with argument: " << stdstr << " result: " << result << '\n';
    return result;
}

__time64_t _time64Wrapper(__time64_t* destTime) {
	auto result = original_time64(destTime);
	std::cout << "Called _time64()\n";
	return result;
}

__time32_t _time32Wrapper(__time32_t* destTime) {
	auto result = original_time32(destTime);
	//std::cout << "Called _time32()\n";
	return result;
}

tm* _gmtime32Wrapper(const __time32_t* sourceTime) {
	tm* result = original_gmtime32(sourceTime);
	std::cout << "Called _gmtime32()\n";
	return result;
}

tm* _gmtime64Wrapper(const __time64_t* sourceTime) {
	auto result = original_gmtime64(sourceTime);
	std::cout << "Called _gmtime64()\n";
	return result;
}

ULONG STDMETHODCALLTYPE ReleaseWrapper(IPersonalIsogen* pThis) {
    std::cout << "Called Release()" << std::endl;
    ULONG refCount = pThis->Release();

    if (refCount == 0) {
        std::cout << "Releasing all function pointers..." << std::endl;
        if (originalPutRootDirectory) DetourDetach(&(PVOID&)originalPutRootDirectory, put_RootDirectory);
        if (originalPutProject) DetourDetach(&(PVOID&)originalPutProject, put_Project);
        if (originalPutStyle) DetourDetach(&(PVOID&)originalPutStyle, put_Style);
        if (originalPutDimensionUnits) DetourDetach(&(PVOID&)originalPutDimensionUnits, put_DimensionUnits);
        if (originalPutWeightUnits) DetourDetach(&(PVOID&)originalPutWeightUnits, put_WeightUnits);
        if (originalPutDrawingFormat) DetourDetach(&(PVOID&)originalPutDrawingFormat, put_DrawingFormat);
        if (originalPutViewpoint) DetourDetach(&(PVOID&)originalPutViewpoint, put_Viewpoint);
        if (originalPutTolerance) DetourDetach(&(PVOID&)originalPutTolerance, put_Tolerance);
        if (originalPutMessageLevel) DetourDetach(&(PVOID&)originalPutMessageLevel, put_MessageLevel);
        if (originalPutDemoMode) DetourDetach(&(PVOID&)originalPutDemoMode, put_DemoMode);
        if (originalExecute) DetourDetach(&(PVOID&)originalExecute, Execute);
        if (originalLoadIsogen) DetourDetach(&(PVOID&)originalLoadIsogen, LoadIsogen);
        if (originalUnloadIsogen) DetourDetach(&(PVOID&)originalUnloadIsogen, UnloadIsogen);
        if (originalGetOutputFiles) DetourDetach(&(PVOID&)originalGetOutputFiles, get_OutputFiles);
        if (originalPutInputName) DetourDetach(&(PVOID&)originalPutInputName, put_InputName);
        if (originalGetHandshakeTime) DetourDetach(&(PVOID&)originalGetHandshakeTime, GetHandshakeTime);
        if (originalPutHandshake) DetourDetach(&(PVOID&)originalPutHandshake, put_Handshake);
        if (originalGetErrorText) DetourDetach(&(PVOID&)originalGetErrorText, get_ErrorText);
        if (originalPutKeepPOD) DetourDetach(&(PVOID&)originalPutKeepPOD, put_KeepPOD);
        if (originalPutIsogenTimeout) DetourDetach(&(PVOID&)originalPutIsogenTimeout, put_IsogenTimeout);
        if (originalGetVersion) DetourDetach(&(PVOID&)originalGetVersion, get_Version);
        if (originalRelease) DetourDetach(&(PVOID&)originalRelease, ReleaseWrapper);
    }
    else {
        std::cout << "Release() called, current refCount: " << refCount << std::endl;
    }
    return refCount;
}

void LogObjectCreation(const CLSID& clsid) {
    if (clsid == CLSID_PersonalIsogen) {
        std::cout << "Created class instance: PersonalIsogen" << '\n';
    }
    else if (clsid == CLSID_OutputFiles) {
        std::cout << "Created class instance: OutputFiles" << '\n';
    }
    else if (clsid == CLSID_OutputFile) {
        std::cout << "Created class instance: OutputFile" << '\n';
    }
    else if (clsid == CLSID_Isogen) {
        std::cout << "Created class instance: Isogen" << '\n';
    }
    else if (clsid == CLSID_Idfgen) {
        std::cout << "Created class instance: Idfgen" << '\n';
    }
    else if (clsid == CLSID_Utility) {
        std::cout << "Created class instance: Utility" << '\n';
    }
    else if (clsid == CLSID_PersonalIsogen2) {
        std::cout << "Created class instance: PersonalIsogen2" << '\n';
    }
    else if (clsid == CLSID_IDFTrans) {
        std::cout << "Created class instance: IDFTrans" << '\n';
    }
    else if (clsid == CLSID_Dongle) {
        std::cout << "Created class instance: Dongle" << '\n';
    }
    else if (clsid == CLSID_CountingDongle) {
        std::cout << "Created class instance: CountingDongle" << '\n';
    }
}

void CreateConsoleWindow() {
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    freopen_s(&f, "CONOUT$", "w", stderr);
    freopen_s(&f, "CONIN$", "r", stdin);
    SetConsoleOutputCP(CP_UTF8);
    std::cout.clear();
    std::cerr.clear();
    std::cin.clear();
}

void CloseConsoleWindow() {
    FreeConsole();
}

std::string GetCurrentUTCTime() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm* utc_tm = std::gmtime(&now_c);
    std::ostringstream oss;
    oss << std::put_time(utc_tm, "%Y-%m-%d %H:%M:%S");
    return oss.str();
}

HRESULT WINAPI CoCreateInstanceInterceptor(REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID* ppv) {
    LogObjectCreation(rclsid);
    HRESULT hr = originalCoCreateInstance(rclsid, pUnkOuter, dwClsContext, riid, ppv);
    if (SUCCEEDED(hr) && riid == IID_IPersonalIsogen) {

        std::cout << "========================= NEW REPORT " << GetCurrentUTCTime() << " =========================" << '\n';

        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());

        if (originalPutRootDirectory) DetourDetach(&(PVOID&)originalPutRootDirectory, put_RootDirectory);
        if (originalPutProject) DetourDetach(&(PVOID&)originalPutProject, put_Project);
        if (originalPutStyle) DetourDetach(&(PVOID&)originalPutStyle, put_Style);
        if (originalPutDimensionUnits) DetourDetach(&(PVOID&)originalPutDimensionUnits, put_DimensionUnits);
        if (originalPutWeightUnits) DetourDetach(&(PVOID&)originalPutWeightUnits, put_WeightUnits);
        if (originalPutDrawingFormat) DetourDetach(&(PVOID&)originalPutDrawingFormat, put_DrawingFormat);
        if (originalPutViewpoint) DetourDetach(&(PVOID&)originalPutViewpoint, put_Viewpoint);
        if (originalPutTolerance) DetourDetach(&(PVOID&)originalPutTolerance, put_Tolerance);
        if (originalPutMessageLevel) DetourDetach(&(PVOID&)originalPutMessageLevel, put_MessageLevel);
        if (originalPutDemoMode) DetourDetach(&(PVOID&)originalPutDemoMode, put_DemoMode);
        if (originalExecute) DetourDetach(&(PVOID&)originalExecute, Execute);
        if (originalLoadIsogen) DetourDetach(&(PVOID&)originalLoadIsogen, LoadIsogen);
        if (originalUnloadIsogen) DetourDetach(&(PVOID&)originalUnloadIsogen, UnloadIsogen);
        if (originalGetOutputFiles) DetourDetach(&(PVOID&)originalGetOutputFiles, get_OutputFiles);
        if (originalPutInputName) DetourDetach(&(PVOID&)originalPutInputName, put_InputName);
        if (originalGetHandshakeTime) DetourDetach(&(PVOID&)originalGetHandshakeTime, GetHandshakeTime);
        if (originalPutHandshake) DetourDetach(&(PVOID&)originalPutHandshake, put_Handshake);
        if (originalGetErrorText) DetourDetach(&(PVOID&)originalGetErrorText, get_ErrorText);
        if (originalPutKeepPOD) DetourDetach(&(PVOID&)originalPutKeepPOD, put_KeepPOD);
        if (originalPutIsogenTimeout) DetourDetach(&(PVOID&)originalPutIsogenTimeout, put_IsogenTimeout);
        if (originalGetVersion) DetourDetach(&(PVOID&)originalGetVersion, get_Version);
        if (originalRelease) DetourDetach(&(PVOID&)originalRelease, ReleaseWrapper);

        if (DetourTransactionCommit() == NO_ERROR) {
            std::cout << "All method interceptors for IPersonalIsogen released!" << '\n';
        }
        else {
            std::cout << "Error release interceptors for IPersonalIsogen methods." << '\n';
        }

        IPersonalIsogen* pPersonalIsogen = static_cast<IPersonalIsogen*>(*ppv);

        void** vtable = *reinterpret_cast<void***>(pPersonalIsogen);

        originalPutRootDirectory = reinterpret_cast<put_RootDirectoryPtr>(vtable[7]);
        originalPutProject = reinterpret_cast<put_ProjectPtr>(vtable[8]);
        originalPutStyle = reinterpret_cast<put_StylePtr>(vtable[9]);
        originalPutDimensionUnits = reinterpret_cast<put_DimensionUnitsPtr>(vtable[10]);
        originalPutWeightUnits = reinterpret_cast<put_WeightUnitsPtr>(vtable[11]);
        originalPutDrawingFormat = reinterpret_cast<put_DrawingFormatPtr>(vtable[12]);
        originalPutViewpoint = reinterpret_cast<put_ViewpointPtr>(vtable[13]);
        originalPutTolerance = reinterpret_cast<put_TolerancePtr>(vtable[14]);
        originalPutMessageLevel = reinterpret_cast<put_MessageLevelPtr>(vtable[15]);
        originalPutDemoMode = reinterpret_cast<put_DemoModePtr>(vtable[16]);
        originalExecute = reinterpret_cast<ExecutePtr>(vtable[17]);
        originalLoadIsogen = reinterpret_cast<LoadIsogenPtr>(vtable[18]);
        originalUnloadIsogen = reinterpret_cast<UnloadIsogenPtr>(vtable[19]);
        originalGetOutputFiles = reinterpret_cast<get_OutputFilesPtr>(vtable[20]);
        originalPutInputName = reinterpret_cast<put_InputNamePtr>(vtable[21]);
        originalGetHandshakeTime = reinterpret_cast<GetHandshakeTimePtr>(vtable[22]);
        originalPutHandshake = reinterpret_cast<put_HandshakePtr>(vtable[23]);
        originalGetErrorText = reinterpret_cast<get_ErrorTextPtr>(vtable[24]);
        originalPutKeepPOD = reinterpret_cast<put_KeepPODPtr>(vtable[25]);
        originalPutIsogenTimeout = reinterpret_cast<put_IsogenTimeoutPtr>(vtable[26]);
        originalGetVersion = reinterpret_cast<get_VersionPtr>(vtable[27]);
        originalRelease = reinterpret_cast<ReleasePtr>(vtable[28]);

        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());

        if (originalPutRootDirectory) DetourAttach(&(PVOID&)originalPutRootDirectory, put_RootDirectory);
        if (originalPutProject) DetourAttach(&(PVOID&)originalPutProject, put_Project);
        if (originalPutStyle) DetourAttach(&(PVOID&)originalPutStyle, put_Style);
        if (originalPutDimensionUnits) DetourAttach(&(PVOID&)originalPutDimensionUnits, put_DimensionUnits);
        if (originalPutWeightUnits) DetourAttach(&(PVOID&)originalPutWeightUnits, put_WeightUnits);
        if (originalPutDrawingFormat) DetourAttach(&(PVOID&)originalPutDrawingFormat, put_DrawingFormat);
        if (originalPutViewpoint) DetourAttach(&(PVOID&)originalPutViewpoint, put_Viewpoint);
        if (originalPutTolerance) DetourAttach(&(PVOID&)originalPutTolerance, put_Tolerance);
        if (originalPutMessageLevel) DetourAttach(&(PVOID&)originalPutMessageLevel, put_MessageLevel);
        if (originalPutDemoMode) DetourAttach(&(PVOID&)originalPutDemoMode, put_DemoMode);
        if (originalExecute) DetourAttach(&(PVOID&)originalExecute, Execute);
        if (originalLoadIsogen) DetourAttach(&(PVOID&)originalLoadIsogen, LoadIsogen);
        if (originalUnloadIsogen) DetourAttach(&(PVOID&)originalUnloadIsogen, UnloadIsogen);
        if (originalGetOutputFiles) DetourAttach(&(PVOID&)originalGetOutputFiles, get_OutputFiles);
        if (originalPutInputName) DetourAttach(&(PVOID&)originalPutInputName, put_InputName);
        if (originalGetHandshakeTime) DetourAttach(&(PVOID&)originalGetHandshakeTime, GetHandshakeTime);
        if (originalPutHandshake) DetourAttach(&(PVOID&)originalPutHandshake, put_Handshake);
        if (originalGetErrorText) DetourAttach(&(PVOID&)originalGetErrorText, get_ErrorText);
        if (originalPutKeepPOD) DetourAttach(&(PVOID&)originalPutKeepPOD, put_KeepPOD);
        if (originalPutIsogenTimeout) DetourAttach(&(PVOID&)originalPutIsogenTimeout, put_IsogenTimeout);
        if (originalGetVersion) DetourAttach(&(PVOID&)originalGetVersion, get_Version);
        if (originalRelease) DetourAttach(&(PVOID&)originalRelease, ReleaseWrapper);

        if (DetourTransactionCommit() == NO_ERROR) {
            std::cout << "All method interceptors for IPersonalIsogen added successfully!" << '\n';
        }
        else {
            std::cout << "Error adding interceptors for IPersonalIsogen methods." << '\n';
        }
    }
    return hr;
}

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    switch (fdwReason) {
    case DLL_PROCESS_ATTACH: {
        CreateConsoleWindow();
        std::cout << "========================= START " << GetCurrentUTCTime() << " =========================" << '\n';
        hModule = GetModuleHandle(TEXT("pisogen.dll"));
        if (hModule == nullptr) {
            std::cout << "pisogen.dll module handler is not set." << '\n';
            return FALSE;
        }
        std::cout << "pisogen.dll module handler is set." << '\n';
        AliasTimeTrue = (AliasTime_t)GetProcAddress(hModule, "AliasTime");
        AliasTmTrue = (AliasTmFunc)GetProcAddress(hModule, "AliasTm");
        _AliasTmStdcallTrue = (_AliasTmStdcallFunc)GetProcAddress(hModule, "_AliasTmStdcall@20");
        pigenTrue = (pigenFunc)GetProcAddress(hModule, "pigen");
        pigenIDFGENTrue = (pigenIDFGENFunc)GetProcAddress(hModule, "pigenIDFGEN");
        _pigenIDFGENStdcallTrue = (_pigenIDFGENStdcallFunc)GetProcAddress(hModule, "_pigenIDFGENStdcall@12");
        pigenISOGENTrue = (pigenISOGENFunc)GetProcAddress(hModule, "pigenISOGEN");
        _pigenISOGENStdcallTrue = (_pigenISOGENStdcallFunc)GetProcAddress(hModule, "_pigenISOGENStdcall@12");
        pigenLoadIsogenTrue = (pigenLoadIsogenFunc)GetProcAddress(hModule, "pigenLoadIsogen");
        _pigenLoadIsogenStdcallTrue = (_pigenLoadIsogenStdcallFunc)GetProcAddress(hModule, "_pigenLoadIsogenStdcall@0");
        pigenSetIdfgenTimeoutTrue = (pigenSetIdfgenTimeoutFunc)GetProcAddress(hModule, "pigenSetIdfgenTimeout");
        _pigenSetIdfgenTimeoutStdcallTrue = (_pigenSetIdfgenTimeoutStdcallFunc)GetProcAddress(hModule, "_pigenSetIdfgenTimeoutStdcall@4");
        pigenSetIsogenTimeoutTrue = (pigenSetIsogenTimeoutFunc)GetProcAddress(hModule, "pigenSetIsogenTimeout");
        _pigenSetIsogenTimeoutStdcallTrue = (_pigenSetIsogenTimeoutStdcallFunc)GetProcAddress(hModule, "_pigenSetIsogenTimeoutStdcall@4");
        _pigenStdcallTrue = (_pigenStdcallFunc)GetProcAddress(hModule, "_pigenStdcall@12");
        pigenUnloadIsogenTrue = (pigenUnloadIsogenFunc)GetProcAddress(hModule, "pigenUnloadIsogen");
        _pigenUnloadIsogenStdcallTrue = (_pigenUnloadIsogenStdcallFunc)GetProcAddress(hModule, "_pigenUnloadIsogenStdcall@0");
        pisogenTrue = (pisogenFunc)GetProcAddress(hModule, "pisogen");
        _pisogenStdcallTrue = (_pisogenStdcallFunc)GetProcAddress(hModule, "_pisogenStdcall@16");

        originalCoCreateInstance = (CoCreateInstancePtr)GetProcAddress(GetModuleHandle(L"ole32.dll"), "CoCreateInstance");

		original_time64 = (_time64Func)GetProcAddress(GetModuleHandle(L"msvcrt.dll"), "_time64");
		original_time32 = (_time32Func)GetProcAddress(GetModuleHandle(L"msvcrt.dll"), "_time32");
		original_gmtime32 = (_gmtime32Func)GetProcAddress(GetModuleHandle(L"msvcrt.dll"), "_gmtime32");
		original_gmtime64 = (_gmtime64Func)GetProcAddress(GetModuleHandle(L"msvcrt.dll"), "_gmtime64");

        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());

        DetourAttach(&(PVOID&)originalCoCreateInstance, CoCreateInstanceInterceptor);

        if (AliasTimeTrue) DetourAttach(&(PVOID&)AliasTimeTrue, AliasTime);
        if (AliasTmTrue) DetourAttach(&(PVOID&)AliasTmTrue, AliasTm);
        if (_AliasTmStdcallTrue) DetourAttach(&(PVOID&)_AliasTmStdcallTrue, _AliasTmStdcall);
        if (pigenTrue) DetourAttach(&(PVOID&)pigenTrue, pigen);
        if (pigenIDFGENTrue) DetourAttach(&(PVOID&)pigenIDFGENTrue, pigenIDFGEN);
        if (_pigenIDFGENStdcallTrue) DetourAttach(&(PVOID&)_pigenIDFGENStdcallTrue, _pigenIDFGENStdcall);
        if (pigenISOGENTrue) DetourAttach(&(PVOID&)pigenISOGENTrue, pigenISOGEN);
        if (_pigenISOGENStdcallTrue) DetourAttach(&(PVOID&)_pigenISOGENStdcallTrue, _pigenISOGENStdcall);
        if (pigenLoadIsogenTrue) DetourAttach(&(PVOID&)pigenLoadIsogenTrue, pigenLoadIsogen);
        if (_pigenLoadIsogenStdcallTrue) DetourAttach(&(PVOID&)_pigenLoadIsogenStdcallTrue, _pigenLoadIsogenStdcall);
        if (pigenSetIdfgenTimeoutTrue) DetourAttach(&(PVOID&)pigenSetIdfgenTimeoutTrue, pigenSetIdfgenTimeout);
        if (_pigenSetIdfgenTimeoutStdcallTrue) DetourAttach(&(PVOID&)_pigenSetIdfgenTimeoutStdcallTrue, _pigenSetIdfgenTimeoutStdcall);
        if (pigenSetIsogenTimeoutTrue) DetourAttach(&(PVOID&)pigenSetIsogenTimeoutTrue, pigenSetIsogenTimeout);
        if (_pigenSetIsogenTimeoutStdcallTrue) DetourAttach(&(PVOID&)_pigenSetIsogenTimeoutStdcallTrue, _pigenSetIsogenTimeoutStdcall);
        if (_pigenStdcallTrue) DetourAttach(&(PVOID&)_pigenStdcallTrue, _pigenStdcall);
        if (pigenUnloadIsogenTrue) DetourAttach(&(PVOID&)pigenUnloadIsogenTrue, pigenUnloadIsogen);
        if (_pigenUnloadIsogenStdcallTrue) DetourAttach(&(PVOID&)_pigenUnloadIsogenStdcallTrue, _pigenUnloadIsogenStdcall);
        if (pisogenTrue) DetourAttach(&(PVOID&)pisogenTrue, pisogen);
        if (_pisogenStdcallTrue) DetourAttach(&(PVOID&)_pisogenStdcallTrue, _pisogenStdcall);

		if (original_time64) DetourAttach(&(PVOID&)original_time64, _time64Wrapper);
		if (original_time32) DetourAttach(&(PVOID&)original_time32, _time32Wrapper);
		if (original_gmtime32) DetourAttach(&(PVOID&)original_gmtime32, _gmtime32Wrapper);
		if (original_gmtime64) DetourAttach(&(PVOID&)original_gmtime64, _gmtime64Wrapper);

        DetourTransactionCommit();
        break;
    }
    case DLL_PROCESS_DETACH: {
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
        if (AliasTimeTrue) DetourDetach(&(PVOID&)AliasTimeTrue, AliasTime);
        if (AliasTmTrue) DetourDetach(&(PVOID&)AliasTmTrue, AliasTm);
        if (_AliasTmStdcallTrue) DetourDetach(&(PVOID&)_AliasTmStdcallTrue, _AliasTmStdcall);
        if (pigenTrue) DetourDetach(&(PVOID&)pigenTrue, pigen);
        if (pigenIDFGENTrue) DetourDetach(&(PVOID&)pigenIDFGENTrue, pigenIDFGEN);
        if (_pigenIDFGENStdcallTrue) DetourDetach(&(PVOID&)_pigenIDFGENStdcallTrue, _pigenIDFGENStdcall);
        if (pigenISOGENTrue) DetourDetach(&(PVOID&)pigenISOGENTrue, pigenISOGEN);
        if (_pigenISOGENStdcallTrue) DetourDetach(&(PVOID&)_pigenISOGENStdcallTrue, _pigenISOGENStdcall);
        if (pigenLoadIsogenTrue) DetourDetach(&(PVOID&)pigenLoadIsogenTrue, pigenLoadIsogen);
        if (_pigenLoadIsogenStdcallTrue) DetourDetach(&(PVOID&)_pigenLoadIsogenStdcallTrue, _pigenLoadIsogenStdcall);
        if (pigenSetIdfgenTimeoutTrue) DetourDetach(&(PVOID&)pigenSetIdfgenTimeoutTrue, pigenSetIdfgenTimeout);
        if (_pigenSetIdfgenTimeoutStdcallTrue) DetourDetach(&(PVOID&)_pigenSetIdfgenTimeoutStdcallTrue, _pigenSetIdfgenTimeoutStdcall);
        if (pigenSetIsogenTimeoutTrue) DetourDetach(&(PVOID&)pigenSetIsogenTimeoutTrue, pigenSetIsogenTimeout);
        if (_pigenSetIsogenTimeoutStdcallTrue) DetourDetach(&(PVOID&)_pigenSetIsogenTimeoutStdcallTrue, _pigenSetIsogenTimeoutStdcall);
        if (_pigenStdcallTrue) DetourDetach(&(PVOID&)_pigenStdcallTrue, _pigenStdcall);
        if (pigenUnloadIsogenTrue) DetourDetach(&(PVOID&)pigenUnloadIsogenTrue, pigenUnloadIsogen);
        if (_pigenUnloadIsogenStdcallTrue) DetourDetach(&(PVOID&)_pigenUnloadIsogenStdcallTrue, _pigenUnloadIsogenStdcall);
        if (pisogenTrue) DetourDetach(&(PVOID&)pisogenTrue, pisogen);
        if (_pisogenStdcallTrue) DetourDetach(&(PVOID&)_pisogenStdcallTrue, _pisogenStdcall);
        DetourDetach(&(PVOID&)originalCoCreateInstance, CoCreateInstanceInterceptor);

		if (original_time64) DetourDetach(&(PVOID&)original_time64, _time64Wrapper);
		if (original_time32) DetourDetach(&(PVOID&)original_time32, _time32Wrapper);
		if (original_gmtime32) DetourDetach(&(PVOID&)original_gmtime32, _gmtime32Wrapper);
		if (original_gmtime64) DetourDetach(&(PVOID&)original_gmtime64, _gmtime64Wrapper);

        DetourTransactionCommit();
        if (hModule) FreeLibrary(hModule);
        std::cout << "========================= STOP " << GetCurrentUTCTime() << " =========================" << '\n';
        CloseConsoleWindow();
        break;
    }
    }
    return TRUE;
}
