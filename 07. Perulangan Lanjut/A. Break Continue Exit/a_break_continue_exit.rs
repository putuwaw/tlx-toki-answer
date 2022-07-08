fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    for i in 1..n + 1 {
        if i % 10 == 0 {
            continue;
        } else if i == 42 {
            println!("ERROR");
            break;
        } else {
            println!("{}", i);
        }
    }
}
