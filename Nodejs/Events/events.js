const { EventEmitter } = require('events')

const event = new EventEmitter()
const event2 = new EventEmitter();

//Ouvi a emição, mas ele só ouve "saySomething"
event.on('saySomething', message => {
  console.log('Eu ouvi você : ', message)
})

event2.once("saySomething", message =>{
  console.log(`I see you: ${message}`);
})

/*
//Dispara somente um unica vez
event.once('saySomething', message => {
  console.log('Eu ouvi você : ', message)
})
*/

//Emitindo evento, ele não executa se ninguem ouvi-lo
event.emit('saySomething', "Mayk")
event.emit('saySomething', "Diogo")
event.emit('saySomething', "Diogo")
event2.emit('saySomething', "Ana");
event2.emit('saySomething', "Ana");