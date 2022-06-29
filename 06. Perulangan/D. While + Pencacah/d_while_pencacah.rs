use std::io;
use std::io::prelude::*;
fn main() {
    let stdin = io::stdin();
    let mut res: i32 = 0;
    for str in stdin.lock().lines() {
        let num: i32 = str.unwrap().parse().unwrap();
        res += num;
    }
    println!("{}", res);
}
