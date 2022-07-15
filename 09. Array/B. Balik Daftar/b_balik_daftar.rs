use std::io::prelude::*;
fn main() {
    let stdin = std::io::stdin();
    let mut idx: u32 = 0;
    let mut arr: [i32; 101] = [0; 101];
    for str in stdin.lock().lines() {
        let num: i32 = str.unwrap().parse().unwrap();
        arr[idx as usize] = num;
        idx += 1;
    }
    while idx > 0 {
        idx -= 1;
        println!("{}", arr[idx as usize]);
    }
}
