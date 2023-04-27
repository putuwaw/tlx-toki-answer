fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let s = reader.trim().to_string();

    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let k: i32 = reader.trim().parse().expect("");

    for i in s.chars() {
        let a_ascii = 'a' as i32;
        let c = (i as i32 + k - a_ascii) % 26 + a_ascii;
        print!("{}", c as u8 as char)
    }
    println!("");
}
