<!DOCTYPE html>
<html>
	<body>
        <a href="../index.html">&lt;Home</a><br>
		<form>
			Cod postal: <input id="zip" type="number" name="zip"><br>
			Strada: <input id="street" name="street"><br>
			<input type="submit">
		</form>
	</body>
	<script type="text/javascript">
		var xhttp = new XMLHttpRequest();  // pentru requesturi XHR trebuie instantiat un obiect nou de acest tip pentru a fi folosit
        // evenimentul de blur inseamna ca utilizatorul a iesit de pe acel input (a de-focusat)
        // avem acel e ca parametru, care e eventul, ca sa putem lua valoarea din input cu e.target.value
        // e.target e inputul in sine
		document.getElementById('zip').addEventListener('blur', function(e) {
			xhttp.onreadystatechange = function() {
			    // Asa se verifica in requesturi de tip XHP ca a fost executat cu succes
                // readyState 4 inseamna ca a terminat de executat requestul si a primit raspuns
                // status 200 inseamna ca serverul nu a returnat eroare
				if (this.readyState == 4 && this.status == 200) {
				    // raspunsul de la server vine pe this.responseText
                    // la inputuri valoarea se da cu .value nu cu .innerHTML ca la alte elemente
					document.getElementById('street').value = this.responseText;
				}
			};
			// facem un request de tip GET si punem in link parametrul care e codul zip introdus de user
            // iar numele acelei variabile in PHP va fi zip de la `?zip=`
			xhttp.open("GET", "data.php?zip=" + e.target.value, true);
			xhttp.send();  // aici se executa efectiv requestul
		})
	</script>
</html>