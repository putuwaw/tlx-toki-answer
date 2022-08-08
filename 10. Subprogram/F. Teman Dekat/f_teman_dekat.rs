fn abs(num: i32) -> i32 {
    if num < 0 {
        return num * -1;
    }
    num
}
fn power(base: i32, exp: i32) -> i32 {
    if exp == 0 {
        return 1;
    }
    base * power(base, exp - 1)
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    let n = next_num();
    let d = next_num();
    let (mut min, mut max) = (0, 0);
    let mut t: Vec<Vec<i32>> = vec![vec![0; 2]; n as usize];
    for i in 0..n {
        let mut reader = String::new();
        std::io::stdin().read_line(&mut reader).expect("");
        let mut substr_iter = reader.split_whitespace();
        let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
        t[i as usize][0] = next_num();
        t[i as usize][1] = next_num();
    }
    for i in 0..n - 1 {
        for j in i + 1..n {
            let res = power(abs(t[i as usize][0] - t[j as usize][0]), d)
                + power(abs(t[i as usize][1] - t[j as usize][1]), d);
            if i == 0 && j == 1 {
                min = res;
                max = res;
            } else {
                if res < min {
                    min = res;
                }
                if res > max {
                    max = res;
                }
            }
        }
    }
    println!("{} {}", min, max);
}
