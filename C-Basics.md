# Lab 03 - Task # 3: MARKDOWN DOCUMENTATION  

## TABLE OF VARIOUS DATA TYPES

| Data Type | Size | Description |
| :--- | :--- | :--- |
| **`int`** | 4 bytes | Stores integer values without decimal places. |    
| **`float`** | 4 bytes | Stores single precision floating-point numbers (decimal values). |   
| **`double`** | 8 bytes | Stores double precision floating-point numbers (decimal values). |  
| **`char`** | 1 byte | Stores a single character or ASCII character code. |  
| **`bool`** | 1 byte | Stores Boolean values as true(1) or false(0). |
| **`void`** | 0 bytes | Represent the absence of a value or a function returning nothing. |

----

##
## 2. Format Specifiers

| Format Specifier | Data Type | Example Usage |
| :--- | :--- | :--- |
| **`%d`** | Signed decimal integer | `printf("%d", age);` |
| **`%u`** | Unsigned decimal integer | `printf("%u", count);` |
| **`%o`** | Octal integer | `printf("%o", num);` |
| **`%x`** | Hexadecimal integer (lowercase) | `printf("%x", num);` |
| **`%X`** | Hexadecimal integer (uppercase) | `printf("%X", num);` |
| **`%f`** | Floating-point number | `printf("%f", temperature);` |
| **`%e`** | Exponential notation (Scientific) | `printf("%e", distance);` |
| **`%c`** | Single character | `printf("%c", grade);` |
| **`%s`** | String of characters | `printf("%s", name);` |
| **`%ld`** | Long signed integer | `printf("%ld", population);` |  

----

## INPUT/OUTPUT FUNCTIONS

* **`scanf()`**: Reads and store formatted input from the standard input.
* **`printf()`**: Writes and prints formatted output to the standard output.
* **`getchar()`**: Reads and returns a single character from the input. 
* **`putchar()`**: Writes a single character to the output.
* **`fgets()`**: Reads a line of text or string from input including spaces.
* **`puts()`**: Displays a string of text followed by an automatic newline character (`\n`).

----

## ESCAPE SEQUENCES 

Below are five common escape sequences used in C:

1. **`\n`** (Newline): Moves the cursor to the beginning of the next line.
2. **`\t`** (Horizontal Tab): Inserts a tab space (usually 4 to 8 spaces).
3. **`\\`** (Backslash): Displays a literal backslash character (`\`).
4. **`\"`** (Double Quote): Displays a double quote character inside a string.
5. **`\0`** (Null Character): Marks the end of a string in memory.
   
----

## PRECISION

Precision in c is used to control the decimal places in floating-point numbers.

### Example: 
```c
float pi = 3.14159;
printf("%.2f\n", pi); // Outputs 3.14
printf("%.4f\n", pi); // Outputs 3.1416

 
