fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    for _ in 0..n {
        let mut reader = String::new();
        std::io::stdin().read_line(&mut reader).expect("");
        let num: i32 = reader.trim().parse().expect("");
        let mut is_prime: bool = true;
        if num == 1 {
            is_prime = false;
        } else {
            let mut j: i32;
            j = 2;
            while j * j <= num {
                if num % j == 0 {
                    is_prime = false;
                    break;
                }
                j += 1;
            }
        }
        if is_prime {
            println!("YA");
        } else {
            println!("BUKAN");
        }
    }
}
