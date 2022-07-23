//And interfaces
type idType = string|number|undefined;

//let userId: string|number|undefined;
	let userId: idType;


//Insertion Types
//Diz que o tipo pode ser este (Utilizado em API)
type UserResponse = {
    ui: number;
    name: string;
    avatar: string;
}

let userResponse = {} as UserResponse;

//Objectos types
type Point = {
    x: number;
    y: number;
}

function printCoord(point: Point){
    console.log("O eixo x é: "+point.x);
    console.log("O eixo y é: "+point.y);
}

printCoord({x: 100, y: 200});

//Optionals propertys
type Point = {
    x: number;
    y?: number;
}

let ponto: Point = {
    x: 10

//Type Intesection
type User = {
    id: number;
    name: string;
};

type Char = {
    nickname: string;
    level: number;
}

//type PlayerInfo = User & {/.../}
//interface IX extends IUser & IChar {/.../}
type PlayerInfo = User & Char;
let info: PlayerInfo = {
    id: 1,
    name: "Diogo",
    nickname: "DAM",
    level: 1
}
    


