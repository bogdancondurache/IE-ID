<a href="../index.html">&lt;Home</a><br>

<?php
	require "../connection.php";
	$result = $conn->query("SELECT cod_loc, nume_pren FROM locatari");
	// selectam doar cele 2 coloane pe care o sa le si folosim
?>

<!DOCTYPE html>
<html>
	<body>
	<form action="display.php">
		<select name="cod">
        <!-- pentru un "listbox" (adica o lista simpla - dropdown) se foloseste select, iar option reprezinta fiecare valoare din lista -->
			<?php
				if ($result) {
					while ($row = $result->fetch_row()) {
						echo "<option value=${row[0]}>${row[1]}</option>"; // adaugam elementele din dropdown cu option
                        // valoarea este ce se va trimite catre PHP la submit (adica codul in cazul nostru
                        // ce este intre taguri <option> si </option> este ce i se va afisa utilizatorului
					}
				}
			?>
		</select><br>
		<input type="submit" name="submit" value="Submit">
	</form>
	</body>
</html>