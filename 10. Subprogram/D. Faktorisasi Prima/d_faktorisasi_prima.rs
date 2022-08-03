fn is_factor(num: i32, x: i32) -> bool {
    if num % x == 0 {
        true
    } else {
        false
    }
}

fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut n: i32 = reader.trim().parse().expect("");
    let (mut i, mut pos): (i32, i32) = (2, 0);
    while n > 1 {
        let mut power: i32 = 0;
        if is_factor(n, i) {
            pos += 1;
            while n % i == 0 {
                n /= i;
                power += 1;
            }
            if pos > 1 {
                print!(" x ");
            }
            print!("{}", i);
            if power > 1 {
                print!("^{}", power);
            }
        }
        i += 1;
    }
}
