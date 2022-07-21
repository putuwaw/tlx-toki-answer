fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    let n = next_num();
    let m = next_num();
    let mut arr: [[i32; 101]; 101] = [[0; 101]; 101];
    for i in 0..n {
        let mut reader = String::new();
        std::io::stdin().read_line(&mut reader).expect("");
        let mut substr_iter = reader.split_whitespace();
        let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
        for j in 0..m {
            arr[i as usize][j as usize] = next_num();
        }
    }
    for i in 0..m {
        for j in (0..n).rev() {
            print!("{} ", arr[j as usize][i as usize]);
        }
        println!();
    }
}
