fn biner(n: i32) {
    if n == 1 {
        print!("1");
    } else {
        biner(n / 2);
        print!("{}", n % 2);
    }
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    biner(n);
}
