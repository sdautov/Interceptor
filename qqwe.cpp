#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdint>
#include <ctime>
#include <Windows.h>

int unk_100A1B1C[10] = { 6, 9, 14, 17, 19, 20, 26, 31, 32, 38 };
int unk_100A1ACC[10] = { 3, 6, 11, 13, 17, 22, 25, 27, 31, 35 };
int unk_100A1AF4[10] = { 2, 7, 10, 14, 17, 18, 23, 29, 36, 39 };
const char* alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void fcn_100197f0(int32_t* arg_4h, int32_t arg_8h) {
	*arg_4h = arg_8h % 10;
	*(arg_4h + 1) = (arg_8h - *arg_4h) / 10;
}

void ABCDEFGHIJKLMNOPQRSTUVWXYZ_100196e0(int32_t* output, char* result, int32_t time_val) {
	int32_t var_50h[10];
	int32_t var_28h[10];
	time_t time = time_val;
	tm* tm_info = gmtime(&time);

	fcn_100197f0(&var_50h[8], tm_info->tm_min);
	fcn_100197f0(&var_50h[6], tm_info->tm_hour);
	fcn_100197f0(&var_50h[4], tm_info->tm_year);
	fcn_100197f0(&var_50h[2], tm_info->tm_mon + 1);
	fcn_100197f0(&var_50h[0], tm_info->tm_mday);

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

void ABCDEFGHIJKLMNOPQRSTUVWXYZ_100197a0(uint32_t seed, char* arg_8h) {
	srand(seed);
	const int alphabet_size = 26;
	for (int i = 0; i < 40; ++i) {
		int random_value = rand();
		int index = (random_value * 25) / RAND_MAX;
		arg_8h[i] = alphabet[index];
	}
	arg_8h[40] = '\0';
}

void Generate(int arg_4h, char* arg_8h, int timeValue) {
	int output;
	char result[11];
	ABCDEFGHIJKLMNOPQRSTUVWXYZ_100196e0(&output, result, static_cast<int32_t>(timeValue));
	ABCDEFGHIJKLMNOPQRSTUVWXYZ_100197a0(output, arg_8h);
	if (arg_4h == 1) {
		for (int i = 0; i < 10; i++) {

		}
	}
	if (arg_4h == 1) {
		for (int i = 0; i < 10; i++) {
			arg_8h[unk_100A1ACC[i]] = result[i];
		}
	}
	else if (arg_4h == 2) {
		for (int i = 0; i < 10; i++) {
			arg_8h[unk_100A1AF4[i]] = result[i];
		}
	}
	else if (arg_4h == 0) {
		for (int i = 0; i < 10; i++) {
			arg_8h[unk_100A1B1C[i]] = result[i];
		}
	}
}

int32_t Decode(char* arg_4h, int32_t arg_8h) {
	char s1[11] = {};
	char s2[11] = {};
	char var_ch[11] = {};
	int32_t iVar6 = arg_8h;
	ABCDEFGHIJKLMNOPQRSTUVWXYZ_100196e0(&arg_8h, s2, arg_8h);
	ABCDEFGHIJKLMNOPQRSTUVWXYZ_100196e0(&arg_8h, var_ch, arg_8h - 60);
	int32_t result = 0x8000;	
	for (int i = 0; i < 3; ++i) {
		const int32_t* currentArray = nullptr;
		if (i == 0) {
			currentArray = unk_100A1B1C;
		}
		else if (i == 1) {
			currentArray = unk_100A1ACC;
		}
		else if (i == 2) {
			currentArray = unk_100A1AF4;
		}

		for (int j = 0; j < 10; ++j) {
			s1[j] = arg_4h[currentArray[j]];
		}
		s1[10] = '\0';
		if (std::strncmp(s1, s2, 10) == 0) {
			result = i;
			break;
		}

		if (std::strncmp(s1, var_ch, 10) == 0) {
			result = i;
			break;
		}
	}

	return result;
}

int main() {
	for (time_t timeValue = 1729900800; true; timeValue++) {
		int output;
		char result[11];
		ABCDEFGHIJKLMNOPQRSTUVWXYZ_100196e0(&output, result, static_cast<int32_t>(timeValue));
		char result2[41];
		ABCDEFGHIJKLMNOPQRSTUVWXYZ_100197a0(output, result2);
		char result3[41];
		Generate(1, result3, timeValue);
		int dec = Decode(result3, timeValue);
		std::cout << timeValue << " " << result3 << " " << dec << std::endl;
		if (dec == 0x8000) {
			std::cout << timeValue << std::endl;
			break;
		}
	}
	return 0;
}
