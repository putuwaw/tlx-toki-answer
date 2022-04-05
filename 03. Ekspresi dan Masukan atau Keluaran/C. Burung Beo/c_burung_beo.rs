fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    println!("{}", reader);
}
