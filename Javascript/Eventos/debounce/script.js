/*
  Um evento que dispara múltiplas vezes pode ser um problema para o cumputador do cliente

  Por isso podemos fazer um debounce, que é um suavizador de eventos
*/

let timeout;
window.addEventListener("mousemove", function(e) {
  clearTimeout(timeout)
  timeout = setTimeout(function() {
    console.log(e.x)
  }, 500)
})