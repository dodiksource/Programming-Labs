#include <iostream>

bool is_digit(char c) {
    return c >= '0' && c <= '9';
}

bool calculate(
    const char* expr,
    int& result,
    int& error_position
) {
    int i = 0;
    int left = 0;
    int right = 0;

    if (!is_digit(expr[i])) {
        error_position = i;
        return false;
    }

    while (is_digit(expr[i])) {
        left = left * 10 + (expr[i] - '0');
        ++i;
    }

    char op = expr[i];

    if (op != '+' && op != '-' && op != '*') {
        error_position = i;
        return false;
    }

    ++i;

    if (!is_digit(expr[i])) {
        error_position = i;
        return false;
    }

    while (is_digit(expr[i])) {
        right = right * 10 + (expr[i] - '0');
        ++i;
    }

    if (expr[i] != '\0') {
        error_position = i;
        return false;
    }

    if (op == '+') {
        result = left + right;
    } else if (op == '-') {
        result = left - right;
    } else {
        result = left * right;
    }

    return true;
}

int main() {
    const char* expressions[] = {
        "12+34",
        "7*6x"
    };

    for (const char* expr : expressions) {
        int result = 0;
        int error_position = 0;

        if (calculate(expr, result, error_position)) {
            std::cout << result << '\n';
        } else {
            std::cout << "error at "
                      << error_position << '\n';
        }
    }

    return 0;
}