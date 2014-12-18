<?php
$username = "sympleby_drpl7";
$password = "#tXt94$1DhzE";
$hostname = "localhost";
//$db = "sympleby_drpl7";
$db = "drupal_symple7";
$conn = new mysqli($hostname,$username,$password, $db);
if ($conn->connect_error) {
  die("Database connection failed: ". $conn->connect_error);
}
echo "Connected to localhost<br/>";

$sql = "SELECT u.uid, u.name FROM users u ORDER BY u.uid LIMIT 0, 30";
$result = $conn->query($sql);
if ($result->num_rows > 0 ){
  while ($row = $result->fetch_assoc()) {
    //echo "should work<br/>";
    $id = $row['uid'];
    $name = $row['name'];
    echo "ID: $id, Name: $name<br />";
  }
} else {
  echo "nothing to show";
}

mysqli_close($conn);

?>
