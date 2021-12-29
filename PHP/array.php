<?php
$list_header = ['Name', 'Age', 'Sex', 'Length'];
$list = array('Diogo', 16, 'M', 1.72);

for ($i = 0; $i < count($list_header); $i++){
  #echo "$list_header[$i]: $list[$i]  /  ";
}

//Referenciando valores em arrays com chaves
$names = ["fname"=>"Diogo", "mname"=>"Andrade", "lname"=>"Moura"];
#echo $names["fname"];
foreach($names as $x_key => $x_value){ //Faça isto para poder ter os valores e as chaves do array
  #echo "A chaves do array: $x_key / O valor desta chave: $x_value  /  ";
}

$matriz = [
  array('Diogo', 16, 'M'), 
  array('Ziza', 50, 'F'), 
  array('Douglas', 23, 'M')
];

#echo 'Name: ' . $matriz[1][0] . '  Age: ' , $matriz[1][1] . '  Sex: ' . $matriz[1][2];


//Organizando Arrays
/*
sort () - classifica as matrizes em ordem crescente
rsort () - classifica as matrizes em ordem decrescente
asort () - classifica as matrizes associativas em ordem crescente, de acordo com o valor
ksort () - classifica as matrizes associativas em ordem crescente, de acordo com a chave
arsort () - classifica as matrizes associativas em ordem decrescente, de acordo com o valor
krsort () - classifica as matrizes associativas em ordem decrescente, de acordo com a chave
*/
$number = ['first'=>7, 'second'=>5, 'thirt'=>3, 'fourt'=>8, 'fift'=>12];
$strings = ['casa', 'maleta', 'celular', 'armario', 'livros'];

krsort($number);
arsort($strings);

foreach($strings as $item){
  echo "$item  /  ";
}
?>