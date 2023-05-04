| :---:   | :---:     | :---:     | :---: 
AND		  |	OR		  |	XOR		  |	NOT
0	0	0 |	0	0	0 |	0	0	0 |	0	1
0	1	0 |	0	1	1 |	0	1	1 |	1	0
1	0	0 |	1	0	1 |	1	0	1 |
1	1	1 |	1	1	1 |	1	1	0 |

x = 5  , 00000101   x   = 5
x << 0 , 00000101	x	= 5
x << 1 , 00001010	x	= 10
x << 1 , 00010100	x	= 20
x << 3 , 10100000	x	= 160
	SHIFT LEFT = MULTIPLY * 2
	
x = 5  , 00000101   x   = 5
x >> 0 , 00000101	x	= 5
x >> 1 , 00000010	x	= 2
x >> 1 , 00000001	x	= 1
x >> 3 , 00000000	x	= 0
	SHIFT RIGHT = DIVIDE / 2

### Bitwise AND (&):

x = 5 , 00000101			x=0xFA , 11111010
x = x&6                     x=x&0x0F
x  00000101 5               x    11111010 0xFA
6  00000110                 0x0F 00001111
x =00000100 4               x    00001010 10

### Bitwise OR (|):

x = 5 , 00000101			x=0xFA , 11111010
x = x|6                     x=x|0x0F
x  00000101 5               x    11111010 0xFA
6  00000110                 0x0F 00001111
x =00000111 7               x    11111111 255

### Bitwise XOR (^):

x = 5 , 00000101			x=0xFA , 11111010
x = x^6                     x=x^0x0F
x  00000101 5               x    11111010 0xFA
6  00000110                 0x0F 00001111
x =00000011 3               x    11110101 245

### Bitwise NOT (~):

x = 5 , 00000101			x=0xFA , 11111010
x = ~x                      x=~x
x  00000101 5               x 11111010 0xFA              
x =11111010 250             x 00000101 5

### How To Set Bit:
(https://imgur.com/rNwqELO)

### How To Clear Bit:
(https://imgur.com/uSmbRok)

### How To Read Bit:
(https://imgur.com/a/OQrf9Dh)

