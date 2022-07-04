fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n = reader.trim().parse().expect("");
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut a = 0;
    let mut b = 0;
    let v: Vec<i32> = reader
        .trim()
        .split(" ")
        .map(|x| x.parse::<i32>().expect(""))
        .collect();
    for i in 0..n {
        if i == 0 {
            a = v[i];
            b = v[i];
        } else {
            if v[i] > a {
                a = v[i];
            }
            if v[i] < b {
                b = v[i];
            }
        }
    }
    println!("{} {}", a, b);
}
