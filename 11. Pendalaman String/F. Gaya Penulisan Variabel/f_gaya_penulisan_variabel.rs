fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let s: String = reader.trim().to_string();
    let mut is_caps = false;
    for c in s.chars() {
        if is_caps {
            print!("{}", (c as u8 ^ 32) as char);
            is_caps = false;
        } else if c.is_uppercase() {
            print!("_{}", (c as u8 ^ 32) as char);
        } else if c == '_' {
            is_caps = true;
        } else {
            print!("{}", c);
        }
    }
    println!();
}
