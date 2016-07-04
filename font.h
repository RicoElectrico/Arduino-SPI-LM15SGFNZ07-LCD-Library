const unsigned char font[576] = {
	2, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,		// Sp
	1, 0b11111010, 0b00000000, 0b00000000, 0b00000000, 0b00000000,		// !
	3, 0b11100000, 0b00000000, 0b11100000, 0b00000000, 0b00000000,		// "
	5, 0b00101000, 0b11111110, 0b00101000, 0b11111110, 0b00101000,		// #
	5, 0b00100100, 0b01010100, 0b11111110, 0b01010100, 0b01001000,		// $
	5, 0b11000110, 0b11001000, 0b00010000, 0b00100110, 0b11000110,		// %
	5, 0b01101100, 0b10010010, 0b01101010, 0b00000100, 0b00001010,		// &
	1, 0b11100000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,		// '
	2, 0b01111100, 0b10000010, 0b00000000, 0b00000000, 0b00000000,		// (
	2, 0b10000010, 0b01111100, 0b00000000, 0b00000000, 0b00000000,		// )
	5, 0b00101000, 0b00010000, 0b01111100, 0b00010000, 0b00101000,		// *
	5, 0b00010000, 0b00010000, 0b01111100, 0b00010000, 0b00010000,		// +
	2, 0b00000010, 0b00000100, 0b00000000, 0b00000000, 0b00000000,		// ,
	5, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00010000,		// -
	1, 0b00000010, 0b00000000, 0b00000000, 0b00000000, 0b00000000,		// .
	5, 0b00000110, 0b00001000, 0b00010000, 0b00100000, 0b11000000,		// /
	5, 0b01111100, 0b10001010, 0b10010010, 0b10100010, 0b01111100,		// 0
	3, 0b01000010, 0b11111110, 0b00000010, 0b00000000, 0b00000000,		// 1
	5, 0b01000010, 0b10000110, 0b10001010, 0b10010010, 0b01100010,		// 2
	5, 0b10000100, 0b10000010, 0b10100010, 0b11010010, 0b10001100,		// 3
	5, 0b00011000, 0b00101000, 0b01001000, 0b11111110, 0b00001000,		// 4
	5, 0b11100100, 0b10100010, 0b10100010, 0b10100010, 0b10011100,		// 5
	5, 0b00111100, 0b01010010, 0b10010010, 0b10010010, 0b00001100,		// 6
	5, 0b10000000, 0b10001110, 0b10010000, 0b10100000, 0b11000000,		// 7
	5, 0b01101100, 0b10010010, 0b10010010, 0b10010010, 0b01101100,		// 8
	5, 0b01100000, 0b10010010, 0b10010010, 0b10010100, 0b01111000,		// 9
	1, 0b00101000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,		// :
	2, 0b00000010, 0b00100100, 0b00000000, 0b00000000, 0b00000000,		// ;
	4, 0b00010000, 0b00101000, 0b01000100, 0b10000010, 0b00000000,		// <
	5, 0b00101000, 0b00101000, 0b00101000, 0b00101000, 0b00101000,		// =
	4, 0b10000010, 0b01000100, 0b00101000, 0b00010000, 0b00000000,		// >
	5, 0b01000000, 0b10000000, 0b10001010, 0b10010000, 0b01100000,		// ?
	5, 0b01111100, 0b10000010, 0b10111010, 0b10101010, 0b01111000,		// @
	5, 0b01111110, 0b10010000, 0b10010000, 0b10010000, 0b01111110,		// A
	5, 0b11111110, 0b10010010, 0b10010010, 0b10010010, 0b01101100,		// B
	5, 0b01111100, 0b10000010, 0b10000010, 0b10000010, 0b01000100,		// C
	5, 0b11111110, 0b10000010, 0b10000010, 0b10000010, 0b01111100,		// D
	5, 0b11111110, 0b10010010, 0b10010010, 0b10010010, 0b10000010,		// E
	5, 0b11111110, 0b10010000, 0b10010000, 0b10010000, 0b10000000,		// F
	5, 0b01111100, 0b10000010, 0b10010010, 0b10010010, 0b01011110,		// G
	5, 0b11111110, 0b00010000, 0b00010000, 0b00010000, 0b11111110,		// H
	3, 0b10000010, 0b11111110, 0b10000010, 0b00000000, 0b00000000,		// I
	5, 0b00000100, 0b00000010, 0b10000010, 0b11111100, 0b10000000,		// J
	5, 0b11111110, 0b00010000, 0b00101000, 0b01000100, 0b10000010,		// K
	4, 0b11111110, 0b00000010, 0b00000010, 0b00000010, 0b00000000,		// L
	5, 0b11111110, 0b01000000, 0b00110000, 0b01000000, 0b11111110,		// M
	5, 0b11111110, 0b00100000, 0b00010000, 0b00001000, 0b11111110,		// N
	5, 0b01111100, 0b10000010, 0b10000010, 0b10000010, 0b01111100,		// O
	5, 0b11111110, 0b10010000, 0b10010000, 0b10010000, 0b01100000,		// P
	5, 0b01111100, 0b10000010, 0b10001010, 0b10000100, 0b01111010,		// Q
	5, 0b11111110, 0b10010000, 0b10011000, 0b10010100, 0b01100010,		// R
	5, 0b01100010, 0b10010010, 0b10010010, 0b10010010, 0b10001100,		// S
	5, 0b10000000, 0b10000000, 0b11111110, 0b10000000, 0b10000000,		// T
	5, 0b11111100, 0b00000010, 0b00000010, 0b00000010, 0b11111100,		// U
	5, 0b11111000, 0b00000100, 0b00000010, 0b00000100, 0b11111000,		// V
	5, 0b11111100, 0b00000010, 0b00001100, 0b00000010, 0b11111100,		// W
	5, 0b11000110, 0b00101000, 0b00010000, 0b00101000, 0b11000110,		// X
	5, 0b11100000, 0b00010000, 0b00001110, 0b00010000, 0b11100000,		// Y
	5, 0b10000110, 0b10001010, 0b10010010, 0b10100010, 0b11000010,		// Z
	2, 0b11111110, 0b10000010, 0b00000000, 0b00000000, 0b00000000,		// [
	5, 0b11000000, 0b00100000, 0b00010000, 0b00001000, 0b00000110,		// \
	1, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,		// WTF!?
	2, 0b10000010, 0b11111110, 0b00000000, 0b00000000, 0b00000000,		// ]
	3, 0b01000000, 0b10000000, 0b01000000, 0b00000000, 0b00000000,		// ^
	5, 0b00000010, 0b00000010, 0b00000010, 0b00000010, 0b00000010,		// _
	2, 0b10000000, 0b01000000, 0b00000000, 0b00000000, 0b00000000,		// `
	4, 0b00011100, 0b00100010, 0b00100100, 0b00111110, 0b00000000,		// a
	4, 0b11111110, 0b00100100, 0b00100010, 0b00011100, 0b00000000,		// b
	4, 0b00011100, 0b00100010, 0b00100010, 0b00010100, 0b00000000,		// c
	4, 0b00011100, 0b00100010, 0b00100100, 0b11111110, 0b00000000,		// d
	4, 0b00011100, 0b00101010, 0b00101010, 0b00010000, 0b00000000,		// e
	4, 0b01111110, 0b10010000, 0b10000000, 0b01000000, 0b00000000,		// f
	4, 0b01100100, 0b10010010, 0b01010010, 0b11111100, 0b00000000,		// g
	4, 0b11111110, 0b00010000, 0b00100000, 0b00011110, 0b00000000,		// h
	1, 0b10111110, 0b00000000, 0b00000000, 0b00000000, 0b00000000,		// i
	3, 0b00000010, 0b00000010, 0b10111100, 0b00000000, 0b00000000,		// j
	4, 0b11111110, 0b00001000, 0b00010100, 0b00100010, 0b00000000,		// k
	2, 0b11111100, 0b00000010, 0b00000000, 0b00000000, 0b00000000,		// l
	5, 0b00111110, 0b00100000, 0b00011000, 0b00100000, 0b00011110,		// m
	4, 0b00111110, 0b00100000, 0b00100000, 0b00011110, 0b00000000,		// n
	4, 0b00011100, 0b00100010, 0b00100010, 0b00011100, 0b00000000,		// o
	4, 0b11111110, 0b01010000, 0b10010000, 0b01100000, 0b00000000,		// p
	4, 0b01100000, 0b10010000, 0b01010000, 0b11111110, 0b00000000,		// q
	4, 0b00111110, 0b00010000, 0b00100000, 0b00010000, 0b00000000,		// r
	4, 0b00010010, 0b00101010, 0b00101010, 0b00100100, 0b00000000,		// s
	4, 0b11111100, 0b00100010, 0b00100010, 0b00000100, 0b00000000,		// t
	4, 0b00111100, 0b00000010, 0b00000010, 0b00111100, 0b00000000,		// u
	5, 0b00111000, 0b00000100, 0b00000010, 0b00000100, 0b00111000,		// v
	5, 0b00111100, 0b00000010, 0b00001100, 0b00000010, 0b00111100,		// w
	5, 0b00100010, 0b00010100, 0b00001000, 0b00010100, 0b00100010,		// x
	4, 0b11100100, 0b00010010, 0b00100010, 0b11111100, 0b00000000,		// y
	4, 0b00100110, 0b00101010, 0b00101010, 0b00110010, 0b00000000,		// z
	3, 0b00010000, 0b01101100, 0b10000010, 0b00000000, 0b00000000,		// {
	1, 0b11111110, 0b00000000, 0b00000000, 0b00000000, 0b00000000,		// |
	3, 0b10000010, 0b01101100, 0b00010000, 0b00000000, 0b00000000,		// }
	4, 0b01000000, 0b10000000, 0b01000000, 0b10000000, 0b00000000,		// ~
	5, 0b10101010, 0b01010100, 0b10101010, 0b01010100, 0b10101010		// Block
};