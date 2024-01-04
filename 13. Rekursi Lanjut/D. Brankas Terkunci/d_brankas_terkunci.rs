fn draw(n: i32, k: i32, depth: i32, save: &mut Vec<i32>, is_visited: &mut Vec<bool>) {
    if depth >= k - 1 {
        for i in 0..k {
            print!("{} ", save[i as usize] + 1);
        }
        println!();
    } else {
        for i in save[depth as usize] + 1..n {
            if !is_visited[i as usize] {
                is_visited[i as usize] = true;
                save[depth as usize + 1] = i;
                draw(n, k, depth + 1, save, is_visited);
                is_visited[i as usize] = false;
            }
        }
    }
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut input = reader.split_whitespace();

    let n: i32 = input.next().unwrap().parse().unwrap();
    let k: i32 = input.next().unwrap().parse().unwrap();

    let mut save: Vec<i32> = vec![0; 17];
    let mut is_visited: Vec<bool> = vec![false; 17];

    for i in 0..n {
        save[0] = i;
        draw(n, k, 0, &mut save, &mut is_visited)
    }
}
