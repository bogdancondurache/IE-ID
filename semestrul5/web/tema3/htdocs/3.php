<?php
	$a = 2;
	$b = 5;
	if ($a == 0 && $b ==0) {
		echo "infinitate de solutii"; exit(0);
	}
	if ($a == 0) {
		echo "fara solutii"; exit(0);
	}
	echo -$b/$a;
?>