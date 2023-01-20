//  character set --> set of characters supported by any programming language
// computer system work on binary system
// we define some set of numbers as characters, for every character we define numeric value
// there are some codes defined for english alphabet --> ASCII code or American Standard Code for Information Interchange
// this code are given by American National Standards Institute and it is ISO standard
// for other languages, the codes are defined and those are useful standard codes are called UNICODE

// ASCII --> only for english language  (0 - 127) (7-bits)
// stored in 1 byte in computer memory
// A - 65       |  a - 97      |  0 - 48
// B - 66       |  b - 98      |  1 - 49
// ........
// Z - 90       |  z - 122     |  9 - 57
// enter - 10  |  space - 13  | esc - 27

// UNICODES --> represented in hexadeciaml
// stored in 2 bytes (16-bits) (4 x 4 bits)

// it takes 1 bytes
// single quote and only one alphabet
// in memory ascii code value is stored
// char temp;
// temp = 'A';
// printf("%c",temp);

// array of characters
// char x[] = {'A', 'B', '65'};

// char x[5] = {'A', 'B', '65'};
// remaining are stored with '0'

// string --> set of characters
// array of characters is also string
// char x[10] = {'P','R','A','K','H','A','R'};
// remaining stored with '0' but for termination 8th value,
// after the name stored as "\0" or Null symbol or End of string character or String delimiter or String terminator
// so we to defined it as
// char x[] = {'P','R','A','T','H','A','M','\0'};
// '\0' takes space

// we can also write it as
// char x[] = "PRAKHAR";
// '\0'automatically added

// char *x = "PRAKHAR";
// created in heap

// to print entire string
// printf("%s",x);

// to store string("\0" not needed)
// scanf("%s", &x);

// we can also use "gets" to read words until we hit enter
// gets(&name);