<?php
 //Constantes são variaveis que possuem um valor que não pode ser mudado
 //Declaração de uma constantes
 define('Language', "PT-BR");

 //Utilizando
 var_dump(Language);

 //Constantes internas da linguagem:
 var_dump(__FILE__); # Onde está o arquivo executado
 var_dump(__LINE__); # Linha do arquivo. Neste caso 11
?>