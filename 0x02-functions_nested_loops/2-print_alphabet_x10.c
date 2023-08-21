#include <stdio.h>

void print_alphabet_x10()
        
{       
        for (int i; i < 10; i++)
        {
            for (char a = 'a'; a <= z; a++)
            {
                _putchar("%c ", a);
            }
            _putchar("\n");
        }
}
int main()
{
    print_alphabet_x10();
    return (0);
}
