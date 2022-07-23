/*
Generic Types
S = state;
T = types;
K = keys;
V = values;
E = elements
*/


//function userState<T extends number|string = string>(){
//function userState<T extends number|string>(){
function userState<T>(){
    let state: T;

    function get(){
        return state;
    }

    function set(newValue: T){
        state = newValue;
    }

    return {get, set};
}

let newState = userState();
newState.set(123);
newState.get();
newState.set("Rodrigo");
newState.get();
