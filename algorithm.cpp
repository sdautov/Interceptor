#include <ctime>
#include <cstring>
#include <iostream>

void remainder(int32_t *result, int32_t value) {
    result[0] = value % 10;
    result[1] = value / 10;
}

void subABCDEFGHIJKLMNOPQRSTUVWXYZ(int32_t *output, char *result, int32_t time_val) {
    int32_t var_50h[10];
    int32_t var_28h[10];
    time_t time = time_val;
    tm *tm_info = gmtime(&time);

    
    remainder(&var_50h[0], tm_info->tm_sec);
    remainder(&var_50h[2], tm_info->tm_min);
    remainder(&var_50h[4], tm_info->tm_hour);
    remainder(&var_50h[6], tm_info->tm_mon + 1);
    remainder(&var_50h[8], tm_info->tm_mday);

    int32_t sum = tm_info->tm_year + 1900;
    for (int i = 0; i < 10; ++i) {
        sum += var_50h[i];
    }
    *output = sum;

    
    for (int i = 0; i < 10; ++i) {
        var_28h[i] = (var_50h[i] * 2) % 10;
        result[i] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[var_28h[i]];
    }
    result[10] = '\0';
}

int fcn(int32_t arg_4h, int32_t arg_8h, const char *arg_2ch) {
    static int unk_100A1B1C[10] = { 6, 9, 14, 17, 19, 20, 26, 31, 32, 38 };
    static int unk_100A1ACC[10] = { 3, 6, 11, 13, 17, 22, 25, 27, 31, 35 };
    static int unk_100A1AF4[10] = { 2, 7, 10, 14, 17, 18, 23, 29, 36, 39 };

    char s1[11], s2[11], var_ch[11];
    int iVar4 = 0x8000;

    subABCDEFGHIJKLMNOPQRSTUVWXYZ(&arg_8h, s2, arg_8h);
    subABCDEFGHIJKLMNOPQRSTUVWXYZ(&arg_8h, var_ch, arg_8h - 60);

    const int32_t *current_set = nullptr;
    for (int i = 0; i < 3; ++i) {
        if (i == 0) current_set = unk_100A1B1C;
        else if (i == 1) current_set = unk_100A1ACC;
        else if (i == 2) current_set = unk_100A1AF4;

        for (int j = 0; j < 10; ++j) {
            s1[j] = *(char *)(arg_4h + current_set[j]);
        }
        s1[10] = '\0';

        if (strncmp(s1, s2, 10) == 0 || strncmp(s1, var_ch, 10) == 0) {
            return i;
        }
    }
    return iVar4;
}

int main() {
    int result = fcn(0, static_cast<int>(time(nullptr)), "Some input string");
    std::cout << "Result: " << result << std::endl;
    return 0;
}
