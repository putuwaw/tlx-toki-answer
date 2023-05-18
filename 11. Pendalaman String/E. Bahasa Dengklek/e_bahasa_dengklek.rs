fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let s: String = reader.trim().to_string();
    for c in s.chars() {
        print!("{}", (c as u8 ^ 32) as char);
    }
}
