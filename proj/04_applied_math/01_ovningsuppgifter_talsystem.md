
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
f) $11110011b = 1 + 2 + 16 + 32 + 64 + 128 \ (= 255 - 4 - 8) = 243$

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
$81 / 2 = 40, rest \ 1$
$40 / 2 = 20, rest \ 0$
$20 / 2 = 10, rest \ 0$
$10 / 2 = 5, rest \ 0$
$5 / 2 = 2, rest \ 1$
$2 / 2 = 1, rest \ 0$
$1 / 2 = 0, rest \ 1$
Detta ger att talet är $1010001_2$
b)
$200 / 2 = 100, rest \ 0$
$100 / 2 = 50, rest \ 0$
$50 / 2 = 25, rest \ 0$
$25 / 2 = 12, rest \ 1$
$12 / 2 = 6, rest \ 0$
$6 / 2 = 3, rest \ 0$
$3 / 2 = 1, rest \ 1$
$1 / 2 = 0, rest \ 1$
Detta ger att talet är $11001000_2$
c)
$$
196 / 2 = 98, rest \ 0 \\
98 / 2 = 49, rest \ 0 \\
49 / 2 = 24, rest \ 1 \\
24 / 2 = 12, rest \ 0 \\
12 / 2 = 6, rest \ 0 \\
6 / 2 = 3, rest \ 0 \\
3 / 2 = 1, rest \ 1 \\
1 / 2 = 0, rest \ 1
$$
Detta ger att talet är $11000100_2$

__6. Omvandla talen i uppgift 2 till hexadecimalt__

a) $10100_2 = 14_{16}$
b) $100100001b = 0x121$
c) $0,101b \ (= 0,1010b) = 0x0,A$
d) $0,0011_2 = 0,3_{16}$
e) $1010b = 0xA$
f) $11110011b = F3$

__7. Omvandla talen i uppgift 3 till binärt__

a) $1A_{16} = 10110_2$
b) $0x12 = 10010b$
c) $FFFF_{16} = 1111 1111 1111 1111b$
d) $0xABCDEF = 1010 1011 1100 1101 1110 1111b$

__8. Omvandla decimalt till 8 bitars binärt via hex__

a) $31 = 0x1F = 0001 1111b$
b) $98 = 0x62 = 0110 0010b$
c) $225 = 0xE1 = 1110 0001b$
d) $255 = 0xFF = 1111 1111b$

__9. Addition av binära tal__

a) $1100b + 1011b = 10111b$
b) $0011 1111b + 1010 0001b = 1110 0000b$

__10. Addition av hexadecimala tal__

a) $0x16 + 0x22 = 0x38$
b) $0xFF + 0x01 = 0x100$

__11. Varför använder man binära tal för datorer?__

För att datorchip är uppbyggda av transistorer som bara kan representera två tal (eller av och på), vilket betyder att binärt är det enda (eller snarare mest grundläggande, alla talbaser som är tvåpotenser fungerar så länge som alla använder samma) sättet en dator _kan_ lagra och räkna tal.

__12. Varför använder man ofta hexadecimala tal i datorsammanhang?__

För att det är enkelt att konvertera binärt till hexadecimalt, och det är mycket mer kompakt eftersom varje siffra kan representera 8 gånger så mycket information.
Dessutom är en byte 8 bitar vilket kan representeras med två hexadecimala tal.

__13. Om en dator lagrar 8 bitar i en variabel__

a) Vad är det största talet som får plats (förutsatt unsigned)? Uttryck i både hex och dec:
$0xFF = 255$
b) Vad händer om en dator adderar två tal som inte får plats?
Overflow (wrap-around), vilket innebär att den eller de mest signifikanta bitarna i resultatet ignoreras och resultatet kommer bli mycket mindre än det borde bli.

__14. En variabel (32-bitars) lagras i minnescellerna 0x100 till 0x103 enligt tabellen nedan. Vad är talet som lagras...__
a) om byte-ordningen som används är Big Endian?
$0x12ABCDEF$
b) om byte-ordningen som används är Little Endian?
$0xEFCDAB12$
|   |   |   |   |   |
|---|---|---|---|---|
Minnesadress|0x100|0x101|0x102|0x103
Data|0x12|0xAB|0xCD|0xEF
