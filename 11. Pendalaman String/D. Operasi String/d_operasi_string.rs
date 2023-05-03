fn main() {
    let mut reader = String::new();
    std::io::stdin().read_line(&mut reader).expect("");
    let mut s1: String = reader.trim().to_string();
    reader.clear();
    std::io::stdin().read_line(&mut reader).expect("");
    let s2: String = reader.trim().to_string();
    reader.clear();
    std::io::stdin().read_line(&mut reader).expect("");
    let s3: String = reader.trim().to_string();
    reader.clear();
    std::io::stdin().read_line(&mut reader).expect("");
    let s4: String = reader.trim().to_string();

    s1 = s1.replace(&s2, "");
    s1.insert_str(s1.find(&s3).unwrap() + s3.len(), &s4);
    println!("{}", s1);
}
