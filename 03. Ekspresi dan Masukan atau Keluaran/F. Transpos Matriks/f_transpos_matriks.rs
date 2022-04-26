fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i16 { substr_iter.next().expect("").parse().expect("") };
    let a = next_num();
    let b = next_num();
    let c = next_num();
    let mut reader2 = String::new();
    std::io::stdin().read_line(&mut reader2).expect("");
    let mut substr_iter2 = reader2.split_whitespace();
    let mut next_num2 = || -> i16 { substr_iter2.next().expect("").parse().expect("") };
    let d = next_num2();
    let e = next_num2();
    let f = next_num2();
    let mut reader3 = String::new();
    std::io::stdin().read_line(&mut reader3).expect("");
    let mut substr_iter3 = reader3.split_whitespace();
    let mut next_num3 = || -> i16 { substr_iter3.next().expect("").parse().expect("") };
    let g = next_num3();
    let h = next_num3();
    let i = next_num3();
    println!("{} {} {}\n{} {} {}\n{} {} {}", a, d, g, b, e, h, c, f, i);
}
