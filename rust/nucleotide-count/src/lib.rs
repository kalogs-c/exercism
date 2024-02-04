use std::collections::HashMap;

pub fn count(nucleotide: char, dna: &str) -> Result<usize, char> {
    if !matches!(nucleotide, 'A' | 'C' | 'G' | 'T') {
        return Err(nucleotide);
    }

    let incorrect_nucleotide = dna.chars().find(|c| !matches!(c, 'A' | 'C' | 'G' | 'T'));

    match incorrect_nucleotide {
        Some(n) => Err(n),
        None => Ok(dna.chars().filter(|c| *c == nucleotide).count()),
    }
}

pub fn nucleotide_counts(dna: &str) -> Result<HashMap<char, usize>, char> {
    let nucleotides = ['A', 'C', 'G', 'T'];

    nucleotides
        .iter()
        .map(|&nucleotide| count(nucleotide, dna).map(|times| (nucleotide, times)))
        .collect()
}
