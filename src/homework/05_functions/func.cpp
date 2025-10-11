//add include statements
#include "func.h"

//add function code here

double get_gc_content(const string& dna)
{
    int gc_count = 0;


    for (char nucleotide : dna)
    {
        if (nucleotide == 'G' || nucleotide == 'C')
        {
            gc_count++;
        }
    }

    // Handle empty string case to avoid division by zero
    if (dna.length() == 0)
    {
        return 0.0;
    }

    return static_cast<double>(gc_count) / dna.length();
}

string reverse_string(string dna)
{
    string reversed = "";

    for (int i = dna.length() - 1; i >= 0; --i)
    {
        reversed += dna[i];
    }

    return reversed;
}

string get_dna_complement(string dna)
{
    string reversed = reverse_string(dna);

    for (char& nucleotide : reversed)
    {
        switch (nucleotide)
        {
        case 'A':
            nucleotide = 'T';
            break;
        case 'T':
            nucleotide = 'A';
            break;
        case 'C':
            nucleotide = 'G';
            break;
        case 'G':
            nucleotide = 'C';
            break;
        }
    }

    return reversed;
}