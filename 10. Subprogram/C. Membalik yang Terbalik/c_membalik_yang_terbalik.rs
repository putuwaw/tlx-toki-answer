fn reverse(mut x: i32) -> i32 {
    let mut rev: i32 = 0;
    while x > 0 {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    return rev;
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    let a = next_num();
    let b = next_num();
    println!("{}", reverse(reverse(a) + reverse(b)));
}
