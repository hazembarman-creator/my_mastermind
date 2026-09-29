My Printf
Welcome to My Printf, a simplified custom implementation of the well‑known C printf function.
This project focuses on understanding formatted output, handling multiple argument types, and replicating core behavior of the standard library function.

🧩 Task
Implement a custom version of printf called my_printf.
Your function should:

Parse a format string

Detect and process format specifiers

Handle different argument types

Produce correct formatted output

Behave consistently across edge cases

The challenge lies in correctly interpreting format specifiers and printing values in the expected format without relying on the standard printf.

📘 Description
my_printf reads a format string and processes each character.
When it encounters a %, it identifies the corresponding format specifier and prints the matching argument.

Your implementation may include support for:

%s — strings

%d — integers

%c — characters

%x — hexadecimal

%o — octal

%u — unsigned integers

The project strengthens your understanding of:

Variadic functions (va_list, va_start, va_arg, va_end)

String parsing

Type handling

Manual output formatting

Low‑level printing using write()

⚙️ Installation
Compile your project using:

Code
gcc -Wall -Wextra -Werror my_printf.c -o my_printf
No external libraries are required.

▶️ Usage
Run your program and pass a format string along with arguments:

Code
./my_printf "Hello %s, number: %d\n" "Hazem" 42
Example:

Code
./my_printf "Char: %c Hex: %x\n" 'A' 255
Your output should match the behavior of the standard printf for the supported specifiers.
This project is an implementation of a simplified version of the printf function, which is commonly used in the C programming language for formatted output. The challenge lies in replicating the behavior of the standard printf, including handling various format specifiers, argument types, and ensuring the output matches the expected format in all edge cases.

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
