fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    if n > 0 {
        println!("positif");
    } else if n < 0 {
        println!("negatif");
    } else {
        println!("nol");
    }
}
