use std::io;
use std::io::prelude::*;
fn main() {
    let stdin = io::stdin();
    for str in stdin.lock().lines() {
        println!("{}", str.unwrap());
    }
}
