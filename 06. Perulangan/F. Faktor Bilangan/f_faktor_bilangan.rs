fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    for i in (1..n + 1).rev() {
        if n % i == 0 {
            println!("{}", i);
        }
    }
}
