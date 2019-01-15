<?php
	$hostname = "127.0.0.1";
	$username = "root";
	$password = "";
	$database = "lab5";
	
	$conn = new mysqli($hostname, $username, $password, $database) or die ("error");
	
	$result = $conn->query("select * from mailing_list");
	
	if ($result) {
		while ($row = $result->fetch_row()) {
			echo $row[0] . "  " . $row[1] . "\n";
		}
	}
	
	$result->close();
	
	$conn->close();
	
//	$conn = mysqli_connect($hostname, $username, $password, $database) or die("error");
//	$query = "select * from mailing_list";
//	$result = mysqli_query($conn, $query);
//	if ($result) {
//		while ($row = mysqli_fetch_row($result)) {
//			echo $row[0] . "  " . $row[1] . "\n";
//		}
//	}
//	mysqli_free_result($result);
//	mysqli_close($conn);
?>