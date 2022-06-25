fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: f64 = reader.trim().parse().expect("");
    if n >= 0.0 {
        if n > n.trunc() {
            println!("{} {}", n.trunc(), n.trunc() + 1.0);
        } else {
            println!("{} {}", n.trunc(), n.trunc());
        }
    } else {
        if n < n.trunc() {
            println!("{} {}", n.trunc() - 1.0, n.trunc());
        } else {
            println!("{} {}", n.trunc(), n.trunc());
        }
    }
}
