fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut n: i32 = reader.trim().parse().expect("");
    while n % 2 == 0 {
        n /= 2;
    }
    if n == 1 {
        println!("ya");
    } else {
        println!("bukan");
    }
}
