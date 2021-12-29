<?php
//Para fazer a requisição temos alguns tipos de formas
/*
include: retorna o arquivo, mas tentará executar mesmo que tenha um erro

require: retorna o arquivo, mas não executará se houver um erro

include_once ou require_once: o que importa é o sufixo '_once' que caso eu repita uma requisição ela não dará erro

A mais adequanda é require_once
*/
require 'doador.php';

$numero = 4;
var_dump(dobrar($numero));
?>