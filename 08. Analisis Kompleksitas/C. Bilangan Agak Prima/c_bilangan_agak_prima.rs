fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    for _ in 0..n {
        let mut reader = String::new();
        std::io::stdin().read_line(&mut reader).expect("");
        let num: i32 = reader.trim().parse().expect("");
        let mut factor: i32 = 0;
        for j in 1..num + 1 {
            if num % j == 0 {
                factor += 1;
            }
            if factor > 4 {
                break;
            }
        }
        if factor <= 4 {
            println!("YA");
        } else {
            println!("BUKAN");
        }
    }
}
