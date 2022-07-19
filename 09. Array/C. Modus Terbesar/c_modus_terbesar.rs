fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    let mut arr: [i32; 1001] = [0; 1001];
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut substr_iter = reader.split_whitespace();
    let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
    for _ in 0..n {
        let num = next_num();
        arr[num as usize] += 1;
    }
    let mut ans = 0;
    for i in 0..1001 {
        if arr[i] >= arr[ans] {
            ans = i;
        }
    }
    println!("{}", ans);
}
