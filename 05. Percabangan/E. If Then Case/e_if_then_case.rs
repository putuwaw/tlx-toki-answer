fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let n: i32 = reader.trim().parse().expect("");
    if n > 9999{
        println!("puluhribuan");
    }
    else if n > 999{
        println!("ribuan");
    }
    else if n > 99{
        println!("ratusan");
    }
    else if n > 9{
        println!("puluhan");
    }
    else{
        println!("satuan");
    }
}
