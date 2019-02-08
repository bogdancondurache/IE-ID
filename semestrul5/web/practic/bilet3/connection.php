<?php
	$hostname = "127.0.0.1";
	$username = "root";
	$password = "";
	$database = "test";

	$conn = new mysqli($hostname, $username, $password, $database) or die ("error");
?>