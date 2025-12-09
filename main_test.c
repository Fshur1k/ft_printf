#include <stdio.h>
#include <limits.h> // Для INT_MIN, INT_MAX
#include "ft_printf.h"

// Допоміжний макрос для запуску тестів
// Він запускає обидві функції і показує різницю
#define TEST(desc, format, ...) \
    do { \
        int ret_orig, ret_my; \
        printf("----------------------------------------\n"); \
        printf("TEST: %s\n", desc); \
        printf("[ORIG]: "); \
        fflush(stdout); \
        ret_orig = printf(format, ##__VA_ARGS__); \
        printf("\n[MINE]: "); \
        fflush(stdout); \
        ret_my = ft_printf(format, ##__VA_ARGS__); \
        printf("\n"); \
        if (ret_orig == ret_my) \
            printf("✅ RETURNS MATCH: %d\n", ret_my); \
        else \
            printf("❌ RETURNS DIFF: Orig(%d) vs Mine(%d)\n", ret_orig, ret_my); \
    } while (0)

int main(void)
{
    int num = 42;
    int *ptr = &num;

    printf("\n=== STARTING TESTS ===\n\n");

    // 1. Прості рядки
    TEST("Simple string", "Hello World");
    
    // 2. Символи (%c)
    TEST("Char normal", "Char: %c", 'A');
    TEST("Char zero", "Char 0: %c", 0); // Важливий тест! Має бути видно порожнє місце, return +1

    // 3. Рядки (%s)
    TEST("String normal", "String: %s", "Hello 42");
    TEST("String empty", "Empty: %s", "");
    TEST("String NULL", "Null: %s", (char *)NULL); // Перевірка захисту від NULL

    // 4. Десяткові (%d, %i)
    TEST("Int positive", "Num: %d", 12345);
    TEST("Int negative", "Num: %d", -9876);
    TEST("Int zero", "Num: %d", 0);
    TEST("Int MAX", "Max: %d", INT_MAX);
    TEST("Int MIN", "Min: %d", INT_MIN); // Найчастіша помилка тут

    // 5. Беззнакові (%u)
    TEST("Unsigned normal", "Uint: %u", 4294967295U); // UINT_MAX
    TEST("Unsigned small", "Uint: %u", 0);

    // 6. Hex (%x, %X)
    TEST("Hex lower", "Hex: %x", 255);
    TEST("Hex upper", "Hex: %X", 255);
    TEST("Hex zero", "Hex: %x", 0);
    TEST("Hex large", "Hex: %x", -1); // 0xffffffff

    // 7. Вказівники (%p)
    TEST("Pointer valid", "Ptr: %p", ptr);
    TEST("Pointer NULL", "Ptr: %p", NULL); // Має вивести (nil) або 0x0

    // 8. Відсоток (%%)
    TEST("Percent", "100%% sure");
    
    // 9. Комбінований тест (Mix)
    TEST("Mix", "Char %c, String %s, Int %d, Hex %x", 'Z', "Mix", -42, 255);

    printf("\n=== END OF TESTS ===\n");
    return (0);
}