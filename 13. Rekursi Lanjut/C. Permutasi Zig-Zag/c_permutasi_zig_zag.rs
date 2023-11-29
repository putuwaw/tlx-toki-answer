fn write(n: i32, depth: i32, save: &mut Vec<i32>, is_visited: &mut Vec<bool>) {
    if depth > n {
        let mut is_zig_zag: bool = true;
        if n >= 3 {
            for i in 2..n {
                let i: usize = i as usize;
                let h = save[i] > save[i - 1] && save[i] > save[i + 1];
                let l = save[i] < save[i - 1] && save[i] < save[i + 1];
                if !(h || l) {
                    is_zig_zag = false;
                    break;
                }
            }
        }
        if n < 3 || is_zig_zag {
            for i in 1..n + 1 {
                print!("{}", save[i as usize]);
            }
            println!();
        }
    } else {
        for i in 1..n + 1 {
            if !is_visited[i as usize] {
                is_visited[i as usize] = true;
                save[depth as usize] = i;
                write(n, depth + 1, save, is_visited);
                is_visited[i as usize] = false;
            }
        }
    }
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    let mut save: Vec<i32> = vec![0; 17];
    let mut is_visited: Vec<bool> = vec![false; 17];
    write(n, 1, &mut save, &mut is_visited);
}
