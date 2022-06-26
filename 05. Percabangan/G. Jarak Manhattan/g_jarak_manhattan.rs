fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    let mut x1 = next_num();
    let mut y1 = next_num();
    let x2 = next_num();
    let y2 = next_num();
    x1 = x1 - x2;
    y1 = y1 - y2;
    if x1 < 0 {
        x1 = x1 * -1;
    }
    if y1 < 0 {
        y1 = y1 * -1;
    }
    println!("{}", x1 + y1);
}
