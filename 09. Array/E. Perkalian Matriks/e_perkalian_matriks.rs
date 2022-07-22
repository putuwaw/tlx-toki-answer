fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    let n = next_num();
    let m = next_num();
    let p = next_num();
    let mut a: [[i32; 101]; 101] = [[0; 101]; 101];
    let mut b: [[i32; 101]; 101] = [[0; 101]; 101];
    let mut c: [[i32; 101]; 101] = [[0; 101]; 101];
    for i in 0..n {
        let mut reader = String::new();
        std::io::stdin().read_line(&mut reader).expect("");
        let mut substr_iter = reader.split_whitespace();
        let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
        for j in 0..m {
            a[i as usize][j as usize] = next_num();
        }
    }
    for i in 0..m {
        let mut reader = String::new();
        std::io::stdin().read_line(&mut reader).expect("");
        let mut substr_iter = reader.split_whitespace();
        let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
        for j in 0..p {
            b[i as usize][j as usize] = next_num();
        }
    }
    for i in 0..n {
        for j in 0..p {
            for k in 0..m {
                c[i as usize][j as usize] += a[i as usize][k as usize] * b[k as usize][j as usize];
            }
            print!("{} ", c[i as usize][j as usize]);
        }
        println!();
    }
}
