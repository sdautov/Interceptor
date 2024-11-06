#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdint>
#include <ctime>
#include <Windows.h>

typedef void(__cdecl* srand_t)(unsigned int);
srand_t msvcr71srand = nullptr;

typedef int(__cdecl* rand_t)();
rand_t msvcr71rand = nullptr;

void fcn_100197f0(int32_t* arg_4h, int32_t arg_8h) {
	*arg_4h = arg_8h % 10;
	*(arg_4h + 1) = (arg_8h - *arg_4h) / 10;
}

void ABCDEFGHIJKLMNOPQRSTUVWXYZ_100196e0(int32_t* output, char* result, int32_t time_val) {
	int32_t var_50h[10];
	int32_t var_28h[10];
	time_t time = time_val;
	tm* tm_info = gmtime(&time);


	fcn_100197f0(&var_50h[0], tm_info->tm_min);
	fcn_100197f0(&var_50h[2], tm_info->tm_hour);
	fcn_100197f0(&var_50h[4], tm_info->tm_year);
	fcn_100197f0(&var_50h[6], tm_info->tm_mon + 1);
	fcn_100197f0(&var_50h[8], tm_info->tm_mday);

	int32_t sum = tm_info->tm_sec;
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

void ABCDEFGHIJKLMNOPQRSTUVWXYZ_100197a0(int seed, char* arg_8h) {
	msvcr71srand(seed);
	const char* alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const int alphabet_size = 26;
	for (int i = 0; i < 40; ++i) {
		int random_value = msvcr71rand();
		int index = (random_value * 25) / RAND_MAX;
		arg_8h[i] = alphabet[index];
	}
	arg_8h[40] = '\0';
}

int main() {
	HMODULE hModule = LoadLibrary(TEXT("msvcr71.dll"));
	if (hModule == NULL) {
		std::cout << "Error loading msvcr71.dll" << std::endl;
		return -1;
	}

	msvcr71srand = (srand_t)GetProcAddress(hModule, "srand");
	msvcr71rand = (rand_t)GetProcAddress(hModule, "rand");
	
	time_t timeValue = 1729242162;
	char validStr[] = "ADRGDUCXDCUAKCDHXIMEEHERTIGAJDHEPOGAQJKT";

	int output;
	char result[11];
	ABCDEFGHIJKLMNOPQRSTUVWXYZ_100196e0(&output, result, static_cast<int32_t>(timeValue));
	std::cout << output << std::endl;
	std::cout << result << std::endl;

	char result2[41];
	ABCDEFGHIJKLMNOPQRSTUVWXYZ_100197a0(output, result2);
	std::cout << result2 << std::endl;

	//for (uint32_t i = 0; i < UINT32_MAX; i++) {
	//	ABCDEFGHIJKLMNOPQRSTUVWXYZ_100197a0(i, result2);
	//	if (strcmp(result2, validStr) == 0) {
	//		std::cout << "FOUND! " << i << std::endl;
	//		break;
	//	}
	//}

	FreeLibrary(hModule);
	return 0;
}
