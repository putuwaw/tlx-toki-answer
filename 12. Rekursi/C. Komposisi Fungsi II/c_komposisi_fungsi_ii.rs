fn fx(a: i32, b: i32, k: i32, x: i32) -> i32 {
    if k == 1 {
        return (a * x + b).abs();
    }
    return (a * fx(a, b, k - 1, x) + b).abs();
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    let a = next_num();
    let b = next_num();
    let k = next_num();
    let x = next_num();
    println!("{}", fx(a, b, k, x));
}
