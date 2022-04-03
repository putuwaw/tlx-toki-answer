fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> usize { substr_iter.next().expect("").parse().expect("") };
    let a = next_num();
    let b = next_num();
    println!("{}", a + b);
}
