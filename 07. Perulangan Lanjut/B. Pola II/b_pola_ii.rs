fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    for i in 0..n {
        for j in 0..n {
            if j < n - i - 1 {
                print!(" ");
            } else {
                print!("*");
            }
        }
        println!("");
    }
}
