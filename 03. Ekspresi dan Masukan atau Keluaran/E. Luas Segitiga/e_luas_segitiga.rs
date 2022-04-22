fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> f64 { substr_iter.next().expect("").parse().expect("") };
    let a = next_num();
    let t = next_num();
    let l: f64 = a * t / 2.0;
    println!("{:.2}", l);
}
