<?php session_start(); ?>
<html>
<body>
<?php
	echo $_SESSION["nume"] . "<br />";
	echo $_SESSION["prenume"] . "<br />";
	echo $_SESSION["varsta"] . "<br />";
	unset($_SESSION["nume"]);
	unset($_SESSION["prenume"]);
	unset($_SESSION["varsta"]);
	session_destroy();
?>
</body>
</html>
