struct Person{
    age: u8,
    name: String,
    height: f32,
}

impl Person{
    fn new(age: u8, name: String, height: f32)-> Self{
        Person {
            age,
            name,
            height,
        }
    }
    
    fn say_my_name(&self)-> &String{
        &self.name
    }
    
    fn my_name_length(&self)-> usize{
        self.name.len()
    }
}

fn main(){
    let diogo = Person::new(17, String::from("Diogo"), 1.70);
    
    let names = [
    Person{
        name: String::from(&diogo.name),
        ..diogo
    }];
    
    println!("My name is {}", diogo.say_my_name());
    println!("My name have {} letters", diogo.my_name_length());
    
    println!("\nMy datas in array is: \nName: {}\nAge: {}\nHeight: {}",
    names[0].say_my_name(), names[0].age, names[0].height);
}