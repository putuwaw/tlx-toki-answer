fn main() {
  let mut reader = String::new();
  std::io::stdin().read_line(&mut reader).expect("");
  let n: i32 = reader.trim().parse().expect("");
  let mut res: i32 = 0;
  let mut reader = String::new();
  std::io::stdin().read_line(&mut reader).expect("");
  let mut substr_iter = reader.split_whitespace();
  let mut next_num = || -> i32 { substr_iter.next().expect("").parse().expect("") };
  for _ in 0..n {
    let b = next_num();
    res += b;
  }
  println!("{}", res);
}
