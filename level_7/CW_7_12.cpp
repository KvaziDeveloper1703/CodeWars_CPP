/*
Given a DNA strand (a string), return its complementary strand based on the pairing rules:
+ "A" → "T"
+ "C" → "G"

The input is never empty.

Example:
"ATTGC" → "TAACG"  
"GTAT"  → "CATA"  

Дана цепь ДНК (строка). Верните комплементарную цепь по правилам:
+ "A" → "T"
+ "C" → "G"

Гарантируется, что входные данные не пустые.

Пример:
"ATTGC" → "TAACG"  
"GTAT"  → "CATA"  
*/

#include <iostream>
using namespace std;

string dna_complement(const string& dna) {
    string complement = "";
    for (char nucleotide : dna) {
        switch (nucleotide) {
            case 'A': complement += 'T'; break;
            case 'T': complement += 'A'; break;
            case 'C': complement += 'G'; break;
            case 'G': complement += 'C'; break;
            default: break;
        }
    }
    return complement;
}

int main() {
    string input = "ATTGC";
    cout << "Complementary DNA strand: " << dna_complement(input) << endl;
    return 0;
}