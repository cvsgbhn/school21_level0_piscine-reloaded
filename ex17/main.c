#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

//int		main(void)
//{
//	char *s1_test0 = "qwe";
//	char *s2_test0 = "qwe";
//
//	char *s1_test1 = "qwe";
//	char *s2_test1 = "qwr";
//	
//	char *s1_test2 = "qwer";
//	char *s2_test2 = "qwe";
//
//	char *s1_test3 = "qwe";
//	char *s2_test3 = "qwer";
//
//	printf("%d %s %d\n", ft_strcmp(s1_test0, s2_test0), "expected->", strcmp(s1_test0, s2_test0));
//	printf("%d %s %d\n", ft_strcmp(s1_test1, s2_test1), "expected->", strcmp(s1_test1, s2_test1));
//	printf("%d %s %d\n", ft_strcmp(s1_test2, s2_test2), "expected->", strcmp(s1_test2, s2_test2));
//	printf("%d %s %d\n", ft_strcmp(s1_test3, s2_test3), "expected->", strcmp(s1_test3, s2_test3));
//
//	return (0);
//}
//


int     test(char *s1, char *s2);

int main(void)
{
    //char *str;
    int res = 0;

    printf("1. ");
    res += test("hello", "hello");
    printf("2. ");
    res += test(" hello", "hello");
    printf("3. ");
    res += test("\nhello", "hello");
    printf("4. ");
    res += test("\thello", "hello");
    printf("5. ");
    res += test("Hello", "hello");
    printf("6. ");
    res += test("HELLO", "hello");
    printf("7. ");
    res += test("he lo", "hello");
    printf("8. ");
    res += test("12abc", "abc");
    printf("9. ");
    res += test("abc12", "abc");
    printf("10. ");
    res += test("ab cd", "abcd");
    printf("11. ");
    res += test("\t\n123", "123");
    printf("12. ");
    res += test("123", "124");
    printf("13. ");
    res += test("lello", "hello");
    printf("14. ");
    res += test("", "");
    printf("15. ");
    res += test("\0", "\0");
    printf("16. ");
    res += test("hello", "hell");
    printf("17. ");
    res += test("hello", "hell");

    printf("\nResult: %d", res);
    printf(" of 17\n");
    if (res == 17)
        printf("Succes!\n");
    else
        printf("Fail!\n");

    return (0);
}

int     test(char *s1, char *s2)
{
    if (strcmp(s1, s2) == ft_strcmp(s1, s2))
    {
        printf("\tOK\n");
        return (1);
    } else {
        printf("\tKO\n");
        printf("%s %s\n", s1, s2);
        printf("%d\n", strcmp(s1, s2));
        printf("~~~VS~~~\n");
        printf("%d\n", ft_strcmp(s1, s2));
        return (0);
    }
}
