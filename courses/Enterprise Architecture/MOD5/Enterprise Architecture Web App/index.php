<!DOCTYPE html>
<html>
    <head>
    <title>Registration Form</title>
    <!-- Bootstrap Reference Links  -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
    <!-- End of Bootstrap References -->
    <!--Bootstrap 4 -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">
    <script src="https://code.jquery.com/jquery-3.2.1.slim.min.js" integrity="sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.12.9/umd/popper.min.js" integrity="sha384-ApNbgh9B+Y1QKtv3Rn7W3mgPxhU9K/ScQsAP7hUibX39j7fakFPskvXusvfa0b4Q" crossorigin="anonymous"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js" integrity="sha384-JZR6Spejh4U02d8jOt6vLEHfe/JQGiRRSQQxSfFWpi1MquVdAyjUar5+76PVCmYl" crossorigin="anonymous"></script>
    <!-- End of Bootstrap References -->
    <!--End of Head Section HTML-->
    </head>

<!--Web App body-->
<body>
<div class="container">
<div id="DivHeader" class="row">
<div id="Div1" class="  col-sm d-flex flex-column">
      <div class="font-weight-bold card-header">
      <h1 class="card-title">Rasmussen Registration Form</h1>
      <p class="card-subtitle mb-2 text-muted">Fill in your name and telephone, then click <strong>Submit</strong> to register.</p>
      </div>
<!-- FORM SUBMIT POST -->
<h1>Register New User</h1>
<!--Refresh page without formdata-->
<a href="https://enterprisearchitecturewebapp.azurewebsites.net/">
<button class="btn btn-warning btn-lg" type="button" id="reload" value="">Reload the browser!</button></a>
<br>
<!--Form 1-->
 <form class=" py-2 px-2 card" method="post" action="index.php" enctype="multipart/form-data" >
       FIRST_NAME  <input class="py-3" type="text" name="first_name" id="first_name"/></br>
       LAST_NAME <input class="py-3" type="text" name="last_name" id="last_name"/></br>
	     TELEPHONE <input class="py-3" type="text" name="telephone" id="telephone"/></br>
       <input class="btn btn-success btn-lg btn-block" type="submit" id="submit1" value="Submit Student" />
 </form>

<hr>
 <!-- FORM UPDATE PUT  -->
 <h1>Update User</h1>
 <form class=" py-2 px-2 card" method="post" action="index.php" enctype="multipart/form-data" >
 <p>Please select the student number to update details</p>
 <small>This will update any user registered in the database</small>
       ID <input class="py-3" type="text" name="ID" id="ID"/></br>
       FIRST_NAME  <input class="py-3" type="text" name="first_name" id="first_name"/></br>
       LAST_NAME <input class="py-3" type="text" name="last_name" id="last_name"/></br>
	     TELEPHONE <input class="py-3" type="text" name="telephone" id="telephone"/></br>
       <input class="btn btn-secondary btn-lg btn-block" type="submit" id="update2" value="Update Student" />
 </form>

 <hr>



<?php
// DB CONNECTION INFO
// Within the PHP tags, add PHP code for connecting to the database.
$host = "enterprisearchitecturewebapp-mysqldbserver.mysql.database.azure.com";
$user = "mysqldbuser@enterprisearchitecturewebapp-mysqldbserver";
$pwd = "Sp@0987453";
$db = "mysqldatabase16925";

// Connect to database.
try {
  $conn = new PDO( "mysql:host=$host;dbname=$db", $user, $pwd);
  //$conn->setAttribute( PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION );
}
catch(Exception $e){
  die(var_dump($e));
}

/*POST*/
//Following the database connection code, add code for inserting registration information into the database.
if(!empty($_POST)) {
  try {
      $first_name = $_POST['first_name'];
      $last_name = $_POST['last_name'];
      $telephone = $_POST['telephone'];
      // Insert data
      $sql_insert = "INSERT INTO tblCDA3315C(FIRST_NAME, LAST_NAME, TELEPHONE) 
                     VALUES (?,?,?)";
      $stmt = $conn->prepare($sql_insert);
      $stmt->bindValue(1, $first_name);
      $stmt->bindValue(2, $last_name);
      $stmt->bindValue(3, $telephone);
      $stmt->execute();
  }
  catch(Exception $e) {
      die(var_dump($e));
  }
  echo "<h3>You're Registered!</h3>";
  header('Location: https://enterprisearchitecturewebapp.azurewebsites.net/');
  exit();
  }
 
