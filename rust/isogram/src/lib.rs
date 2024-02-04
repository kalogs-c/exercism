use std::collections::HashSet;

pub fn check(candidate: &str) -> bool {
    let unique_chars: HashSet<char> = candidate
        .chars()
        .filter(|c| c.is_alphabetic())
        .map(|c| c.to_ascii_lowercase())
        .collect();

    unique_chars.len() == candidate.replace("-", "").replace(" ", "").len()
}
