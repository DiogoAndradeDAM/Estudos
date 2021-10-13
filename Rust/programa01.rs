fn main(){
	let lista_name:[3; &str] = ["Diogo", "Andrade", "Moura"];
	cabecario(lista_name[0], lista_name[1], lista_name[2];
	let tupla:(&str, u8, u16) = ("Diogo", 16, 2005);
	println!("{} seus dados são: idade {} e ano de nascimento {}", tupla.0, tupla.1, tupla.2);
}

fn cabecario(fname:&str, mname:&str, lname:&str){
	println!("Seja Bem vindo programador {} {} de {}", fname, mname, lname);
}