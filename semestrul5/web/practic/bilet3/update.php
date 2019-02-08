<a href="index.html">&lt;Home</a><br>

<?php
    // in loc de $_POST se poate folosi $_REQUEST care contine si $_GET si $_POST
    // la linia 36 am definit method="POST" si de aceea luam variabilele de pe $_POST
	if (isset($_POST['submit'])) {
		require "connection.php"; // importam fisierul ce contine conexiunea la baza de date
        // require, spre deosebire de include, da eroare daca nu a putut realiza importul

		$cod = $_POST['cod'];
		$nume = $_POST['nume'];
		$numar = $_POST['numar'];
		// Daca voiam sa nu retinem valorile in variabile separate trebuia sa le folosim in string cu acolade
        // exemplu: WHERE cod_loc=${_POST['cod']}
		$sql = "UPDATE locatari SET nume_pren='$nume', nr_per=$numar WHERE cod_loc=$cod";
		// aici se executa query-ul SQL, result va contine TRUE sau FALSE in functie de daca a fost eroare sau nu
		$result = $conn->query($sql);
		if ($result) {
		    // $conn->affected_rows ne spune cate randuri au fost modificate in ultimul query
            // Deci daca returneaza 0 inseamna ca valoarea nu a fost gasita
			if ($conn->affected_rows) {
				echo "Modificare efectuata cu succes";
			} else {
				echo "Nicio inregistrare nu a fost modificata";
			}
		} else {
			echo "Eroare";
		}
	}
?>


<!DOCTYPE html>
<html>
	<body>
		<form method="POST">
			Cod: <input required type="number" name="cod"><br>
			Nume si prenume: <input required name="nume"><br>
			Numar persoane: <input required type="number" name="numar"><br>
			<input type="submit" name="submit" value="Update">
		</form>
	</body>
</html>

<?php
if (!isset($sql)) die(); // daca e prima rulare si nu a fost executat query-ul inca nu vom arata si partea asta (asta face die aici)
echo "Query executat: $sql";
?>