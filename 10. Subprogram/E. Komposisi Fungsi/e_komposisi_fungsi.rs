fn fx(a: i32, b: i32, x: i32) -> i32 {
    let res = a * x + b;
    return res.abs();
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    let a = next_num();
    let b = next_num();
    let k: i32 = next_num();
    let mut x: i32 = next_num();
    for _ in 0..k {
        x = fx(a, b, x);
    }
    println!("{}", x);
}
