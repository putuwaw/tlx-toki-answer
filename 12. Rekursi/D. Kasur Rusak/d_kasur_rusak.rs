fn palindrome(string: String) -> bool {
    let length = string.len();
    if length == 1 {
        return true;
    } else if length == 2 {
        return string.chars().nth(0).unwrap() == string.chars().nth(1).unwrap();
    } else {
        return string.chars().nth(0).unwrap() == string.chars().nth(length - 1).unwrap()
            && palindrome(string[1..length - 1].to_string());
    }
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    reader = reader.trim().to_string();
    if palindrome(reader) {
        println!("YA");
    } else {
        println!("BUKAN");
    }
}
