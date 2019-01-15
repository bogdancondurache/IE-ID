<?php
	sleep(1);
	if(isset($_POST['nume'])) {
		echo "Salut " . $_POST['nume'];
	} else {
		echo "ghinion";
	}
?>