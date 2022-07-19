fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    let (mut a, mut b): (i32, i32) = (0, 0);
    for i in 0..n {
        let num = next_num();
        if i == 0 {
            a = num;
            b = num;
        } else {
            if num > a {
                a = num;
            }
            if num < b {
                b = num;
            }
        }
    }
    println!("{} {}", a, b);
}
