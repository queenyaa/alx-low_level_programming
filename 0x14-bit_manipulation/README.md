README.md file that provides an overview of tasks within the repository and how to compile and use the functions:

```
# Low-Level Programming - Bit Manipulation

This repository contains C functions that demonstrate various bit manipulation techniques. These functions are part of a low-level programming project to help understand bitwise operations and endianness.

## Tasks

1. `binary_to_uint`: Convert a binary string to an unsigned int.
2. `print_binary`: Print the binary representation of an unsigned long int.
3. `get_bit`: Get the value of a bit at a given index.
4. `set_bit`: Set the value of a bit to 1 at a given index.
5. `clear_bit`: Set the value of a bit to 0 at a given index.
6. `flip_bits`: Return the number of bits needed to flip to get from one number to another.
7. `get_endianness`: Check the endianness of the system.

## How to Use

1. Clone this repository to your local machine.
2. Compile the C files using the provided Makefile or the following options:
   ```
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o bit_manipulation
   ```
   Make sure to use a Linux environment with gcc and the allowed editors (vi, vim, emacs) for proper compilation.
3. Run the executable `bit_manipulation` to see the results of the functions.

## Examples

### Example 1 - `binary_to_uint`

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    unsigned int result = binary_to_uint("110101");
    printf("Result: %u\n", result); /* Output: Result: 53*/
    return 0;
}
```

### Example 2 - `print_binary`

```c
#include "main.h"

int main(void)
{
    unsigned long int number = 143;
    print_binary(number); /* Output: 10001111*/
    _putchar('\n');
    return 0;
}
```

### Example 3 - `get_bit`

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    unsigned long int number = 107;
    int bit_value = get_bit(number, 2);
    printf("Bit at index 2: %d\n", bit_value); /* Output: Bit at index 2: 1*/
    return 0;
}
```

### Example 4 - `set_bit`

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    unsigned long int number = 178;
    int index = 3;
    set_bit(&number, index);
    printf("New number: %lu\n", number); /* Output: New number: 186*/
    return 0;
}
```

### Example 5 - `clear_bit`

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    unsigned long int number = 203;
    int index = 5;
    clear_bit(&number, index);
    printf("New number: %lu\n", number); /* Output: New number: 171*/
    return 0;
}
```

### Example 6 - `flip_bits`

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    unsigned long int number1 = 45;
    unsigned long int number2 = 90;
    unsigned int flipped_bits = flip_bits(number1, number2);
    printf("Number of flipped bits: %u\n", flipped_bits); /* Output: Number of flipped bits: 5*/
    return 0;
}
```

### Example 7 - `get_endianness`

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    int endian = get_endianness();
    if (endian)
        printf("System is little endian.\n");
    else
        printf("System is big endian.\n");
    return 0;
}
```

## Requirements

- GCC compiler (or compatible) with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Linux environment.
- Allowed editors: vi, vim, emacs.

## Limitations

- No use of standard library functions like `printf`, `puts`, `calloc`, `realloc`, etc.
- No use of arrays or malloc.
- No use of `%` or `/` operators.

## Author

https://github.com/queenyaa


The README.md file includes an overview of the tasks, examples of how to use the functions, requirements, limitations, and author information
