<?php
	$n = 5;
	$result = 1;
	$i=2;
	while ($i <= $n) {
		$result *= $i;
		$i++;
	}
	echo $result; // pb 7, dar cu while
	
	$i=1; // pb 8, dar cu while
	while ($i <= 100) {
		echo "$i * 2 = " .$i*2;
		echo "\n";
		$i++;
	}
	
	for ($a = 1234; $a > 1; $a /= 10) { // pb 9, dar cu for
		echo $a%10; echo "*";
	}
?>