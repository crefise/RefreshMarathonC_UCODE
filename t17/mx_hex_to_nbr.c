#include <stdlib.h>
#include <stdbool.h>

bool mx_isdigit(int c) {
    for (int i = 48; i <= 57; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}
bool mx_isalpha(int c) {
    for (int i = 65; i <= 90; i++) {
        if (c == i) {
            return true;
        }
    }
    for (int i = 97; i <= 122; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}
bool mx_islower(int c) { 
    for (int i = 97; i <= 122; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}
bool mx_isupper(int c) { 
    for (int i = 65; i <= 90; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}

unsigned long mx_hex_to_nbr(const char *hex) {
	int len = 0;
	unsigned long num = 0;
	unsigned long base = 1;
	if (hex != NULL)
		while (hex[len])
			len++;
	else
		return 0;
    for (int i = 0; i < len; i++)
    {
        if (mx_isdigit(hex[i]) || ((hex[i] >= 'a' && hex[i] <= 'f') || (hex[i] >= 'A' && hex[i] <= 'F')))
            continue;
        return 0;
    }
	for (int i = 0; i <= len; i++) {
		if (hex[len - i] >= '0' && hex[len - i] <= '9') {
			num = num + (hex[len - i] - 48) * base;
			base = base * 16;
		}
		if (hex[len - i] >= 'A' && hex[len - i] <= 'F') {
			num = num + (hex[len - i] - 55) * base;
			base = base * 16;
		}
		if (hex[len - i] >= 'a' && hex[len - i] <= 'f') {
			num = num + (hex[len - i] - 87) * base;
			base = base * 16;
		}

	}
	return num;
}
