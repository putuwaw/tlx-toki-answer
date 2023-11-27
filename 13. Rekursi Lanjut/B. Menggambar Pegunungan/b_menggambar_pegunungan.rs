fn draw(n: i32) {
    if n == 1 {
        println!("*")
    } else {
        draw(n - 1);
        for _ in 0..n {
            print!("*");
        }
        println!();
        draw(n - 1);
    }
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    draw(n);
}