//UPDATE USER FIRST NAME
if(isset($_POST['update'])) {

  $conn = mysql_connect( $host, $user, $pwd);
  
  if(! $conn ) {
     die('Could not connect: ' . mysql_error());
  }
  $ID = $_POST['ID']; 
  $first_name = $_POST['first_name']; 
  $last_name = $_POST['last_name'];
  $telephone = $_POST['telephone'];


  $sql = "UPDATE tblCDA3315C  SET first_name = $first_name last_name = $last_name  telephone = $telephone WHERE ID= $ID " ;
 // $sql = "UPDATE MyGuests SET lastname='Doe' WHERE id=2";

  // Seclect db to update table within
  mysql_select_db('mysqldatabase16925');
  $retval = mysql_query( $sql, $conn );
  
  if(! $retval ) {
     die('<h3>Could not update data: </h3>' . mysql_error());
  }
  echo "<h3>Updated data successfully\n</h3><br>";
  
  mysql_close($conn);
  header('Location: https://enterprisearchitecturewebapp.azurewebsites.net/');
  exit();
}




  // READ function button to read DB values to alert
  echo "<input style='
  width:100%;
  color: #fff;
  background-color: #1E90FF;
  border-color: #e1e1e1;
  padding: .5rem 1rem;
  font-size: 1.25rem;
  line-height: 1.5;
  border-radius: .3rem;' 
  type='button' 
  value='READ Display Registered User Data'
      onclick='read()'> <br> <hr>";

// READ in script function to get data by table id
      echo "<script>
        function read(){ 
        var d = new Date()
        alert('Latest Student Inventory Submissions: ' \r\n +   d.toUTCString()  +  
        ' _________________________________________________________________________  ' +
        document.getElementById('ud2').firstChild.innerText);
        console.log('Latest Inventory Submissions' + alert);
      };
   </script>";


//READ DB VALUES TO SCREEN
     //Finally, following the code above, add code for retrieving data from the database.
  $dbname = 'tblCDA3315C';
  $sql_select = "SELECT * FROM tblCDA3315C";
  $stmt = $conn->query($sql_select);
  $registrants = $stmt->fetchAll(); 
  if(count($registrants) > 0) {
      echo "<h2>People Who Are Registered:</h2>";
      echo "<table id='ud2' boarder=4>";
      echo "<tr id='ud1'><th style='width:200px'>DATE</th>";
      echo "<th style='width:200px'>ID</th>";
      echo "<th style='width:200px'>FIRST_NAME</th>";
      echo "<th style='width:200px'>LAST_NAME</th>";
      echo "<th style='width:200px'>TELEPHONE</th>";
      echo "<th style='width:400px'>DATABASE</th></tr>";
      foreach($registrants as $registrant) {
          echo "<tr ><td>". date("Y/m/d") . "</td>";
          echo "<td>".$registrant['ID']."</td>";
          echo "<td>".$registrant['FIRST_NAME']."</td>";
          echo "<td>".$registrant['LAST_NAME']."</td>";
          echo "<td>".$registrant['TELEPHONE']."</td>";
          echo "<td>".$dbname."</td></tr>";
      }
       echo "</table >";
       echo "<hr> <br>";
       
  } else {
      echo "<h3>No one is currently registered.</h3>";
  }

// DELETE last table entry of registered people
$dbname = 'tblCDA3315C';
echo "<h2 class='card-header mx-auto text-center'>Unregister a User!</h2> <br> ";
echo "<input style='
color: #fff;
background-color: #dc3545;
border-color: #a94442;
padding: .5rem 1rem;
font-size: 1.25rem;
line-height: 1.5;
border-radius: .3rem;' 
type='button'
 value='Delete Registered User'
    onclick='save()'>";
echo "<script>
    function save(){ document.getElementById('ud1').deleteRow(0);alert('Delete last submission');}
 </script>";

// GET Print all active tables in the database
echo "<br> <div  class='card mx-auto text-uppercase font-weight-bold' style='width:100%;' /> <h2 class='mx-auto text-center'>Active Database Tables</h2> <br>";

$con = new mysqli($host, $user, $pwd, $db);
if (mysqli_connect_errno()) {
    die(mysqli_connect_error());
    }
    $statement = $con->prepare("SHOW TABLES");
    $statement->bind_result($table);
    $statement->execute();
    while ($statement->fetch()){
    echo  "<h2 class='font-weight-bold table table-bordered'>". $table . " <br> "; 
    }
echo "<hr>";


 ?>
<div>
<div>
<div>

<div id="Div2">
<p>This is a block paragraph #2</p>
</div> </div><div>

<div id="Div3">
<p>This is a block paragraph #3</p>
</div>


</body>
</html>
