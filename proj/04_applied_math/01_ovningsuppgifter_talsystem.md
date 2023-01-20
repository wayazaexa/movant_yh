### Övningsuppgifter binära och hexadecimala tal


__1. Skriv ner en tabell med 0-15__
Decimalt|Hexadecimalt|Binärt
---|---|---
0|0|0000
1|1|0001
2|2|0010
3|3|0011
4|4|0100
5|5|0101
6|6|0110
7|7|0111
8|8|1000
9|9|1001
10|A|1010
11|B|1011
12|C|1100
13|D|1101
14|E|1110
15|F|1111

__2. Omvandla till decimaltal__

a) $10100_2 = 20$
b) $100100001_2 = 1 + 32 + 256 = 289$
c) $0,101_2 = 0,5 + 0,125 = 0,625$
d) $0,0011_2 = 0,125 + 0,0625 = 0,1875$
e) $1010b = 10$
f) $11110011b = 1 + 2 + 16 + 32 + 64 + 128 \ \ (= 255 - 4 - 8) = 243$

__3. Omvandla till decimaltal__

a) $1A_{16} = 16 + 10 = 26$
b) $0x12 = 16 + 2 = 18$
c) $FFFF_{16} = 15 \cdot 16^3 + 15 \cdot 16^2 + 15 \cdot 16^1 + 15 \cdot 16^0 = 61440 + 3840 + 240 + 15 = 65535$
d) $0xABCDEF = 10 \cdot 16^5 + 11 \cdot 16^4 + 12 \cdot 16^3 + 13 \cdot 16^2 + 14 \cdot 16^1 + 15 \cdot 16^0 = 10485760 + 720896 + 49152 + 3328 + 224 + 15 = 11259375$

__4. Omvandla till binärtal, genom att bestämma vilka positionsvikter som ska ingå i talet__

a) $81 = 64 + 16 + 1 \rightarrow 2^6 + 2^4 + 2^0 = 1010001_2$
b) $200 = 128 + 64 + 8 \rightarrow 2^7 + 2^6 + 2^3 = 11001000_2$
c) $196 = 128 + 64 + 4 \rightarrow 2^7 + 2^6 + 2^2 = 11000100_2$

__5. Omvandla till binärtal, genom successiva divisioner med 2, samma tal som i uppgift 4__

a)
$81 / 2 = 40, rest \ \ 1$
$40 / 2 = 20, rest \ \ 0$
$20 / 2 = 10, rest \ \ 0$
$10 / 2 = 5, rest \ \ 0$
$5 / 2 = 2, rest \ \ 1$
$2 / 2 = 1, rest \ \ 0$
$1 / 2 = 0, rest \ \ 1$
Detta ger att talet är $1010001_2$
b)
$200 / 2 = 100, rest \ \ 0$
$100 / 2 = 50, rest \ \ 0$
$50 / 2 = 25, rest \ \ 0$
$25 / 2 = 12, rest \ \ 1$
$12 / 2 = 6, rest \ \ 0$
$6 / 2 = 3, rest \ \ 0$
$3 / 2 = 1, rest \ \ 1$
$1 / 2 = 0, rest \ \ 1$
Detta ger att talet är $11001000_2$
c)
$$

