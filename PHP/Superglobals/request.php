<?php
//$_REQUEST Coleta informações do HTML
//Vá pro HTDocs para executar o arquivo
?>

<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Teste de Request</title>
</head>
<body>
  <form method="post" action="<?php echo $_SERVER['PHP_SELF']?>">
    <label for="names">Name:</label>
    <input type="text" name="name" id="names">
    <input type="submit" value="Enviar">
  </form>

  <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
      // Coleta valor do elemento input
      $name = $_REQUEST['fname'];
      if (empty($name)) {
        echo "Name is empty";
      } else {
        echo $name;
      }
    }
  ?>
</body>
</html>