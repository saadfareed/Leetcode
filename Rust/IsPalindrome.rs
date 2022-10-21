//Name: Muhammad Yousaf

//Username: yousafsabir

//Approach: function compares the word with its reversed counterpart and returns boolean based on comparison

fn main() {
    let word: String =String::from("abcaba");
    println!("{}", is_palindrome(word))
}

fn is_palindrome(word: String) -> bool {
    word == word.chars().rev().collect::<String>()
}