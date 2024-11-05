void PrintStackTrace() {
    const int maxFrames = 64;
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
        printf("Stack frame %d: %s\n", i, symbol->Name);
    }

    free(symbol);
}
