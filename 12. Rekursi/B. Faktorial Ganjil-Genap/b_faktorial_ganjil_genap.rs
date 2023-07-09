fn factorial_gg(n: i32) -> i32 {
    if n == 1 {
        return 1;
    } else if n % 2 == 0 {
        return n / 2 * factorial_gg(n - 1);
    } else {
        return n * factorial_gg(n - 1);
    }
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    println!("{}", factorial_gg(n));
}
