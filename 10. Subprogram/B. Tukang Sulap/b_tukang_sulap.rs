fn swap(arr: &mut Vec<Vec<i32>>, p: u8, x: u32, q: u8, y: u32) {
    let temp: i32 = arr[p as usize][x as usize];
    arr[p as usize][x as usize] = arr[q as usize][y as usize];
    arr[q as usize][y as usize] = temp;
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    let mut arr: Vec<Vec<i32>> = vec![vec![0; 1001]; 1001];
    for i in 0..2 {
        let mut reader = String::new();
        std::io::stdin().read_line(&mut reader).expect("");
        let mut substr_iter = reader.split_whitespace();
        let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
        for j in 0..n {
            arr[i as usize][j as usize] = next_num();
        }
    }
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let t: i32 = reader.trim().parse().expect("");
    for _ in 0..t {
        let mut reader = String::new();
        std::io::stdin().read_line(&mut reader).expect("");
        let mut substr_iter = reader.split_whitespace();
        let mut next_str = || -> String { substr_iter.next().expect("").parse().expect("") };
        let p = next_str();
        let x = next_str();
        let q = next_str();
        let y = next_str();
        let p1 = p.as_bytes()[0] - 65;
        let x1 = x.parse::<u32>().unwrap() - 1;
        let q1 = q.as_bytes()[0] - 65;
        let y1 = y.parse::<u32>().unwrap() - 1;
        swap(&mut arr, p1, x1, q1, y1);
    }
    for i in 0..2 {
        for j in 0..n {
            print!("{}", arr[i as usize][j as usize]);
            if j < n - 1 {
                print!(" ");
            }
        }
        println!("");
    }
}
