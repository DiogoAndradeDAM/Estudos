const { EventEmitter } = require('events')

const event = new EventEmitter()

//Ouvi a emição, mas ele só ouve "saySomething"
event.on('saySomething', message => {
  console.log('Eu ouvi você : ', message)
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