#ifndef O3K_ASCII_H
#define O3K_ASCII_H

// each string is less than or equal to 25 characters
// so we are allocating an array of c-strings of length 26 (because null)
char ascii_legend[][26] = {
"    0   1    2 3 4 5 6 7",
"------------------------"
};

char ascii_chart[16][9][4] = {
{"0:", "\\0", "DLE", " ", "0", "@", "P", "`", "p"},
{"1:", "SOH", "DC1", "!", "1", "A", "Q", "a", "q"},
{"2:", "STX", "DC2", "\"","2", "B", "R", "b", "r"},
{"3:", "ETX", "DC3", "#", "3", "C", "S", "c", "s"},
{"4:", "EOT", "DC4", "$", "4", "D", "T", "d", "t"},
{"5:", "ENQ", "NAK", "%", "5", "E", "U", "e", "u"},
{"6:", "ACK", "SYN", "&", "6", "F", "V", "f", "v"},
{"7:", "\\a", "ETB", "'", "7", "G", "W", "g", "w"},
{"8:", "\\b", "CAN", "(", "8", "H", "X", "h", "x"},
{"9:", "\\t", "EM", ")", "9", "I", "Y", "i", "y"},
{"A:", "\\n", "SUB", "*", ":", "J", "Z", "j", "z"},
{"B:", "\\v", "ESC", "+", ";", "K", "[", "k", "{"},
{"C:", "\\f", "FS", ", ", "<", "L", "\\", "l", "|"},
{"D:", "\\r", "GS", "-", "=", "M", "]", "m", "}"},
{"E:", "SO", "RS", ".", ">", "N", "^", "n", "~"},
{"F:", "SI", "US", "/", "?", "O", "_", "o", "DEL"}
};

// char ascii_chart_old[][26] = {
// "0:  \\0  DLE    0 @ P ` p",
// "1:  SOH DC1  ! 1 A Q a q",
// "2:  STX DC2  \" 2 B R b r",
// "3:  ETX DC3  # 3 C S c s",
// "4:  EOT DC4  $ 4 D T d t",
// "5:  ENQ NAK  % 5 E U e u",
// "6:  ACK SYN  & 6 F V f v",
// "7:  \\a  ETB  ' 7 G W g w",
// "8:  \\b  CAN  ( 8 H X h x",
// "9:  \\t  EM   ) 9 I Y i y",
// "A:  \\n  SUB  * : J Z j z",
// "B:  \\v  ESC  + ; K [ k {",
// "C:  \\f  FS   , < L \\ l |",
// "D:  \\r  GS   - = M ] m }",
// "E:  SO  RS   . > N ^ n ~",
// "F:  SI  US   / ? O _ o DEL"
// };

#define ASCII_CHART_LENGTH 16
#define ASCII_LEGEND_LENGTH 2

#endif //O3K_ASCII_H
