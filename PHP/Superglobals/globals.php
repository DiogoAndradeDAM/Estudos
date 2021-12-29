<?PHP
//$GLOBALS é um superglobals que deixa um variavel local em globals

function teste(){
  $GLOBALS['num'] = 2;
}

teste();
echo $num;
?>