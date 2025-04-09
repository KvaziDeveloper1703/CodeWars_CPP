/*
Given a DNA strand, return its complementary strand based on the pairing rules:
+ "A" → "T"
+ "C" → "G"

Examples:
Input: "ATTGC"
Output: "TAACG"

Input: "GTAT"
Output: "CATA"

Дана цепь ДНК. Верните комплементарную цепь по правилам:
+ "A" → "T"
+ "C" → "G"

Примеры:

Ввод: "ATTGC"
Вывод: "TAACG"

Ввод: "GTAT"
Вывод: "CATA"
*/

#include <iostream>
using namespace std;

string dna_complement(const string& dna) {
    string complement = "";
    for (char nucleotide : dna) {
        switch (nucleotide) {
            case 'A': 
                complement += 'T'; 
                break;
            case 'T': 
                complement += 'A'; 
                break;
            case 'C': 
                complement += 'G'; 
                break;
            case 'G': 
                complement += 'C'; 
                break;
            default: 
                break;
        }
    }
    return complement;
}

int main() {
    string input = "ATTGC";
    cout << "Complementary DNA strand: " << dna_complement(input) << endl;
    return 0;
}