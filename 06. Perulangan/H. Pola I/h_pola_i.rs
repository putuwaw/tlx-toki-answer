fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    let n = next_num();
    let k = next_num();
    for i in 1..n + 1 {
        if i % k == 0 {
            print!("*");
        } else {
            print!("{}", i);
        }
        if i != n {
            print!(" ");
        } else {
            print!("\n");
        }
    }
}
