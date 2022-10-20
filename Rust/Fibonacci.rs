fn main() {
    let number: i32 = 4;
    fibonacci_series(number);
}
fn fibonacci_series(number: i32) {
    let mut sum: i32;
    let mut last: i32 = 0;
    let mut current: i32 = 1;
    for _ in 0..number {
        println!("{}", last);
        sum = last + current;
        last = current;
        current = sum
    }
}