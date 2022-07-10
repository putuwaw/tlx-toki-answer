fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    let mut counter: i32 = 0;
    for i in 0..n {
        for _ in 0..i + 1 {
            print!("{}", counter % 10);
            counter += 1;
        }
        println!("");
    }
}
