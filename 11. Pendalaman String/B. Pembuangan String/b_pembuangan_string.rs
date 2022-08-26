fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_str = || -> String { substr_iter.next().expect("").parse().expect("") };
    let mut s = next_str();
    let t = next_str();
    while s.contains(&t) {
        s = s.replace(&t, "");
    }
    println!("{}", s);
}
