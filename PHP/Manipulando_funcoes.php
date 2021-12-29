<?php
//Static salva o valor da variavel
function correr($metros){
  static $total;
  $total += $metros;
  echo "percorreu {$metros}m de $total\n";
}

#correr(20);
#correr(20);

//Está função não altera a variavel $teste porque a $variavel é um clone de teste, para mudar isto coloque um prefixo & na $variavel
function incrementa(&$variavel, $valor){
  $variavel += $valor;
}

$teste = 100;
incrementa($teste, 20);

#var_dump($teste);

//Isto não é muito recomendado porque pode causar confusões


//Funções em variaveis e anonimas
$triplicar = function($num){ return $num*3;}; #Funções anonimas tem ponto e vírgula no final e não precisão ser feitas na mesma linha

echo $triplicar(4);
?>