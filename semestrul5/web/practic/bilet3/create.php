<a href="index.html">&lt;Home</a><br>

<?php
	if (isset($_POST['submit'])) {
		require "connection.php";

		$nume = $_POST['nume'];
		$numar = $_POST['numar'];
		// ATENTIE: nume_pren e de tip varchar (in DB), deci am pus $nume intre ghilimele
        // nr_per e de tip int (in DB), nu punem ghilimele in jurul lui $numar
		$sql = "INSERT INTO locatari (nume_pren, nr_per) VALUES ('$nume', $numar)";
		$result = $conn->query($sql);
		if ($result) {
			echo "Inserare efectuata cu succes";
		} else {
			echo "Inserarea nu a reusit!";
		}
	}
?>


<!DOCTYPE html>
<html>
	<body>
		<form method="POST">
			Nume si prenume: <input required name="nume"><br>
			Numar persoane: <input required type="number" name="numar"><br>
			<input type="submit" name="submit" value="Inserare">
		</form>
	</body>
</html>

<?php
    if (!isset($sql)) die();
    echo "Query executat: $sql";
?>